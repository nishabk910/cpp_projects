// C++ Program to check
// if number is Armstrong
// or not
#include <iostream>
using namespace std;

int main()
{
    int n, rem;
    cout << "armstrong number:" << endl;
    cin >> n;
    int temp = n;
    int original = 0;

    while (n > 0)
    {

        rem = n % 10;
        original = (original)+(rem * rem * rem);
        n = n / 10;
    }

    if (temp == original) {
        cout << " Armstrong Number";
    }
    else
    {
        cout << "not an Armstrong Number";
    }
    return 0;
}