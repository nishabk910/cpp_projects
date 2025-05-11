//Write a Program to Find a Leap Year or Not

#include<iostream>

using namespace std;
int main()
{
	int year;
	cout << "enter the year :";
	cin >> year;


	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		cout << "it is a leap year : " << year << endl;;
	}
	else {
		cout << "not leap";

	}
	return 0;
}