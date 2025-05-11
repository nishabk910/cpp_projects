// Program to check whether the primitive values are crossing the limits or not:


#include <iostream>
#include <climits>
using namespace std;

int main() 
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num < INT_MIN || num > INT_MAX)
    {
        cout << "The number is out of integer limits!" << endl;
    }
    else
    {
        cout << "The number is within integer limits." << endl;
    }
    return 0;
}