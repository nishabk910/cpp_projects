//40	Write a Program to Count the Sum of Numbers in a String
#include <iostream>
using namespace std;

int main() {
    string s;
    cout << "enter the string : ";
    cin >> s;

    int sum = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            sum = sum + (s[i] - '0');
        }
    }

    cout << "sum of numbers : "<< sum;
    return 0;
}
