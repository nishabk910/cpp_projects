#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter two numbers (a b) ";
    cin >> num1 >> num2;

    int rem = num1 - (num1 / num2) * num2;
    cout << "Remainder = " << rem << endl;

    return 0;
}
