//Odd Coin Counting - Sum of Odd Digits

#include <iostream>
using namespace std;

int sumOdd(int n) {
    int s = 0;
    while (n > 0) {
        int d = n % 10;
        if (d % 2 != 0)
            s += d;
        n /= 10;
    }
    return 0;
}