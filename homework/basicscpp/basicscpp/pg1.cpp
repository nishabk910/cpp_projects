#include <iostream>

using namespace std;

int main() 
{
     int p, r, t;
    cout << "Principal, Rate and Time: ";
    cin >> p >> r >> t;

    int amt = p;
    for (int i = 0; i < t; i++) {
        amt = amt * (1 + r / 100);  
    }

    int ci = amt - p;
    cout << "Compound Interest = " << ci << endl;

    return 0;
}
