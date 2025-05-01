#include <iostream>
using namespace std;

bool EvenSum(int a, int b) 
{
    return (a + b) % 2 == 0;
}

int main() 
{
    int num1, num2;
    cin >> num1 >> num2;
    if (EvenSum(num1, num2))

        cout << "sum is even" << endl;
    else
        cout << "sum is odd" << endl;
    return 0;
}
