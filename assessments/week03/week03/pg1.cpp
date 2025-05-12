//program02
//You are given a sorted array A of size N containing integers. 
// Every element in the array appears exactly twice, 
// except for one element that appears only once. 
// Your task is to find and print that unique element.



#include <iostream>
#define MAX 1024


using namespace std;

int main() 
{
    int n;
    cin >> n;

    int arrele[MAX];  

    for (int i = 0; i < n; ++i) 
    {
        cin >> arrele[i];
    }
    for (int i = 0; i + 1 < n; i += 2)
         

    {
        if (arrele[i] != arrele[i + 1]) 
        {
            cout << arrele[i] << endl;
            return 0;
        }
    }

    cout << arrele[n - 1] << endl;

    return 0;

   
}

