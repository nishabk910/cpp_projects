#pragma once


#include<string>
using namespace std;


class Flight
{
protected:
	int flightNumber;
	int totalSeats;

	int bookedSeats;

public:
	Flight(string number, int seats);
	void bookSeats(int seats);
	void showAvailability();



};
