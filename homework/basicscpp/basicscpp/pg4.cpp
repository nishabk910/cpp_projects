#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two num ";
    cin >> a >> b;

    if ((a ^ b) == 0)
    {
        cout << "numbers are equal" << endl;
    }
    else {
        cout << "Numbers are not equal" << endl;
    }

    return 0;
}
