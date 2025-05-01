#include <iostream>
using namespace std;

int main() 
{
    int x, y;
    cout << "Enter two num: ";
    cin >> x >> y;

    x = x ^ y;
    y = x ^ y;
    x = x ^ y;

    cout << "After swapping: x = " << x << ", y = " << y << endl;
    return 0;
}
