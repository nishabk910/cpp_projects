#include<iostream>

using namespace std;


template<class T1,class T2>


class Box
{

private:
	T1 data1;
	T2 data2;
public:

	Box(T1 v1,T2 v2):data1(v1), data2(v2){}
	void printData() {
		cout << "Data 1:" << data1 << endl;
		cout << "Data 2:" << data2 << endl;

	}
};


int main() {
	Box<int, float>intBox(10, 12.5);
	intBox.printData();
	Box<char, char>charBox('r', 'A');
	charBox.printData();

	return 0;

}