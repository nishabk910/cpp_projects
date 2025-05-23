
#include <iostream>
using namespace std;

#include "pg1.h"

Flight::Flight(const char* num, int seats)
{
    for (int i = 0; i < 10 && num[i] != '\0'; i++)
        flightno[i] = num[i];
    flightno[9] = '\0';  

    totalSeats = seats;
    bookedSeats = 0;
}


void Flight::bookSeats(int seats)
{
    int remaining = totalSeats - bookedSeats;

    if (seats > remaining)
    {
        cout << "Booking failed - no seats" <<endl;
        return;
    }

    bookedSeats= bookedSeats + seats;
}


void Flight::dispAvailable()
{
    int empty = totalSeats - bookedSeats;
    cout << "Flight: " << flightno << "Seats empty: " << empty <<endl;
}
