//Problem Statement 6
//You are given an array arr[] of size N containing positive integers.
//  Your task is to reverse every sub-array of size K.
// If the number of elements left at the end is less than K, reverse all of them as is.



#include <iostream>


        using namespace std;

        int main()
        {
            int n, k, a[100];


            cin >> n;

           
            for (int i = 0; i < n; i++)
            {
                cin >> a[i];
            }

            
            cin >> k;

           
            for (int i = 0; i < n; i += k)
            {
                int l = i;
                int r = i + k - 1;

               
                if (r >= n)
                {
                    r = n - 1;
                }

              
                while (l < r) 
                {
                    int temp = a[l];
                    a[l] = a[r];
                    a[r] = temp;
                    l++;
                    r--;
                }
            }

            
            for (int i = 0; i < n; i++)
            {
                cout << a[i] << " ";
            }

            return 0;
        }




