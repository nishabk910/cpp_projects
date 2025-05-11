//9	Write a Program to Count the Number of Vowels

#include<iostream>
#include<string>

using namespace std;

int main()
{
	string str;
	int count = 0;

	cout << "enter the string:";
	getline(cin, str);

	for (int i = 0;i < str.length();i++)
	{
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
			str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') 
		{
			count++;

		}

	}

	if (count > 0)
	{
		cout << "vowels are :" << count << endl;


	}
	else {
		cout << "nothing found";

	}
	return 0;

}