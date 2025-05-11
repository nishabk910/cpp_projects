//Write a Program to Print Check Whether a Character is an Alphabet or Not

#include<iostream>

using namespace std;

int main()
{
	char c;
	cout << "enter the alphabet:";
	cin >> c;


	if ((c >='A' && c <= 'Z') || (c >= 'a' && c <= 'z'))

	{
		cout << "alphabet";

	}
	else 
	{
		cout << "not alphabet";

	}
	return 0;
		

}