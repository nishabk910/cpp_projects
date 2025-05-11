//Write a Program to Find the Factorial of a Number Using Loops

#include<iostream>

using namespace std;
int main() 
{
	int n,fact=1;
	cout << "enter the number:";
	cin >> n;

	for (int i = 1 ;i<=n;i++)
	{
		fact = fact * i;
		
	}
	cout << "fact : " <<fact<< endl;
	return 0;


}