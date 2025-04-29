/* Arrays

> to do a particular task, to store data of different data types to do a particular task.
> if you want to store marks it should store marks only
> huge volumes of data can be stored in arrays
> remodifying the existing data type to suite to the need, so its called derived data type,



array declaration:-
int total;
int name[3];

> acc to ansic and intel processor , the alloc of the variable will start from left to right --> int a,b,c
> allocation will start from bottom up in int a; ^
                                          int b; |
                                          int c; |

int a[3];
3*4=12 bytes; if not found space together in ram the it will search for the next available space in ram
declaration w initialization --> int a[3]={1,2,3};
                                        |
                                        |--> capacity,no. of elements present in the array

                                    int a[3]={0.0,0}

                                    int[0]-> subscript(0) or index val(int, whole no., not float and string) , capacity-1
                                    0 to the capacity-1
                                    []-> unary operator
                                    a[0]=101;
                                    a[1]=102;
                                    a[2]=103;
                                    cout<<a[0];-> val stored at a[0] or its address


*/




/*
#include <iostream>

using namespace std;
int main()
{
    int arr[3];
    cout << "cap/size of arr" << sizeof(arr) << endl;
    cout<<"arr[0] address"<<&arr[0]<<endl;
    cout<<"arr[1] address"<<&arr[1]<<endl;
    cout<<"arr[2] address"<<&arr[2]<<endl;

    printf("address of arr[0]=%u\n", &arr[0]);
    printf("address of arr[1]=%u\n", &arr[1]);  //to avoid hexadecimal and to print positive value
    printf("address of arr[2]=%u\n", &arr[2]);
}

*/


/*
#include <iostream>

using namespace std;


int main()
{
    int arr[3]={101,201,333};//dec. with init of array


    cout<<"arr[0]="<<arr[0]<<endl;
    cout<<"arr[1]="<<arr[1]<<endl;
    cout<<"arr[2]="<<arr[2]<<endl;
    cout<<"arr[3]="<<arr[3]<<endl;//garbage value as its out of bound


    for (int i = 0;i < 3;i++)
    {
        cout<<"arr["<<i<<"]="<<arr[i]<<endl;// if iterator is used it should be initialized first

        arr[0] = 222;  //explicit changing
        arr[1] = arr[0] * 10;

        for (int i = 0;v < 3;i++)
        {
            cout<<"arr["<<i<<"]="<<arr[i]<<endl;
        }
    }

}
*/




//scan the elements of an array with user input, check if given element is present in an array as user input
/*
#include <iostream>
#define CAP 10

using namespace std;

int main()
{
    int arr[CAP];
    int iv;
    int gValue = 0;

    cout << "Enter the " << CAP << " element values of array" << endl;
    for (iv = 0;iv < CAP;iv++)
        cin >> arr[iv];

    cout << "Element of array" << endl;
    for (iv = 0;iv < CAP;iv++)
        cout << arr[iv] << endl;

    cout << "Enter value to be searched in the list: ";
    cin >> gValue;

    for (iv = 0;iv < CAP;iv++)
    {
        if (arr[iv] == gValue)
            break;
    }

    if (iv == CAP)
        cout << gValue << " Element not found in the list" << endl;
    else
        cout << gValue << " Element found in the list at index value = " << iv << endl;


}
*/


