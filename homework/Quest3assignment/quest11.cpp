#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;

    if (n >= 2 && n <= 10) {
        int i = n;
        while (i >= 1) {
            int j = 1;
            while (j <= i) {
                cout << "*";
                j++;
            }
            cout << endl;
            i--;
        }
    }
    else {
        cout << ""input is invalid and N should be between 2 and 10." << endl;
    }

    return 0;
}
