//Write a Program to Find the Length of the String Without using strlen() Function

#include<iostream>
#include<string>
using namespace std;

int main() 
{

	string str;
	cout << "enter the string:";
	getline(cin,str);
	int  count= 0;
	while (str[count] != 0) 
	{
		count++;
	}
	cout << "length of string is:" << i << endl;
	return 0;

}