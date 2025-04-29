#include<iostream>
using namespace std;

int func(int);

int main()
{
	int r = 100;
	int ret = func(r);
	cout << ret << endl;
	

	ret = func(r);
	cout << ret << endl;
	return 0;
}

int func(int v)
{
	static int temp = 1000;
	temp = temp + v;

	return temp;
}