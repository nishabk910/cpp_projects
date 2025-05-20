//The Doubling Machine - Sum After n Presses

#include <iostream>
using namespace std;

int doubleSum(int n) 
{
    int v = 1, s = 0;
    for (int i = 1; i <= n; i++) 
    {
        v =v* 2;
        s =s+ v;
    }
    return s;
}









