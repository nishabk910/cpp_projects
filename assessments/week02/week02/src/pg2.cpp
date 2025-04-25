// Problem 1: Number-Star Pattern
//Problem Statement : Write the program for number and star pattern printing given n value.
//Input Format : Take N as input of type integer.
//Output Format : Print number and star pattern printing in a half diamond

//Constraints :
//4 <= N <= 10
//
//Sample Input1 :
//5
//Sample Output1 :
/*

*
*1 *
*121 *
*12321 *
*1234321 *
*123454321 *
*1234321 *
*12321 *
*121 *
*1 *
*

*/



#include <iostream>
using namespace std;


void printPattern(int n) 
{
	 
	for (int i = 0; i <= n; i++) 
	{
		cout << "*";
		for (int j = 1; j <= i; j++) 
		{
			cout << j;
		}
		for (int j = i - 1; j >= 1; j--) 
		{
			cout << j;
		}
		if (i > 0) cout << "*"; 
		cout << endl;
	}
	// lower half
	for (int i = n - 1; i >= 0; i--) 
	{
		cout << "*";
		for (int j = 1; j <= i; j++) 
		{
			cout << j;
		}
		for (int j = i - 1; j >= 1; j--) 
		{
			cout << j;
		}
		if (i > 0) cout << "*";
		cout << endl;
	}
}

int main() {
	int S;
	cin >> S;
	printPattern(S);
	return 0;
}
