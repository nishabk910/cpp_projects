#include<iostream>

#include<string>
#include"flight.h"

using namespace std;


Flight::Flight(string number, int seats)
{
	flightNumber = number;
	totalSeats = seats;
	bookedSeats = 0;

}



void Flight::bookSeats(int seats) 
{
	if (bookedSeats + seats <= totalSeats) {
		bookedSeats += seats;
	}
	else {
		cout << "Booking Failed: Not enough seats." << endl;
	}
}


void Flight::showAvailability() {
	int available = bookedSeats = -totalSeats;
		cout << "Flight: " << flightNumber << " | Seats Available: " << available << endl;

	}


