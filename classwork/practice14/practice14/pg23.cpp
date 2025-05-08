//floyd triangle

#include <iostream>

using namespace std;

int main()
{
    int c = 1;
    int n = 5;

    for (int i = 0;i < n;i++) // rows
    {
        for (int j = 0;j <= i;j++)

            cout << c++ << " ";
        cout << endl;
    }

}