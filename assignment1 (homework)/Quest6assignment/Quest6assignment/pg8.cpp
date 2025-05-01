//Swap Two Numbers Without Using a Third Variable

#include <iostream>

using namespace std;

void swapNum(int& a, int& b) 
{
    a = a + b;
    b = a - b;
    a = a - b;
}

int main() 
{
    int x, y;
    cin >> x >> y;
    swapNum(x, y);
    cout << "swapped " << x << " " << y << endl;
    return 0;
}