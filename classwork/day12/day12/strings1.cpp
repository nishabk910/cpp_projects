/*//2 - D arrays : -


#include<iostream>
#define ROW 3
#define COL 3


using namespace std;
int main()
{
	int arr1[ROW][COL] = { { 10,20,30 }, {40,40,60},{70,80,90} };//arr[3]
	int arr2[ROW][COL] = { 10,20,30,40,50,60,70,80,90 };
	int arr3[ROW][COL];

	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)//iteration to access items in an array
		{
			cout<<"address of arr1["<<count++<<"]="<<(unsigned long int)&arr[i][j]<<"value=" << endl;
		}
	}



	return 0;

}


*/


//matrix multiplication of A[4][2] and B[2][3]:

#include <iostream>

#define ROW 10
#define COL	10

using namespace std;


int main()
{
	int a[ROW][COL], b[ROW][COL], c[ROW][COL];
	int r1 = 0, c1 = 0, r2 = 0, c2 = 0, i = 0, j = 0, k = 0;
	int sum = 0;

	cout << "Enter the size of Matrix A: (row and col)";
	cin >> r1 >> c1;
	cout << "Enter the size of Matrix B: (row and col)";
	cin >> r2 >> c2;

	if (c1 == r2) {
		cout << "Enter the " << (r1 * c1) << " elements of Matrix A : ";
		for (i = 0;i < r1;i++)
			for (j = 0;j < c1;j++)
				cin >> a[i][j];


		cout << "Enter the " << (r2 * c2) << " elements of Matrix B : ";
		for (i = 0;i < r2;i++)
			for (j = 0;j < c2;j++)
				cin >> b[i][j];

		//prod logic
		for (i = 0;i < r1;i++)
		{
			for (j = 0;j < c2;j++)
			{
				for (k = 0, sum = 0;k < c1;k++) //making items for prod mat
				{
					sum += a[i][k] * b[k][j];
					c[i][j] = sum;
				}
			}
		}

		//disp prod
		for (i = 0;i < r1;i++)
		{
			for (j = 0;j < c2;j++)
				cout << c[i][j] << " ";
			cout << endl;
		}

	}
	else {
		cout << "Matrix Multiplication is not possible as col of A is not ";
		cout << "matching with row of B" << endl;
	}

	return 0;
}














