//Lost Treasure Map - Smallest Digit

#include <iostream>
using namespace std;

int findSmallDig(int num) {
    int minDig = 9;
    while (num > 0) {
        int d = num % 10;
        if (d < minDig)
            minDig = d;
        num /= 10;
    }
    return minDig;
}
