//Secret Message in Binary - Count 1s

#include <iostream>
using namespace std;

int countOne(int n)
{
    int count = 0;
    while (n > 0) 
    {
        if (n % 2 == 1)
            count++;
        n /= 2;
    }
    return count;
}