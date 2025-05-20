//Number Mirror

#include <iostream>
using namespace std;

void printRev(int n)
{
    if (n == 0)
        return;
    cout << n % 10 << " ";
    printRev(n / 10);
}
