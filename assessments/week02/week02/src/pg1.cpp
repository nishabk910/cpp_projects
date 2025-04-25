//Objective: Write a program to check if a given number is an Armstrong number

//Requirements :

//Use a loop to calculate the sum of cubes of the digits of the number

//Compare the sum with the original number to determine if it's an Armstrong number




#include <iostream>
using namespace std;

bool isArm(int n) {
    int original = n;
    int s = 0;
    int d;

    while (n > 0) {
        d = n % 10;       
        s = s + d * d * d; 
        n /= 10;        
    }

    return s == original;
}
//to see if number is armstrong or not in main function
int main() {
    int num;
    cin >> num;

    if (isArm(num)) {
        cout << "the num you entered is armstrong" << endl;
    }
    else {
        cout << "the num you have entered is not armstrong" << endl;
    }

    return 0;
}

