//pyramid

#include<iostream>
using namespace std;

void pattern(int);

void pattern (int n)
{

    int k = 2 * n - 2;//8 whitespaces
    for (int i = 0;i < n;i++)//no. rows
    {
        for (int j = 0;j <= k;j++)//printing whitespaces
        {
            cout << " ";
        }
        k = k - 1;//k--
        for (int j = 0;j <= i;j++)
        {
            cout << "* ";

        }
        cout << endl;


    }

}

int main()
{
    int n;
    cin >> n;
    pattern(n);
       return 0;
}
