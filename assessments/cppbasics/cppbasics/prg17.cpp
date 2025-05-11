//Write a Program to Check Palindrome

#include<iostream>
#include<string>

using namespace std;

int main() 
{
	string str;
	cout << "enter a str:";
	getline(cin, str);
	int count = 0;
	

	for (int i = 0;i <= str.length()/2;i++)
	{
		if (str[i] != str[str.length() - i - 1]) {
			count++;
		}
	}
	if (count == 0) {
		cout << "it is a palindrome" << endl;

	}
	else
	{
		cout << "not a palindrome" << endl;
	}

	
	return 0;

}