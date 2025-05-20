//Energy Crystals - Highest Power of 2 ? n

#include <iostream>
using namespace std;

int highestPow(int n)
{
    int pow = 1;
    while (pow * 2 <= n) 
    {
        pow= pow* 2;
    }
    return pow;
}
