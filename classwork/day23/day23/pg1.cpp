#include<iostream>

using namespace std;

int main()

{
	int a[3][5] =
	{
		{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15}
	};



	for (int i = 0;i < 3;i++)
	{
		for (int j = 0;j < 5;j++)
			cout << "addres=" << &(unsigned long int) a[i][j] << "\t value=" << a[i][j] << endl;

		
	}

	int* ptr = nullptr;
	ptr = &a[0][0];
	cout <<*ptr<< endl;
	ptr++;

	cout << *ptr << endl;
	ptr++;

	cout << *ptr << endl;
	ptr++;

	cout << *ptr << endl;
	ptr++;

	cout << *ptr << endl;
	ptr++;

	cout << *ptr << endl;
	ptr++;

	cout << *ptr << endl;
	ptr++;











	cout << endl;
	return 0;

}


/*
BA*IVsizeof(dt)   =>1 d
BA + R*C*sizeof(dt)

8568+0*0*4=>1  8568 =>1
8568+0+1*4=>    8572=>2


*/
