#include <iostream>
#include "pg2.h"
using namespace std;




HotelRoom::HotelRoom(int n, string t) 
{
    roomNumber = n;
    type = t;
    isBooked = false;
}

void HotelRoom::bookRoom()
{
    isBooked = true;
}

void HotelRoom::showStatus()
{


    if (isBooked)
    {
        cout << "Room " << roomNumber << " " << type << " is booked" << endl;
    }
    else
    {
        cout << "Room " << roomNumber << " " << type << " is available" << endl;
    }

}