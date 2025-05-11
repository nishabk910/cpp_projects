//36	Write a C++ Program to Print the Given String in Reverse Order Using Recursion

#include <iostream>
using namespace std;

void reverseString(string str, int index)
{
    if (index < 0)
        return;

    cout << str[index];
    reverseString(str, index - 1);
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    reverseString(str, str.length() - 1);

    cout << endl;
    return 0;
}
