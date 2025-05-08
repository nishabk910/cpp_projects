#include <iostream>
using namespace std;

int main()
{
    int a, b, temp;

    cout << "enter the value for a" << endl;
    cin >> a;

    cout << "enter the value for b" << endl;
    cin >> b;

    cout << "before swapping first element is: " << a << "second element is:" << b << endl;


    temp = a;
    a = b;
    b = temp;

    cout << "after swapping" << "first elemet is:" << a << "second element is:" << b << endl;
    return 0;

}
