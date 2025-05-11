//Write a Program to Check Whether a Character is a Vowel or Consonant

#include<iostream>
using namespace std;

int main() 
{
	char ch;
	cout << "enter the Character : ";
	cin >> ch;

	if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))

	if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
			ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') 
	{
			cout << "it is vowel";
	 }

	else
	{
		cout << "consonant";
	}
	else 
	{
		cout << "not a character";
	}
	return 0;
}