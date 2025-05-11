//Write a Program to Find the Greatest of the Three Numbers


#include<iostream>
using namespace std;

int main() {

	int a, b, c;
	cout << "enter 3 numbers:" << endl;
	cin >> a >> b >> c;

	if (a >= b&&a>=c)
	{
		cout << "a is greatest:" << a;

	}
	else if(b>=a&&b>=c)
	{
		cout << "b is greatest:" << b;
	}
	else {
		cout << "c is greatest:" << c;
	}

	return 0;
}