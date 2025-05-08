#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "enter the value for a" << endl;
    cin >> a;

    cout << "enter the value for b" << endl;
    cin >> b;

    cout << "before swapping first element is: " << a << "second element is:" << b << endl;

    b = a + b;
    a = b - a;
    b = b - a;


    cout << "after swapping" << "first elemet is:" << a << "second element is:" << b << endl;
    return 0;

}
