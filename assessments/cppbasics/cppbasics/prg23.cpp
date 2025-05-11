//23 Write a Program to Find the Second Smallest Element in an Array


#include <climits>
#include <iostream>
using namespace std;

void print2Smallest(int arr[], int n)
{
    int first, second;
    first = INT_MAX;
    second = INT_MAX;

    if (n < 2)
    {
        cout << " Invalid Input ";
        return ;
    }


    for (int i = 0; i < n; i++)
    {



        if (arr[i] < first)
        {
            second = first;
            first = arr[i];
        }

        else if (arr[i] < second && arr[i] != first)
        {
            second = arr[i];

        }
            
    }
    if (second == INT_MAX) 
    {
        cout << "There is no second smallest element";
    }
       
    else {
        cout << " Second smallest element is " << second << endl;
    }

}

int main()
{
    int arr[] = { 21, 3, 15, 90, 34, 87 };
    int n = sizeof(arr) / sizeof(arr[0]);

    print2Smallest(arr, n);

    return 0;
}