#include <iostream>
using namespace std;

int main() {
    int itrl, itr2, n;
    int count;

    cout << "Enter n value: ";
    cin >> n;

    itrl = 0;
    count = 1;

    while (itrl < n) {
        itr2 = 0;

        while (itr2 < n) {
            if (count % n == 0)
                cout << count;
            else
                cout << count << "*";

            count++;
            itr2++;
        }

        cout << endl;
        itrl++;
    }

    return 0;
}

