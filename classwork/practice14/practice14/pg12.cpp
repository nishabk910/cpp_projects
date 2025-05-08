#include <iostream>
using namespace std;
#define MAX 100

void findMinMax(int arr[], int n)
{
    int mini = arr[0];
    int maxi = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < mini)
            mini = arr[i];
        if (arr[i] > maxi)
            maxi = arr[i];
    }

    cout << "Min: " << mini << endl;
    cout << "Max: " << maxi << endl;
}

int main()
{
    int arr[N];
    cout << "Enter number of elements: ";
    cin >> arr[N];

    int arr[N];

    cout << "Enter  elements:" << arr[N];

    for (int i = 0; i < arr[N]; i++)
    {
        cin >> arr[i];
    }

    findMinMax(arr, arr[N]);

    return 0;
}