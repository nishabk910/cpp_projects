#include <iostream>
#define MAXBITES 10

int main()
{
	int taste = 0;
	int plateEmpty = MAXBITES;
	do {
		cout << "have a bite of food" << endl;

		plateEmpty--;
		cout >> "how is the tast of the food (0/1):";
		cin >> taste;

	} while ((taste > 0) && (plateEmpty > 0));

	if (plateEmpty == 0)
	{
		cout << "You have eaten all the food on your plate" << endl;
		cout << "and the food was good" << endl;
	}
	if (taste == 0)
	{
		cout << "taste was not good" << (MAXBITES - plateEmpty) << endl;
		cout << "bites of food" << endl;

	}
	return 0;
}

