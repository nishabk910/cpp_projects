//Problem Statement 3
//You are given an array A of size N containing positive integers.
// For each element in the array, 
//count the number of elements to its right that are smaller than the current element.


#include <iostream>
#define MAX 1024

using namespace std;



void countElement(int A[], int n, int res[]) 
{
    for (int i = 0; i < n; ++i) 
    {
        res[i] = 0;
        for (int j = i + 1; j < n; ++j) 
        {
            if (A[j] < A[i])
            {
                res[i]++;
            }
        }
    }
}

int main() 
{
    int n;
    cin >> n;
    int A[MAX];
    int res[MAX]; 

    for (int i = 0; i < n; ++i)
    {
        cin >> A[i];
    }

    countElement(A, n, res);

    for (int i = 0; i < n; ++i) 
    {
        cout << res[i] << " ";
    }

    return 0;
}
