/*
strings - collection of char

"hello" --> 5 chars + 1null char =size of string
len of the string --> excluding null char,collection all chars

string should always end up with a null char


note: each char in array of char is  rep a col
if it is a single dimension then 1 row w multiple col. of chars

fgets() --> read a string from file
fputs() --> write a string to file  declaration --> int puts(const char* str);

 segmentation fault, stacksmash, core dump
*/




#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char nameEmp[20]; //1 row with 20 cols
	cin >> nameEmp;
	cout << nameEmp << endl;
	cout << "Len String: " << strlen(nameEmp) << "\t Sizeof name: " << sizeof(nameEmp) << endl;


}








