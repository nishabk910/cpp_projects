#include<iostream>
//#include "typeConv.h"

using namespace std;
int* func(int);

int main()
{
	typeConv();
		return 0;
}

int typeConv()
{
	int a = 5;
	float b = 10.2;
	float res = a + b;

	cout << res << endl;
}

void typeConvExp()
{
	int a = 10;
	int b = 3;
	int res = a / b;
	cout << res << endl;

	int res =(float) a /(float) b;

	cout << res << endl;
}





	
