#include <iostream>
using namespace std;

int main() {
    int i = 0;
    while (i < 10) {
        int val = i * (i + 2);
        cout << val;
        if (i != 9) {
            cout << ", ";
        }
        i++;
    }
    return 0;
}
