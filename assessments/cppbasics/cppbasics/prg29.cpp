//29. Hourglass Pattern

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

   
    for (int i = n; i >= 1; --i)
    {
        for (int j = 0; j < n - i; ++j) cout << " ";
        for (int k = 0; k < 2 * i - 1; ++k) cout << "*";
        cout << endl;
    }

    
    for (int i = 2; i <= n; ++i)
    {
        for (int j = 0; j < n - i; ++j) cout << " ";
        for (int k = 0; k < 2 * i - 1; ++k) cout << "*";
        cout << endl;
    }

    return 0;
}
