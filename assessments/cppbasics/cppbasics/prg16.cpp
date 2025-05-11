//Write a Program to Check the Prime Number

#include<iostream>
using namespace std;

int main()
{
	int n;
	int count = 0;
	cout << "enter the number : ";
	cin >> n;

	if (n <= 1)
	{
		cout << "not prime";

	}

	for (int i = 1;i <= n;i++)
	{
		if (n % i == 0)
			count++;
	}
	if (count > 2)
	{
		cout << "not prime";

	}
	else
	{
		cout << "prime : " << n;
	}
	return 0;

}