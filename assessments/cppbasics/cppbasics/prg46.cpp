// 46. Octal to Decimal Conversion

#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int octal, decimal = 0, base = 0;
    cin >> octal;

    while (octal > 0) 
    {
        int r = octal % 10;
        decimal += r * pow(8, base);
        base++;
        octal /= 10;
    }

    cout << "Decimal: " << decimal;
    return 0;
}
