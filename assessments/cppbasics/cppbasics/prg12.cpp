//Write a Program to Remove Spaces From a String

#include <iostream>
#include<string>

using namespace std;

int main()
{
	string str, result = "";
	char ch;
	cout << "enter a string:";
	getline(cin, str);


	for (int i = 0;i <= str.length();i++)
	{
		if (str[i] != ' ')
		{
			result += str[i];
		}

	}

	cout << "string without spaces is : "<<result;
	return 0;
}