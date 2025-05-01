//Check if the Sum of Two Numbers is Even


#include <iostream>

using namespace std;

bool EvenSum(int a, int b) 
{
    return (a + b) % 2 == 0;
}

int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    if (EvenSum(n1, n2))
        cout << "sum is even" << endl;
    else
        cout << "sum is odd" << endl;
    return 0;
}