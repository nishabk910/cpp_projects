//palindrome or not 

#include<iostream>
using namespace std;

int main()
{
	int n, original, rev = 0, rem;
	cout << "Enter a number: ";
	cin >> n;

	original = n;

	while (n != 0)
	{
		rem = n % 10;
		rev = rev * 10 + rem;
		n /= 10;
	}

	if (original == rev)
		cout << original << " is a palindrome.";
	else
		cout << original << " is not a palindrome.";

	return 0;
}





#include <iostream>
using namespace std;

int main()
{
    void fun(int arr[], int n)
    {
        int i = 0;
        int j = n - 1

            while (i <= j)
            {
                if (arr[i] == arr[j])
                    i++;
                j++;
            }
    else
    {
        cout << "not pailndrome" << endl;
        return 0;

    }


    cout << "paildrome" << endl;

    int main()
    {

        int n;
        int arr[100];

        cout << "enter the size of array" << endl;
        cin >> n;
        for (i = 0;i < n;i++)
        {
            cin >> arr[i];
        }
        fun(arr, n)
            return 0;
    }