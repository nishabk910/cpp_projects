//store odd elements in first half and even elements in second half


#include <iostream>

using namespace std;

int main()
{
	int a[] = { 11,13,12,15,8,6,4,3,7,1 };
	int i, countOdd, countEven;

	constexpr int noElems = sizeof(a) / sizeof(a[0]);// 
	int outputArr[noElems];
	cout << "No of Elements present: " << noElems << endl;
	
	for (i = 0, countOdd=0;i < 10;i++)
	{
		if (a[i] % 2 != 0) {
			outputArr[countOdd] = i;
			countOdd++;
		}
	}

	for (i = 0, countEven = countOdd;i < 10;i++)
	{
		if (a[i] % 2 == 0) {
			outputArr[countEven] = a[i];
			countEven++;
		}
	}
	
	
	for (i = 1, countOdd = 0;i <= 10;i += 2, countOdd++)
		a[countOdd] = i;
	for (i = 0, countEven = 10/2;i < 10;i += 2, countEven++)
		a[countEven] = i;
	
	for (i = 0;i < noElems;i++)
		cout << a[i] << endl;

	return 0;
}