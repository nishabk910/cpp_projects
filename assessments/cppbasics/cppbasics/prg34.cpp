//34	Write a Program to Print Floyd's Triangle

#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int count = 1;
	for (int i = 0;i < n;i++) 
	{
		for (int j = 0;j < n;j++) 
		{
			if (j <= i)
			{
				cout << count << " ";
				count = count + 1;
				
				
			}
		}
		cout << endl;
	}

}



