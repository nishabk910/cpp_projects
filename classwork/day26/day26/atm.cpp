#include<iostream>
#include "bank.h"

using namespace std;

void ATMAccount::menu()
{
    while (true)
    {
        cout << "\n1. deposit\n2. withdraw \n3. checkbalance\n4. exit\n";
        int ch;
        cout << "enter choice: ";
        cin >> ch;
        cin.ignore();
        switch (ch)
        {
        case 1:
            int n;
            cout << "enter amt to be deposited:";
            cin>> n;
            deposit(n);
            break;
        case 2:
            int w;
            cout << "enter amt to be deposited:";
            cin >> w;
            withdraw(w);
            break;
        case 3:
           
            cout << "the total balance is :";

           checkBalance();


            break;
        case 4:
          setBalance();

            
        case 5:
            exit;
        default:
            cout << "Invalid option";

        }
    }
}


    void ATMAccount::deposit(int n)

    {
        balance+=n;

    }


    void ATMAccount::withdraw(int w) 
    {
      
        balance -= w;

    }
    void ATMAccount::setBalance()
    {
        cout << "enter the balance :";
        cin >>balance;
        

    }

    void ATMAccount::checkBalance()
    {
        cout << "check the balance:"<<balance;

        
    }

    void ATMAccount::display()
    {
        cout << "enter the acc holder name:";

        cin >> accholder;


    }

