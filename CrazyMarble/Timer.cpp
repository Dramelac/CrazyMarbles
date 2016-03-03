#include "Timer.hpp"


void Timer::Stop_Timer()
{
	Timer::timer.my_thread.join();
}

const int Timer::secondGet()
{
	return second;
}

void Timer::set_second(int second)
{
	this->second = second;
}

const bool Timer::runningGet()
{
	return running;
}


const Timer::Intervals Timer::intervalGet()
{
	return interval;
}


const Timer::Timeout Timer::timeoutGet()
{
	return timeout;
}

Timer::Timer()
{
}


Timer::~Timer()
{
}

void Timer::decrementation()
{
	second--;
	cout << second << endl;
}

void test(Timer timer)
{
	while (timer.runningGet() == true) {
		this_thread::sleep_for(timer.intervalGet());		
		timer.timeoutGet();
	}
}

void Timer::Start_Timer()
{
	Timer timer;
	timer.running = true;	
	timer.my_thread = thread([=]()
	{ 
		while (Timer::timer.runningGet() == true) 
		{
			this_thread::sleep_for(Timer::timer.intervalGet());		
		Timer::timer.timeoutGet();
		}
	});
	if(timer.secondGet()<=0)
	{
		timer.running = false;
		timer.Stop_Timer();
	}
	
}





