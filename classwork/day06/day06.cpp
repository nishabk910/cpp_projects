//if n=10 then print series= 0,3,8,15,24,35,48,63,80,99 
/*#include <iostream>

using namespace std;

int main()
{

	int n;
	cout << "enter the number between 0 and 10:";
	cin >> n;

	if (n < 0 || n>10)
	{
		cout << "invalid input" << endl;
		return 1;
	}

	int i = 0;
	while (i < n) {
		int value = (i * i) + i;
		cout << value<<endl;
		if (i != n - 1)
			cout << ",";
		i++;
	}
	cout << endl;
	return 0;
}

#include <iostream>

using namespace std;

int main()
{
	int itrl, n;

}
*/
/*
#include<iostream>
using namespace std;

int main()
{
	int itr1, itr2, n;
	int count;
	cout << "enter n value:";
	cin >> n;

	itr1 = 0;
	count = 1;
	while (itrl < n)
	{
		itr2 = 0;
		while (itr2 < n)
		{
			if (count % n == 0)
				cout << count;
			else
				cout << count << "*";
			count++;
			itr2++;
		}
		cout << endl;
		itr1++;
	}

}
*/

/*
#include<iostream>
using namespace std;

int main()
{
	int itr1, itr2, n;
	int count;
	cout << "enter n value:";
	cin >> n;

	itr1 = 0;
	count = 1;
	while (itrl < n)
	{
		itr2 = 0;
		while (itr2 < n)
		{
			if (count % n == 0)
				cout << count;
			else
				cout << count << "*";
			count++;
			itr2++;
		}
		cout << endl;
		itr1++;
	}

	while (itr1 <= (n * n))
	{
		if (itrl % n == 0) {
			cout << itrl << endl;
		}
		else
			cout << itr1 << endl;
		itr1++;
	}
	*/


