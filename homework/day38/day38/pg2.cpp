#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<string> words = { "Apple", "banana", "apple", "Orange", "BANANA", "grape" };


    for (string& word : words)
    {
        transform(word.begin(), word.end(), word.begin(), ::tolower);
    }


    sort(words.begin(), words.end());

    words.erase(unique(words.begin(), words.end()), words.end());


    for (const string& w : words)
    {
        cout << w << " ";
    }
    return 0;
}
