/*#include<iostream>
using namespace std;

int main()
{
	int a, b, c, d, e, high;
	cout << "Enter 5 numbers: ";
	cin >> a >> b >> c >> d >> e;
	high = a;
	if (b > high)
	{
		high = b;
	}
	if (c > high)
	{
		high = c;
	}
	if (d > high)
	{
		high = d;
	}
	if (e > high)
	{
		high = e;
	}

	cout << high << "highest number";
	return 0;
}

*/




//to check if its even or odd from the start range and end range
/*
#include<iostream>

using namespace std;

int main()
{
	int start, end;
	cout << "start range: ";
	cin >> start;
	cout << "end range: ";
	cin >> end;
	for (int i = start; i <= end; i++)
	{
		if (i % 2 == 0)
		{
			cout << i << " even" << endl;
		}
		else
		{
			cout << i << " odd" << endl;
		}
	}
}
*/
/*
//program to find the ASCII value of a character


#include <iostream>
using namespace std;
int main()
{
	char ch;
	ch='A';
	cout << "The ASCII value of '" << ch << "' is: " << int(ch) << endl;
	return 0;
}

//use c program

#include <stdio.h>
int main()
{
	char ch;
	printf("Enter a character: ");
	scanf("%c", &ch);
	int Val = (int)ch;
	printf("The ascii value of '%c' is: %d\n", ch, Val);

	return 0;
}
*/

/*
//program to print consonants and vowels

#include <iostream>
using namespace std;
int main()
{
	char ch;
	cout << "Enter a character: ";
	cin >> ch;

	if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
		ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
	{
		cout << ch << " vowel" << endl;
	}
	else
	{
		cout << ch << "consonant" << endl;
	}

	return 0;
}
*/
//check if char is an alphabet or not 
/*
#include <iostream>
using namespace std;

int main()
{
	char ch;
	cout << "Enter a character ";
	cin >> ch;

	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
	{
		cout << ch << " alphabet" << endl;
	}
	else
	{
		cout << ch << " not alphabet" << endl;
	}

	return 0;
}

*/
//program to trim the string , use ltrim to trim left and rtrim to trim right 
//char*ltrim(char*);



//program  to find string length without using strlen
/*
#include <iostream>
using namespace std;

int main()
{
	char str[100];
	int count = 0;
	cout << "Enter a string: ";
	cin.getline(str, 100);

	while (str[count++] != '\0');

	cout << "Length of the string is:" << count-1 << endl;

	
	return 0;
}	
*/
/*
//program to count the number of vowels in a string

#include<iostream>

using namespace std;

int main()
{
	string str;
	int count = 0;
	cout << "Enter a string: ";
	cin>> str;
	//cin.getline(str);

	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
			str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
		{
			count++;
		}
	}

	cout << "vowels in the string is: " << count << endl;

	return 0;
}

*/

//program to print pre defined macros numeric limits
/*bool	true
char	CHAR_MAX
signed char	SCHAR_MAX
unsigned char	UCHAR_MAX
wchar_t	WCHAR_MAX
char8_t(since C++20)	UCHAR_MAX
char16_t(since C++11)	UINT_LEAST16_MAX
char32_t(since C++11)	UINT_LEAST32_MAX
short	SHRT_MAX
unsigned short	USHRT_MAX
int	INT_MAX
unsigned int	UINT_MAX
long	LONG_MAX
unsigned long	ULONG_MAX
long long(since C++11)	LLONG_MAX
unsigned long long(since C++11)	ULLONG_MAX
float	FLT_MAX
double	DBL_MAX
long double	LDBL_MAX
*/
/*
//program to remove the vowels from a string //memset(s1,'10',100)

#include <iostream>
#define CAP
using namespace std;

int main()
{
	string str;
	//char str[CAP];
	cout << "Enter a string: ";
	cin>> str;
	//cin.getline(str, CAP-1);

	

	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
			str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
		{
			str.erase(i, 1);
			i--;
		}
	}

	cout << "removing vowels:" << str << endl;

	return 0;
}
*/






