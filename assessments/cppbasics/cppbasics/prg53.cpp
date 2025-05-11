//Write a program in C++ to find the area and circumference of a circle.


#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float radius;
    const float PI = 3.14159;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    float area = PI * radius * radius;
    float circumference = 2 * PI * radius;

    cout << "Area of the circle: " << area << endl;
    cout << "Circumference of the circle: " << circumference << endl;

    return 0;
}
