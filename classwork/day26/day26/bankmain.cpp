#include<iostream>
#include "bank.h"

using namespace std;

int main() 
{
	ATMAccount b;

	b.menu();
	b.setBalance();
	b.display();
	cout << endl;

}