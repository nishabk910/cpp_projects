//35	Write a Program to Print the Given String in Reverse Order

#include<iostream>
#include<string>

using namespace std;
int main() {
	string str;
	cout << "enter a string:" << endl;
	getline(cin, str);

	for (int i = str.length() - 1;i >= 0;i--)
	{
		cout<<str[i];

	}
	return 0;



}