
// This program calculates the sum and product of the digits of a positive integer.
#include <iostream>
using namespace std;

int main() {
    

    int sum = 0;
    int prod = 1;
    int num;

    cout<< "Enter a positive integer: ";
    cin >> num;


    while (num > 0) 
    {
        int digit = num % 10;

        sum = sum + num;
        if (num != 0) 

        {
            prod *= num;  

        }
        num /= 10;
    }

    cout << "sum = " << sum << endl;
    cout << "product = " << prod << endl;

    return 0;
}





