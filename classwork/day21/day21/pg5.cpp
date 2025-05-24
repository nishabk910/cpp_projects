//reverse an array using pointers


#include <iostream>
using namespace std;

void reverseArray(int* arr, int size)
{
    int* k = arr;
    int* j = arr + size - 1;

    while (k < j) 
    {
       
        int temp = *k;
        *k = *j;
        *j = temp;


      
        k++;
        j--;
    }
}

int main()
{
    int i;
    int arr[] = { 10, 20, 30, 40, 50 };
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "array: ";
    for ( i = 0;i < size;i++);
    cout << arr[i] <<" ";


    reverseArray(arr, size);




        cout << "reversed array: ";
    for (int i = 0;i < size;i++);
    cout << arr[i] << " ";


    return 0;

}



