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

#ifndef CONT_RANDOM_H
#define CONT_RANDOM_H

#include "random_global.h"


// Implement some continuous, non-function style random waveform generators.
// These generators are good for things such as stochastic audio modeling, etc...
// They are not functions, so they do not map an input range to an output; they
// just output randomized waveforms 1 sample at a time, over some given sample
// rate and period.

// Two variants are implemented, value and gradient. Compare to the functional
// versions of value and gradient noise in the noise library.

namespace random_gen
{
    class CContinuousRandomSequence
{
    public:
    CContinuousRandomSequence()
    {
        setFrequency(1.0);
        setAmplitude(1.0);
        setInterpType(QUINTIC);
        reset();
    }

    CContinuousRandomSequence(double freq, double amp, int interptype)
    {
        setFrequency(freq);
        setAmplitude(amp);
        setInterpType(interptype);
        reset();
    }

    static void setSampleRate(double rate)
    {
        s_samplerate=rate;
        s_sampleperiod = 1.0/rate;
    }

    void setFrequency(double freq)
    {
        m_frequency=freq;
    }

    void setAmplitude(double amp)
    {
        m_amplitude=amp;
    }

    void setInterpType(int interp)
    {
        if(interp<NONE) interp=NONE;
        if(interp>QUINTIC) interp=QUINTIC;
        m_interptype=interp;
    }

    void reset()
    {
        m_val1 = generateValue();
        m_val2 = generateValue();
        m_currentstep=0.0;
    }

    double getValue()
    {
        double value;
        switch(m_interptype)
        {
            case NONE:  value=noInterp(); break;
            case LINEAR: value=linearInterp(); break;
            case CUBIC: value=cubicInterp(); break;
            case QUINTIC: value=quinticInterp(); break;
            default: value=quinticInterp(); break;
        }
        advanceState();
        return value;
    }

    enum EInterpTypes
    {
        NONE,
        LINEAR,
        CUBIC,
        QUINTIC
    };


    protected:

    double m_frequency, m_amplitude;
    double m_currentstep, m_val1, m_val2;
    static double s_samplerate, s_sampleperiod;
    int m_interptype;

    double generateValue()
    {
        return (rand01()*2.0-1.0) * m_amplitude;
    }

    void advanceState()
    {
        double increment=m_frequency * s_sampleperiod;
        m_currentstep += increment;
        if(m_currentstep >= 1.0)
        {
            m_val1=m_val2;
            m_val2=generateValue();
            m_currentstep -= 1.0;
        }
    }

    double noInterp()
    {
        return m_val1;
    }

    double linearInterp()
    {
        return m_val1 + m_currentstep * (m_val2-m_val1);
    }

    double cubicInterp()
    {
        double interpolant = (m_currentstep*m_currentstep*(3-2*m_currentstep));
        return m_val1 + interpolant * (m_val2-m_val1);
    }

    double quinticInterp()
    {
        double interpolant = m_currentstep*m_currentstep*m_currentstep*(m_currentstep*(m_currentstep*6-15)+10);
        return m_val1 + interpolant * (m_val2-m_val1);
    }
};

class CContinuousRandomSequenceGradient
{
    public:
    CContinuousRandomSequenceGradient()
    {
        setFrequency(1.0);
        setAmplitude(1.0);
        setInterpType(QUINTIC);
        reset();
    }

    CContinuousRandomSequenceGradient(double freq, double amp, int interptype)
    {
        setFrequency(freq);
        setAmplitude(amp);
        setInterpType(interptype);
        reset();
    }

    static void setSampleRate(double rate)
    {
        s_samplerate=rate;
        s_sampleperiod = 1.0/rate;
    }

    void setFrequency(double freq)
    {
        m_frequency=freq;
    }

    void setAmplitude(double amp)
    {
        m_amplitude=amp;
    }

    void setInterpType(int interp)
    {
        if(interp<NONE) interp=NONE;
        if(interp>QUINTIC) interp=QUINTIC;
        m_interptype=interp;
    }

    void reset()
    {
        m_grad1 = generateValue();
        m_grad2 = generateValue();
        m_currentstep=0.0;
    }

    double getValue()
    {
        double value;
        switch(m_interptype)
        {
            case NONE:  value=noInterp(); break;
            case LINEAR: value=linearInterp(); break;
            case CUBIC: value=cubicInterp(); break;
            case QUINTIC: value=quinticInterp(); break;
            default: value=quinticInterp(); break;
        }
        advanceState();
        return value*m_amplitude*2.0;
    }

    enum EInterpTypes
    {
        NONE,
        LINEAR,
        CUBIC,
        QUINTIC
    };


    protected:

    double m_frequency, m_amplitude;
    double m_currentstep, m_grad1, m_grad2;
    static double s_samplerate, s_sampleperiod;
    int m_interptype;

    double generateValue()
    {
        return (rand01()*2.0-1.0) * m_amplitude;
    }

    void advanceState()
    {
        double increment=m_frequency * s_sampleperiod;
        m_currentstep += increment;
        if(m_currentstep >= 1.0)
        {
            m_grad1=m_grad2;
            m_grad2=generateValue();
            m_currentstep -= 1.0;
        }
    }

    double noInterp()
    {
        return m_grad1*m_currentstep;
    }

    double linearInterp()
    {
        double v1=m_grad1*m_currentstep;
        double v2=m_grad2*(m_currentstep-1.0);
        return v1 + m_currentstep * (v2-v1);
    }

    double cubicInterp()
    {
        double v1=m_grad1*m_currentstep;
        double v2=m_grad2*(m_currentstep-1.0);
        double interpolant = (m_currentstep*m_currentstep*(3-2*m_currentstep));
        return v1 + interpolant * (v2-v1);
    }

    double quinticInterp()
    {
        double v1=m_grad1*m_currentstep;
        double v2=m_grad2*(m_currentstep-1.0);
        double interpolant = m_currentstep*m_currentstep*m_currentstep*(m_currentstep*(m_currentstep*6-15)+10);
        return v1 + interpolant * (v2-v1);
    }
};
};


#endif
