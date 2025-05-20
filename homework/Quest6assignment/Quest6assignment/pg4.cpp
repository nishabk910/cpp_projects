#include <iostream>
using namespace std;

int LastDigit(int s) {
    s = s / 10;   
    return s % 10;  
}

int main() {
    int n;
    cin >> n;
    cout << "Second last digit: " << LastDigit(n);
    return 0;
}
