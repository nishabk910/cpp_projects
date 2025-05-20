#include <iostream>
using namespace std;

int midVal(int a, int b, int c) {
    if ((a > b && a < c) || (a < b && a > c))

        return a;

    else if ((b > a && b < c) || (b < a && b > c))

        return b;

    else
        return c;
}

int main() {
    int x, y, z;
    cin >> x >> y >> z;
    cout << "Middle value is " << midVal(x, y, z);
    return 0;
}
