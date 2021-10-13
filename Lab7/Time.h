#include <iostream>
#include <string>
#include <cstdlib>

class Time
{
	public:
	Time();
	Time(int S, int M, int H);
	~Time();

	void SetSeconds(int S);

	int GetSeconds();

	void SetMinutes(int M);

	int GetMinutes();

	void SetHours(int H);

	int GetHours();

	private:
		int Seconds;
		int Minutes;
		int Hours;
};
