/*recursive functions

func calling itself is called as rec. function

main()
{
	function();
}
int function(inv)
{
	cout << v;
	if (v <= 0)
		return 1;
	v--;
	function(v);
}
*/


/* 
#include <iostream>

using namespace std;

int f1(int);

int main()
{
	int ret = 0;
	ret=f1(5);
	cout<<"ret:"<<ret<<endl;
	return 0;
}

int f1(int v)
{
	
	if(v <= 0)
		return 1;
	v--;
	f1(v);

	cout << v << endl;;
}
*/

/*
//factorial recursive function
#include <iostream>

using namespace std;

int factorial(int n) {


	if (n == 1)
	{
		return 1;

	}
	else
	{
		return n * factorial(n - 1);

	}
}
int main()
{
	int num;
	cin >> num;
	int result = factorial(num);
	cout << "Enter a number: ";

	cout << "Factorial of " << num << " is " << result << endl;
	return 0;

}
*/

//managing i/p o/p operations, formatted i/o operations
#include<stdio.h> or // #include <cstdio>

//using namespace std;

int main()
{
	int a = 10;
	int b = 15.5;
	char c = 'A';
	double d = 101.111;
	char s[20];

	printf("\n %c \n %d \n %f \n %lf \n %s \n", c, a, b, d,"nisha");
	scanf("%c%d%f%lf%s", &c, &a, &b, &d,s);
	//fflush(stdin); // If clear the input buffer it ask u to print extra 
	scanf(" ");//temp memory where you're not assigning any value and it's used if fflush is not working 
	scanf("%c",&c);
	printf("\n %c \n %d \n %f \n %lf \n %s \n", c, a, b, d, s);
	

return 0;

}
//unformatted i/o operations


//scan and print the details of the student with the marks scored with calculated percentage

//=============================================================
//slno| id | name |    m1    |  m2     |  m3     | 4      | avg|
//=============================================================
// 001  | 001| nisha|  90    |  80    |   70    |  60    | 75%|
//===========================================================
// 002   | 002| xyz |  90    |  80    |  70    |  60    | 75%|


#include<stdio.h>

int main()
{
	int slno;
	int id;
	char name;
	int m1, m2, m3, m4;
	float avg;
	printf("\n|%d|\n|%d|\n|%c|\%|d|\n%|lf|\n", slno, id , "nisha", m1, m2, m3, m4, avg);
	


}
















































