#include<iostream>

#include "arr.h"

int main() 
{
    int arr[] = {2, 55, 6, 44, 30 };
    int size = sizeof(arr) / sizeof(arr[0]);

    Array a;

    cout << "largest element: " <<endl;
    a.findbiggest(arr, size);

    a.arrascending(arr, size);
    cout << " ascending order: ";
    a.display(arr, size);

    a.arrdescending(arr, size);
    cout << "descending order: ";
    a.display(arr, size);

    return 0;
}
