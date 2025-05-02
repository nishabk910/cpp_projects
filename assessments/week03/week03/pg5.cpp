//Problem Statement 5
//You are given an array A of positive integers.
// Your task is to find and print all the leaders in the array.
//An element is considered a leader if it is greater than all elements to its right.
// The rightmost element is always considered a leader.
//Return the list of leaders in the same order as they appear from right to left in the original array.

#include <iostream>
using namespace std;
#define MAX 100

int main() 
{
    int n;
    int arr[MAX];
    cin >> n;

    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    cout << arr[n - 1] << " "; 
    int right = arr[n - 1];

    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] > right) 
        {
            cout << arr[i] << " ";
            right = arr[i];
        }
    }

    return 0;
}

