//sum ofarrays using pointers

#include<iostream>

using namespace std;

int sumArr(int* , int);

int main() 
{
	int list[] = { 1,2,3,4,5 };
	int cap = sizeof(list) / sizeof(list[0]);
	cout << "\t" << sumArr(&list[0], cap) << endl;

	return 0;

}

int sumArr(int* ptr, int n)
{
	int sum = 0;



	//logic to call sum of list
	//ptr converted array notation
	/*
	for (int i = 0;i < n;i++)
		sum + =ptr[i];

		*/

	for (int i = 0;i < n;i++, ptr++)
		sum += *ptr;


		return sum;

}
