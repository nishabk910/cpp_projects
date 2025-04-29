#include <iostream>
#include <cmath>
using namespace std;

bool isArm(int n) 
{
    if (n < 0) 
        return false; 

    int original = n;
    int digits = 0;
    int temp = n;

   
    while (temp > 0) 
    {
        digits++;
        temp /= 10;
    }

    int sum = 0;
    temp = n;

    
    while (temp > 0) 
    {
        int d = temp % 10;
        sum = sum + pow(d, digits); 
        temp /= 10;
    }

    return sum == original;
}

int main() 
{
    int num;
    cout << "enter a number: ";
    cin >> num;

    if (isArm(num))
    {
        cout << num << " is an armstrong number" << endl;
    }
    else {
        cout << num << " is not an armstrong number" << endl;
    }

    return 0;
}


