//20	Write a Program to Calculate the Greatest Common Divisor of Two Numbers

#include<iostream>

using namespace std;

int gcd(int a, int b)
{
	while (b != 0)
	{
		int rem = a % b;
		a = b;
		b = rem;
	}
	return a;
}

int main()
{
	int num1, num2;
	cout << "enter the two numbers:";
	cin >> num1 >> num2;
	cout << "the gcd of " << num1 <<" and " << num2 << " is : " << gcd(num1, num2);
	return 0;



}