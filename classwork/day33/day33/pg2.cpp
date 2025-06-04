#include<iostream>
using namespace std;

template<class T1, class T2>


class calci
{
private:
	T1 data1;
	T2 data2;

public:
	calci(T1 v1, T2 v2) :data1(v1), data2(v2) {}

	void add() {


		cout << "Data 1" << "+" << "Data 2 " << "is" << data1 + data2 << endl;
	}
	void sub() {
		cout << "Data 1" << "-" << "Data 2 " << "is" << data1 - data2 << endl;
	}
	void mul() {
		cout << "Data 1" << "*" << "Data 2 " << "is" << data1 * data2 << endl;
	}
	void div() {
		if (data2 == 0)
		{
			cout << "not possible!" << endl;
			return;
		}
		else

		cout << "Data 1" << "/" << "Data 2 " << "is" << data1 / data2 << endl;

		
	}
	
};

int main()
{
	calci<int, int>intBox(1, 0);
	intBox.add();
	intBox.sub();
	intBox.mul();
	intBox.div();
	return 0;


}

