#include<iostream>

using namespace std;

int main()
{
	float sp, profit, cp;

	cout << "enter selling Price:";
	cin >> sp;

	cout << "enter profit:";
	cin >> profit;

	cp = sp - profit;

	cout << "cost price :" << cp << endl;

	return 0;
}