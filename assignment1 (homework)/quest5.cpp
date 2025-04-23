#include<iostream>

using namespace std;

int main() {
	int p1, p2, p3, p4, p5, total;
	float percentage;

	cout << "enter marks of 5 subs:";
	cin >> p1 >> p2 >> p3 >> p4 >> p5;

	total = p1 + p2 + p3 + p4 + p5;
	percentage = (total / 500.0) * 100;

	cout << "total marks=" << total << endl;
	cout << "percentage=" << percentage << "%" << endl;

	return 0;
}