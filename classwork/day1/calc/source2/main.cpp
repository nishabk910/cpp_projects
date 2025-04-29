#include<iostream>
#include "calculator.h"

using namespace std;
int main()
{
	double a, b;
	char op;
	cout << "enter first number:";
	cin >> a;
	cout << "enter operator (+,-,*,/):";
	cin >> op;
	cout << "enter second number:";
	cin >> b;
	double result;
	switch(op)
	{
	case '+': result = add(a, b);break;
	case '-': result = sub(a, b);break;
	case '*': result = mul(a, b);break;
	case '/': result = div(a, b);break;

	default:
		cout << "invalid operator!" << endl;
		return 1;

	}
	cout << "result:" << result << endl;
	return 0;

}