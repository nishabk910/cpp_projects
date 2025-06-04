#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> nums;
    int n;

    cout << "enter scores : ";
    while (cin >> n && n != -1) 
    {
        nums.push_back(n);
    }

    sort(nums.begin(), nums.end(), greater<int>());


    cout << "\nall sorted scores: ";
    for (int a : nums)
    {
        cout << a << " ";
    }

    
    cout << "\ntop 3 scores: ";
    for (int i = 0; i < 3 && i < (int)nums.size(); i++)
    {
        cout << nums[i] << " ";
    }

auto i = unique(nums.begin(), nums.end());
nums.erase(i, nums.end());



    cout << "\nunique scores: ";
    for (int a : nums)
    {
        cout << a << " ";
    }
    return 0;
}
