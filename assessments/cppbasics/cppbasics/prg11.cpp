//Write a Program to Remove All Characters From a String Except Alphabets


#include <iostream>
#include<string>

using namespace std;

int main() 
{
	string str, result="";
	
	cout << "enter a string:";
	getline(cin, str);
	
	for (int i = 0;i < str.length();i++)
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			result += str[i];
		}		
		

	}
	cout << "string containing only alphabets : " << result;
	return 0;

}

