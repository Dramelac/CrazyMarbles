#pragma once
#include <iostream>
#ifndef TIMER_H
#define TIMER_H

#include <thread>
#include <chrono>

using namespace std;
class Timer
{
private:
	int second;
	typedef chrono::seconds Intervals;	
	typedef function<void(void)> Timeout;	
	bool running=false;
	const Intervals interval = Intervals(1);
	Timeout timeout;
	static Timer timer;

	
public:

	thread my_thread;

	Timer();

	~Timer();

	static void Start_Timer();

	static void Stop_Timer();

	void set_second(int second);

	const int secondGet();
	
	const thread threadGet();

	const bool runningGet();	

	const Intervals intervalGet();

	const Timeout timeoutGet();

	void decrementation();
	
	
};


#endif // TIMER_H