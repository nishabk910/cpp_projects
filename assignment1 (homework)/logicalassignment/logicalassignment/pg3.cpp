//Broken Clock - Divisors of Hour

#include <iostream>
using namespace std;

void ringMin(int hrs) 
{
    for (int i = 1; i <= 60; i++) 
    {
        if (hrs % i == 0)
            cout << i << " ";
    }
}