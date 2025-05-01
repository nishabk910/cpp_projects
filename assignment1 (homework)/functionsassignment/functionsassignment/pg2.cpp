//Tower of Oddity

#include <iostream>
using namespace std;

void visitOdd(int floor, int maxFloor) 
{
    if (floor > maxFloor)
        return;
    cout << floor << " ";
    visitOdd(floor + 2, maxFloor);
}