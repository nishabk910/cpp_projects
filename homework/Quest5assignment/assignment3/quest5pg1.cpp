//Print Numbers from N to 1
#include <iostream>
using namespace std;

void printRev(int n) {
    if (n == 0)
        return;
    cout << n << " ";
    printRev(n - 1);
}

int main() {
    int n;
    cin >> n;
    printRev(n);
    return 0;
}




