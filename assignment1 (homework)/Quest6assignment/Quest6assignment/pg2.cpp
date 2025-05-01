#include <iostream>
using namespace std;

int digSum(int n)
{
    int s = 0;
    while (n > 0) 
    {
        s += n % 10;
        n = n / 10;
    }
    if (s >= 10)
        return digSum(s);
    else
        return s;
}

int main() {
    int num;
    cin >> num;
    cout << "single digit sum  " << digSum(num);
    return 0;
}
