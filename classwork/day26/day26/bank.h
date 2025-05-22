#pragma once

class ATMAccount
{
protected:

	float balance=0;
	char accholder[100];



private:

	void deposit(int);
	void withdraw(int);
	void checkBalance();


public:
	void menu();
	void setBalance();
	void display();




};