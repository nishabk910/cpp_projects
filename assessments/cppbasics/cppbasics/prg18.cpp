//18	Write a Program to Check Whether a Number is an Armstrong Number or Not

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int t, o, n,d, s = 0;
	int count = 0;

	cout << "enter a number:";
	cin >> n;

	o = n;
	t = n;
	while (t > 0)
	{
		t = t / 10;
		count++;

	}
	t = n;
	while (t > 0)
	{
		d = t % 10;
		s += pow(d, count);
		t = t / 10;
	}
	if (s == o)
	{
		cout << "armstrong" << endl;
	}
	else
	{
		cout << "not armstrong" << endl;
	}


	return 0;

}
