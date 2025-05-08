#include <iostream>
using namespace std;

int main()
{
    string str = "this is cpp training";
    int start = 0;

    for (int i = 0; i <= str.length(); i++)
    {
        // When space or end of string is found
        if (str[i] == ' ' || str[i] == '\0')
        {
            int end = i - 1;

            // Reverse current word
            while (start < end)
            {
                swap(str[start], str[end]);
                start++;
                end--;
            }


            start = i + 1;
        }
    }

    cout << str << endl;

    return 0;
}