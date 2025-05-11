// 19	Write a Program to Find the Nth Term of the Fibonacci Series

#include<iostream>
using namespace std;

int main() {

    int n;
    cout << "value of n:" << endl;
    cin >> n;

    int a = 0, b = 1,c;

    if (n == 0)
    {
        cout << "fib at position 0 is :" << a << endl;

    }
    else if (n == 0)
    {
        cout << "fib at position 1 is:" << b << endl;

    }
    else {
        for(int i = 2;i <= n;i++)
        {
            c = a + b;
            a = b;
            b = c;


        }
        cout << "fib of nth term " << n << " is : " << b;
    }


    return 0;


}

