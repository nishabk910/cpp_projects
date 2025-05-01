#include<iostream>

using namespace std;

int main() {
	int n, s = 0;

	cout << "enter a 5 digit number:";
	cin >> n;

	while (n > 0)
	{
		s = s + n % 10;
		n + n / 10;

	}
	cout << "sum of digits=" << sum << endl;

	return 0;
		
}