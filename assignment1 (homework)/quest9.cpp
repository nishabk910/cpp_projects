#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter N: ";
    cin >> n;

    if (n >= 2 && n <= 10) {
        int i = 1;
        while (i <= n) {
            int j = 1;
            while (j <= n) {
                cout << "*";
                j++;
            }
            cout << endl;
            i++;
        }
    }
    else {
        cout << "Invalid input, N should be between 2 and 10" << endl;
    }

    return 0;
}
