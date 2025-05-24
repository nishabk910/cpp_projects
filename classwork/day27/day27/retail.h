#pragma once
#include<string>

using namespace std;



 class Retail {

protected:

	string itemname;
	string category;
	float price;
	float bill;
	int quantity;



 public:

	 void additem();
	 void edititem();
	 void searchitem(string input, string itemname[], int n, string result, int& count);
	 void menu();


 private:

	 void generatebill();
	 
	

};
