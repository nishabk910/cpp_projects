#include<iostream>

using namespace std;

int main()
{
	int n, i = 1;
	float basic, hra, da, gross;

	cout << "number of employees:";
	cin >> n;

	while (i <= n); {
		cout << "/n enter basic salary for employee" << i << ":";
		cin >> basic;
		hra = 0.40 * basic;
		da = 0.20 * basic;
		gross = basic + hra + da;

		cout << "gross salary of employee" << i << "=" << gross << endl;
		i++
	}
	return 0;


}

