//13 Write a Program to Find the Sum of the First N Natural Numbers

#include<iostream>
using namespace std;

int main() {
	int n,s=0;
	cout << "enter n natural numbers : ";
	cin >> n;

	for (int i = 1;i <= n;i++)
	{
		s += i;
	}
	cout << "sum of n  " << n << "natural numbers is : " << s << endl;
	return 0;

}