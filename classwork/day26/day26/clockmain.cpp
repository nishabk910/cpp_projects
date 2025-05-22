#include<iostream>
#include "clock.h"

using namespace std;

int main()
{
	Digiclock d;

	d.start();

	for (int i = 0;i <= 7200;i++)
	{
		d.display();
		d.digiSecond();

	}
	cout << endl;

}