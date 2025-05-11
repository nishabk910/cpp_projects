//25	Write a Program to Check if the Given String is Palindrome or Not

#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str;
	int count = 0;
	cout << "enter a string:";
	getline(cin, str);


	for (int i = 0;i < str.length()/2;i++)
	{
		if (str[i] != str[str.length() - i - 1])
		{
			count++;

		}
		if (count == 0)
		{
			cout << "palindrome" << endl;


		}
		else 
		{
			cout << "not palindrome"<< endl;


		}

	}
	return 0;


	

}