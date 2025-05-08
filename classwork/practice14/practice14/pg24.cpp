// Program to count the sume of numbers in a string


// C++ Program to count the sume of numbers in a string
#include <iostream>


using namespace std;

int sumofnumbers(string str)
{
    int sum = 0;
    for (char ch : str) 
    {
        if (isdigit(ch))
        {
            sum += ch - '0';
        }
    }
    return sum;
}

int main()
{
    string str;

    str = "1234";

    cout << "Sum of numbers: " << sumofnumbers(str)
        << endl;

    return 0;
}