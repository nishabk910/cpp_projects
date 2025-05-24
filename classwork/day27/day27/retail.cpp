#include<iostream>
#include "retail.h"

using namespace std;


void Retail::additem() {

	cout << "enter the item name:";
	cin >> itemname;


	cout << "enter the category:";
	cin >> category;

	cout << "enter the price:";
	cin >> price;

	cout << "enter the quantity";
	cin >> quantity;

}

void Retail::searchitem(string input, string itemname[], int n, string result, int &count)

{

	count = 0;
	for (int i = 0;i < n;i++) 
	{
		if (itemname[i].find(input) == 0)
		{
			result[count] = itemname[i];

			count++;
		}
	}

	//for(int i=0;string.length()<n;i++)
		//if(p[i].itemname=='/0')



																												





}


