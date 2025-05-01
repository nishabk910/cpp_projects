#include <iostream>
using namespace std;

bool LeapYear(int year) 
{
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return true;
    else
        return false;
}

int main() 
{
    int yrs;

    cin >> yrs;

    if (LeapYear(yrs))
        cout << yrs << "leap year";

    else
        cout << yrs << "not a leap year";

    return 0;

}
