//49. Decimal to Octal Conversion


#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num, octal = 0, p = 0;
    cin >> num;


    while (num > 0)
    {
        int r = num % 8;
        octal += r * pow(10, p++);
        num /= 8;
    }

    cout << "Octal: " << octal;
    return 0;
}
