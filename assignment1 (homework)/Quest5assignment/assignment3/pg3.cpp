//Count Number of Zeros in a Number

#include <iostream>
using namespace std;

int countZeros(int n) {
    if (n == 0) 
        return 0;
    return (n % 10 == 0) + countZeros(n / 10);
}

int main() {
    int n;
    cin >> n;
    cout << "number of zeros  " << n << " is " << countZeros(n);
    return 0;
}
