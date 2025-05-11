//26	Write a Program to Check if Two Strings are Anagram or Not

#include<iostream>
#include<string>
using namespace std;

bool anagram(string str1, string str2) {
	

	if (str1.length() != str2.length())
		return false;

	int count[26] = { 0 };

	for (int i = 0;i < str1.length();i++)
	{
		count[str1[i] - 'a']++;
		count[str2[i] - 'a']--;

	}
	for (int i = 0;i < 26;i++)
	{
		if (count[i] != 0)
		{
			return false;

		}
		return true;
	}
	
}

int main() 
{
	string str1;
	string str2;
	cout << "enter str 1:";
	getline(cin, str1);
	cout << "enter str 2:";
	getline(cin, str2);
	if (anagram(str1, str2))
	{
		cout << "anagram" << endl;

	}
	else 
	{
		cout << "not anagram" << endl;

	}
	return 0;
}