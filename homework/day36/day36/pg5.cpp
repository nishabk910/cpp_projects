#include <iostream>
#include<string>
#include<algorithm>
#include <vector>
using namespace std;

int main() {
    vector<string> str = {"abc","efg"};

    str.push_back("hij");

    cout << "Elements: ";
    for (string n : str) 
    {
        cout << n << " ";
    }

    cout << "\nSize: " << str.size();
    cout << "\nFirst: " << str.front();
    cout << "\nLast: " << str.back();
    cout << "\nempty: " << str.empty();
    str.emplace(str.end()-1, "lmn");

    str.emplace_back("aaa");

    swap(str[0], str[1]);
    sort(str.begin(), str.end());

    str.pop_back();

    cout << "\nAfter pop_back: ";
    for (string n : str) 
    {
        cout << n << " ";
    }
}
