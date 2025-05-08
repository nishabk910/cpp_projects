//hourglass
#include<iostream>
using namespace std;

void pattern(int);

void pattern(int n)

{
    int i, j;
    for (int i = 0;i < n;i++)
    {
        for (int j = 0;j < i;j++)
        {
            cout << "* ";
        }

        for (int k = 0;k < n - i;k++)
        {
            cout << " ";

        }

        cout << endl;
    }

    for (int i = 0;i < n;i++)
    {
        for (int j = 0;j < n - i - 1;j++)
        {
            cout << "* ";
        }

        for (int k = 0;k <= i;k++)
        {
            cout << " ";

        }

        cout << endl;
    }


}



int main()
{
    int n = 5;
    cin >> n;
    pattern(n);
    return 0;
}