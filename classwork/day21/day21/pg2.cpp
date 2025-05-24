#include<iostream>
using namespace std;
int main() {
	int a[3] = { 1,2,3 };
	cout << a[0] << a[1] << a[2] << endl;


	int* ptr = nullptr;


	ptr = a;
	cout << *ptr << endl;

	ptr++;

	cout << *ptr << endl;


	/*ptr = &a[0];
	cout << "content of ptr" << *ptr << endl;


	ptr = &a[1];
	cout << "content of ptr" << *ptr << endl;

	*/


	return 0;

 }