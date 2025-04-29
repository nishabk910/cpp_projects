#include <iostream>
#define MAXATTEMPTS 3

using namespace std;

int main() {
    char string rightPin = 'abcde';
	string enteredPin;
	int attempts = 0;

	
	do {
		cout << "Enter your pin: ";
		cin >> enteredPin;

		attempts++;

		if (enteredPin == rightPin) {
			cout << "Access granted!" << endl;
			break;
		}
		else {
			cout << "Incorrect pin. Try again." << endl;
			if (attempts < MAXATTEMPTS) {
				cout << "You have " << (MAXATTEMPTS - attempts) << " attempts left." << endl;
			}
		}
		while (enteredPin != rightPin && attempts < MAXATTEMPTS);
		if (enteredPin != rightPin) {
			cout << "card block" << endl;
		}
		return 0;
	}