#include <iostream>
#include <string>
#include <cstdlib>
#include "Time.h"

Time:: Time()
{
	Seconds = 0;
	Minutes = 0;
	Hours = 0;
}

Time::~Time(){}
void Time::SetSeconds (int S)
{
	Seconds = S;
}
int Time::GetSeconds()
{
	return Seconds;
}
void Time::SetMinutes (int M)
{
	Minutes = M;
}
int Time::GetMinutes()
{
	return Minutes;
}
void Time::SetHours (int H)
{
	Hours = H;
}
int Time::GetHours()
{
	return Hours;
}
