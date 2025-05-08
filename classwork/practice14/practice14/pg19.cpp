//find if two strings are anagram or not

#include <iostream>
using namespace std;

int main()
{
    string str1;
    string str2;

    cout << "enter the first string:" << endl;
    cin >> str1;
    cout << "enter the second string:" << endl;
    cin >> str2;


    if (str1.length() != str2.length()) {
        cout << "they are not anagrams" << endl;
        return 0;
    }

    int freq[26] = { 0 };



    for (int i = 0; i < str1.length(); i++)
    {
        freq[str1[i] - 'a']++;

        freq[str2[i] - 'a']--;

    }

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] != 0)
        {
            cout << "not anagrams" << endl;
            return 0;
        }
    }

    cout << "anagrams" << endl;
    return 0;
}