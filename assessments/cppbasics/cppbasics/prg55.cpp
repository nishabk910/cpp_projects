//Program to convert kilometers per hour to miles per hour :



#include <iostream>
using namespace std;

int main() {
    float kmph, mph;
    cout << "Enter speed in kilometers per hour: ";
    cin >> kmph;

    mph = kmph * 0.621371;

    cout << "Speed in miles per hour: " << mph << endl;
    return 0;
}