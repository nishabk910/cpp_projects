//print all natural no.s from 1 to 10 w/o having loops or goto and only not more than 6 line of code 
//excluding includes and declarations 
//and also not o use user defined recurssive function

#include<iostream>
using namespace std;

int main()
{
	static int n = 1;
	if (n == 10)
		exit (0);
	cout << n++ << endl;
	main();
	return 0;
}