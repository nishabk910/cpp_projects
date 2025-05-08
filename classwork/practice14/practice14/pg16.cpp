//Write a Program to Print a Diamond Pattern


#include<iostream>
using namespace std;


int main()
{
   int n;
    cout << "enter val of n:";
    cin >> n;
    for (int i = 1;i <= n;i++)
    {
        for (int j = n;j > 0;j--)
        {
            if (i >= j) {
                cout << "* " << " ";

            }
            else {
                cout << " " << " ";

            }
        }
        cout << endl;
    }

    for (int i = 1;i <= n;i++)
    {
        for (int j = n;j > 0;j--)
        {
            if (i +j<=n)
                if( i < ( n-j) + 1 //)
            {
                cout << "  *" << " ";

            }
            else {
                cout << "  ";

            }
        }
        cout << endl;
    }
}



//program to reverse a string

#include <iostream>
using namespace std;

int main()
{
    string str = "nisha";
    int len = str.length();

    cout << "Original string: " << str << endl;
    cout << "Reversed string: ";

    for (int i = len - 1; i >= 0; i--) {
        cout << str[i];
    }

    cout << endl;
    return 0;
}