//Summoning the Dragon

#include <iostream>
using namespace std;

void WithoutMultiples(int n) 
{
    for (int i = 1; i <= n; i++) 
    {
        if (i % 3 != 0)
            cout << i << " ";
    }
}
