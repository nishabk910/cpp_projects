#pragma once

#include <string>
using namespace std;

class HotelRoom
{
private:
	int roomNumber;
	string type;
	bool isBooked;

public:
	HotelRoom(int n, string t);
	void bookRoom();
	void showStatus();
};














