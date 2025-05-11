//48. Decimal to Binary Conversion


#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int num, binary = 0, p = 0;
    cin >> num;

    while (num > 0) {
        int r = num % 2;
        binary += r * pow(10, p++);
        num /= 2;
    }

    cout << "Binary: " << binary;
    return 0;
}
