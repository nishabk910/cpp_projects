#include<iostream>
using namespace std;
int main()
{

	int* ptr = nullptr;
	int a = 10;

	cout <<"address of a " << a << endl;
	cout << "address of a " << &a << endl;
	cout <<"address of ptr"<< ptr<< endl;
	cout << "address of ptr" << &ptr << endl;

	ptr = &a;
	cout << "address of ptr" << ptr << endl;

	*ptr = 20;
	cout << "add of a" << &a << endl;
	cout << "contents of ptr" << *ptr << endl;


	return 0;




}

