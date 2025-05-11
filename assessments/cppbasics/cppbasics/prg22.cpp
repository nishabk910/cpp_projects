//22	Write a Program to Find the Smallest and Largest Element in an Array

#include<iostream>
using namespace std;

void findminmax(int arr[], int n)
{
	int min = arr[0];
	int max = arr[0];

	for (int i = 1;i < n;i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
		if (arr[i] > max)
		{
			max = arr[i];
			}
		


	}
	cout << "min" << " is : " <<  min  << endl;
	cout << "max" << " is : " <<  max   << endl;

}
int main()
{
	int arr[] = { 1,2,3,4,9,8 };
	int N = sizeof(arr) / sizeof(arr[0]);
	findminmax(arr, N);
	return 0;

}