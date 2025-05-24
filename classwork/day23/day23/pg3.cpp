#include<iostream>
#include<stdlib>

using namespace std;

int* func(int a)

{
	int sum = 0;
	sum += a;
	cout << "BA of sum=" << (unsigned long int) & sum << endl;
	return &sum;

}

int main()
{
	int* ptr = func(101);//dangling ptr
	cout << *ptr << "\t address of sum=" << (unsigned long int)ptr << endl;
	*ptr = 202;
	ptr + func(383);




	cout << endl;



}