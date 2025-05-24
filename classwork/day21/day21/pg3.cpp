//find the max of two number using pointers

#include<iostream>
using namespace std;

int max2num(int*, int*);

int main() 
{
	int v1 = 20, v2 = -10;
	cout << max2num(&v1, &v2) << endl;

}

int max2num(int* x, int* y);
{
	//int retValue = 0;


	return ((*x > *y) ? *x : *y);





/*
	if (*x < *y)
		returnValue = *y;
	else
		retValue = * x;*
	return retValue;

*/

}


