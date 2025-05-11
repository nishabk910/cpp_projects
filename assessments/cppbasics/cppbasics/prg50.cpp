//50. Decimal to Hexadecimal Conversion

#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    char hexDigits[] = "0123456789ABCDEF";
    string hex = "";

    while (num > 0) {
        int r = num % 16;
        hex = hexDigits[r] + hex;
        num /= 16;
    }

    cout << "Hexadecimal: " << hex;
    return 0;
}
