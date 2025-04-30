//implement string length fuction by passing array to a function

/*
#include <iostream>
#include <cstring>

using namespace std;

void display(int[], int);

void updateArr(int[], int);
void displayPtr(int*, int);


int main()
{


	int a[] = { 1,3,5,7,2,4,6,8 };
	int n = sizeof(a) / sizeof(a[0]);
	display(a, n);
	displayPtr(a, n);
	updateArr(a, 3);
	display(a, n);
	return 0;
}

void display(int arr[], int CAP)
{
	for (int i = 0;i < CAP;i++)
		cout << arr[i] << endl;
}

void displayPtr(int* arr, int CAP)
{
	for (int i = 0;i < CAP;i++)
		cout << arr[i] << endl;
}

void updateArr(int arr[], int pos)
{
	arr[pos] = 444;
}
*/



/*
#include <iostream>
#include <iostream>
using namespace std;

int main(){
int lenStr(char* str1)
{
	int count = 0;
	while (*str1 != '\0')
	{
		count++;
		str1++;
	}
	return count;
}
}

*/



/*
tc01
i/p
s1="ABCDE"
s2="abcde"
o/p
s3=AaBbCcDdEe

tc02
i/p
s1="ABCDEFGH"
s2="abcde"
o/p
s3="AaBbCcDdEeFGH"


TC03
i / p
s1 = "ABCDE"
s2 = "abcdefgh"
o / p
s3 = AaBbCcDdEefgh
*/




#include <iostream>
using namespace std;

void merge(char s1[], char s2[], char s3[]) 
{
	int i = 0;
	int j = 0;
	int k = 0;
	while (s1[i] && s2[j])
	{
		s3[k++] = s1[i++];
		s3[k++] = s2[j++];
	}
	while (s1[i]) s3[k++] = s1[i++];
	while (s2[j]) s3[k++] = s2[j++];
	
}

int main() 
{
	char s1[50], s2[50], s3[50];
	cin >> s1 >> s2;
	merge(s1, s2, s3);
	cout << s3 << endl;
	return 0;
}
