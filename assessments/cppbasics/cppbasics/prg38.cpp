//Write a Program to Calculate the Length of the String Using Recursion

#include <iostream>
using namespace std;

int stringLength(const char* str) 
{
    if (*str == '\0')
        return 0;
    else
        return 1 + stringLength(str + 1);
}

int main() 
{
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);
    int length = stringLength(str);
    cout << "Length of the string is: " << length << endl;
    return 0;
}

