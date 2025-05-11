//21	Write a Program to Calculate the Lowest Common Multiple (LCM) of Two Numbers

#include<iostream>
using namespace std;

int gcd(int a, int b)
{
	while (b != 0) {
		int rem = a % b;
		a = b;
		b = rem;

	}
	return a;

}
int lcm (int a, int b)
{
	return (a * b) / gcd(a, b);


}

int main()
{
	int num1, num2;
	cout << "enter 2 numbers:";
	cin >> num1 >> num2;
	cout << "the lcm of " << num1 << " and " << num2 << " is : " << lcm(num1, num2);
	return 0;

}






