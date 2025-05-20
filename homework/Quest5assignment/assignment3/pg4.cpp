// Recursive function to calculate sum of first n numbers


#include <iostream>
using namespace std;


int calcSum(int n) 
{
    if (n == 0)
        return 0;
    return n + calcSum(n - 1);
}

int main() {
    int n;
    cin >> n;
    cout << "Sum = " << calcSum(n);
    return 0;
}
