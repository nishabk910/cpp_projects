//Write a C++ Program to Check Whether a Number is a Positive or Negative Number

#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "enter the number:" << endl;
	cin >> n;

	if (n > 0)
	{
		cout << "it is positive" << endl;
	}
	else if (n<0)
	{
		cout << "it is negative" << endl;
	}
	else
	{
		cout << "it is either positive or negative " << endl;
	}
	return 0;


}
