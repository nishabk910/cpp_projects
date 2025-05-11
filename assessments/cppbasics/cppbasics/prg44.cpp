//Write a Program to Check for the Equality of Two Numbers Without Using Arithmetic or Comparison Operator

#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 5;

    if (!(a ^ b))  
        cout << "Equal";
    else
        cout << "Not Equal";

    return 0;
}
