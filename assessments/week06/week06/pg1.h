#pragma once
#include <iostream>

class Flight

{
public:
    char flightno[10];
    int totalSeats;
    int bookedSeats;


    Flight(const char* num, int seats);
    void bookSeats(int seats);
    void dispAvailable();

};





















