#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>
#include "Time.h"

using namespace std;

void getTimeFromUser(Time& time)
{
	string input;
	getline(cin, input);
	string inputHours;
	string inputMinutes;
	string inputSeconds;
	size_t position = input.find(":");
	inputHours = input.substr(0,2);
	inputMinutes = input.substr(position + 1, 2);
	inputSeconds = input.substr(input.find(":",3)+1);
	time.SetHours(atoi(inputHours.c_str()));
	time.SetMinutes(atoi(inputMinutes.c_str()));
	time.SetSeconds(atoi(inputSeconds.c_str()));
}
void print24Hour(Time time)
{
	if(time.GetHours() < 10)
		cout <<setfill('0')<<setw(2)<<time.GetHours()<<":";
	else
		cout << time.GetHours()<<":";
	if (time.GetMinutes()<10)
		cout <<setfill('0')<<setw(2)<<time.GetMinutes()<<":";
	else
		cout<<time.GetMinutes()<<":";
	if(time.GetSeconds()<10)
		cout <<setfill('0')<<setw(2)<<time.GetSeconds()<<" ";
	else
		cout <<time.GetSeconds();
}
int main()
{
	Time startTime, endTime;
	cout<<"Enter the start time for the lecture (format is HH:MM:SS): ";
	getTimeFromUser(startTime);
	if(startTime.GetHours()>23||startTime.GetHours() < 0)
	{
		cout<<"The start time entered is invalid!"<<"\n";
		return 0;
	}
	else if(startTime.GetMinutes()>59||startTime.GetMinutes() < 0)
	{
		cout<<"The start time entered is invalid!"<<"\n";
		return 0;
	}
	else if(startTime.GetSeconds()>59||startTime.GetSeconds() < 0)
	{
		cout<<"The start time entered is invalid!"<<"\n";
		return 0;
	}
	cout <<"Enter the end time for the lecture (format is HH:MM:SS):";
	getTimeFromUser(endTime);
	if(endTime.GetHours()>23|| endTime.GetHours() <0)
	{
		cout<<"The end time entered is invalid!"<<"\n";
		return 0;
	}
	else if(endTime.GetMinutes()>59||endTime.GetMinutes() < 0)
	{
		cout<<"The end time entered is invalid!"<<"\n";
		return 0;
	}
	else if(endTime.GetSeconds()>59||endTime.GetSeconds() < 0)
	{
		cout <<"The end time entered is invalid!"<<"\n";
		return 0;
	}
	cout<<"The lecture starts at ";
	print24Hour(startTime);
	cout<<" and ends at ";
	print24Hour(endTime);
	return 0;
}
