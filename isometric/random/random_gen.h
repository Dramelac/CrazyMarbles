/*
Copyright (c) 2008 Joshua Tippetts

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
*/
#ifndef RANDOM_GEN_H
#define RANDOM_GEN_H
#include <ctime>
#include <algorithm>

namespace random_gen
{

    class CBasePRNG
    {
        public:
        CBasePRNG(){};
        virtual ~CBasePRNG(){};

        virtual uint32_t get()=0;
        virtual void setSeed(uint32_t s)=0;

        void setSeedTime()
        {
            setSeed(static_cast<uint32_t>(std::time(0)));
        }

        uint32_t getTarget(uint32_t t)
        {
            double v=get01();
            return (uint32_t)(v*(double)t);
        }

        uint32_t getRange(uint32_t low, uint32_t high)
        {
            if(high < low) std::swap(low, high);
            double range = (double)((high - low)+1);
            double val = (double)low + get01()*range;
            return (uint32_t)(val);
        }

        double get01()
        {
            return ((double)get() / (double)(4294967295UL));
        }
    };

    class LCG : public CBasePRNG
    {
        public:
        LCG()
        {
            setSeed(10000);
        }

        void setSeed(uint32_t s)
        {
            m_state=s;
        }

        uint32_t get()
        {
            return (m_state=69069*m_state+362437);
        }

        protected:
        uint32_t m_state;
    };

    // Setup a static, global LCG for seeding other generators.
    static LCG lcg;



    // The following generators are based on generators created by George Marsaglia
    // They use the static lcg created above for seeding, to initialize various
    // state and tables. Seeding them is a bit more involved than an LCG.
    class Xorshift : public CBasePRNG
    {
        public:
        Xorshift()
        {
            setSeed(10000);
        }

        void setSeed(uint32_t s)
        {
            lcg.setSeed(s);
            m_x=lcg.get();
            m_y=lcg.get();
            m_z=lcg.get();
            m_w=lcg.get();
            m_v=lcg.get();
        }

        uint32_t get()
        {
            uint32_t t;
            t=(m_x^(m_x>>7)); m_x=m_y; m_y=m_z; m_z=m_w; m_w=m_v;
            m_v=(m_v^(m_v<<6))^(t^(t<<13));
            return (m_y+m_y+1)*m_v;
        }

        protected:
        uint32_t m_x, m_y, m_z, m_w, m_v;
    };

    class MWC256 : public CBasePRNG
    {
        public:
        MWC256()
        {
            setSeed(10000);
        }

        void setSeed(uint32_t s)
        {
            lcg.setSeed(s);
            for(int i=0; i<256; ++i)
            {
                m_Q[i]=lcg.get();
            }
            c=lcg.getTarget(809430660);
        }

        uint32_t get()
        {
            uint64_t t,a=809430660LL;
            static uint8_t i=255;
            t=a*m_Q[++i]+c; c=(t>>32);
            return(m_Q[i]=t);
        }

        protected:
        uint32_t m_Q[256], c;
    };

    class CMWC4096 : public CBasePRNG
    {
        public:
        CMWC4096()
        {
            setSeed(10000);
        }

        void setSeed(uint32_t s)
        {
            lcg.setSeed(s);   // Seed the global random source

            // Seed the table
            for(int i=0; i<4096; ++i)
            {
                m_Q[i]=lcg.get();
            }

            c=lcg.getTarget(18781);
        }

        uint32_t get()
        {
            uint64_t t, a=18782LL, b=4294967295UL;
            static uint32_t i=2095;
            uint32_t r=b-1;

            i=(i+1)&4095;
            t=a*m_Q[i]+c;
            c=(t>>32); t=(t&b)+c;
            if(t>r) { c++; t=t-b;}
            return (m_Q[i]=r-t);
        }

        protected:
        uint32_t m_Q[4096], c;
    };

    class KISS : public CBasePRNG
    {
        public:
        KISS()
        {
            setSeed(10000);
        }

        void setSeed(uint32_t s)
        {
            lcg.setSeed(s);
            z=lcg.get();
            w=lcg.get();
            jsr=lcg.get();
            jcong=lcg.get();
        }

        uint32_t get()
        {
            z=36969*(z&65535)+(z>>16);
            w=18000*(w&65535)+(w>>16);
            uint32_t mwc = (z<<16)+w;

            jcong=69069*jcong+1234567;

            jsr^=(jsr<<17); jsr^=(jsr>>13); jsr^=(jsr<<5);

            return (mwc^jcong + jsr);
        }

        public:
        uint32_t z,w,jsr,jcong;
    };
};

#endif
