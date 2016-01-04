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

// Implement a few random functions in the global space, for simplicity

#include "random_global.h"
#include "random_gen.h"

#include <iostream>
static random_gen::KISS global_gen;

unsigned int randInt()
{
    return global_gen.get();
}

void setSeed(unsigned int seed)
{
    //std::cout << "Setting seed: " << seed << std::endl;
    global_gen.setSeed(seed);
}

void setSeedTime()
{
    global_gen.setSeedTime();
}

unsigned int randTarget(unsigned int target)
{
    return global_gen.getTarget(target);
}

unsigned int randRange(unsigned int low, unsigned int high)
{
    return global_gen.getRange(low, high);
}

unsigned int diceRoll(unsigned int sides, unsigned int dice)
{

    unsigned int Roll;
    unsigned int c;

    Roll=0;
    for(c=0;c<dice;c++)
      Roll+=randRange(1,sides);

    return Roll;
}

double rand01()
{
    return global_gen.get01();
}

