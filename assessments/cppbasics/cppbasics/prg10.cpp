//10 Write a Program to Remove the Vowels from a String

#include<iostream>
#include<string>

using namespace std;

int main()
{
	string str;

	string updatedStr = "";

	cout << "enter a string:";
	getline(cin, str);



	for (int i = 0;i < str.length();i++)
	{
		if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' &&
			str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U')
		{
			updatedStr += str[i];


		}

	}
	cout << "string without vowels:" << updatedStr << endl;



	return 0;


}