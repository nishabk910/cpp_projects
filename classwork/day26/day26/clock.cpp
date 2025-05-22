#include<iostream>
#include "clock.h"

using namespace std;

void Digiclock::start() {
	second = 0;
	hour = 0;
	min = 0;

}


void Digiclock::digiSecond()
{
	second++;
	if (second == 60)
	{
		digiMin();
		second = 0;


	}

}

void Digiclock::digiMin()
{
	min++;
	if (min == 60)
	{
		digiHour();
		min = 0;
	}
}

void Digiclock::digiHour()
{
	hour++;
}

void Digiclock::display() {

	cout << "seconds :" << second;
	cout << "min : " << min;
	cout << "hour : " << hour;


}