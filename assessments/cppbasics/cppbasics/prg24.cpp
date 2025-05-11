//Write a Program to Calculate the Sum of Elements in an Array

#include<iostream>
using namespace std;

int main() {
	int arr[] = { 1,2,3,4,5 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int sum = 0;

	for (int i = 0;i < n;i++)
	{
		sum += arr[i];

	}
	cout << "sum of array:" << sum <<endl;
	return 0;
}





