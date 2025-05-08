//write a program to calculate the greatest common divisor of two numbers
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "enter the two numbers" << endl;
    cin >> a >> b;

    while (b != 0)
    {
        a
            int temp = b;
        b = a % b;
        a = temp;
    }
    cout << "gcd" <<  << endl;
    return 0;
}