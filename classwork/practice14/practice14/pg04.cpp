//prime number

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;

    if (n <= 1)

        cout << n << "not prime";

    else
    {

        for (int i = 1;i <= n;i++)
        {
            if (n % i == 0)

                count++;
        }

        if (count > 2)
            cout << n << "not prime" << endl;
        else
            cout << n << "prime" << endl;
    }

    return 0;
}