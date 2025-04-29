#include<iostream>

using namespace std;

enum genre {
	Action=1,
	comedy,
	Thriller=1001,
	Mystery,
	sifi

};

enum language
{
	English=1,
	hindi,
	tamil,
	telugu,
	kannada,
	marathi,
	malayalam
};


int main()
{
	int inputLang;
	char typeShows[20];
	//char genre[20];
	int inputGenre;
	//display()
	cout << "enter the language option:";
	cin >> inputLang;
	switch (inputLang)
	{
	case English:
		cout << "you have choosen english" << endl;
		cout << "enter the genre:";
		cin >> inputGenre;
		switch (inputGenre)
		{

		default:
			cout << "no genre found" << endl;
			break;
		case Action:
			cout << "choosed genre: Action" << endl;
			break;
		case comedy:
			cout << "choosed genre: comedy" << endl;
			break;
		case Thriller:
			cout << "choosed genre: Thriller" << endl;
			break;
		case Mystery:
			cout << "choosed genre: Mystery" << endl;
			break;
		case sifi:
			cout << "choosed genre: sifi" << endl;
			break;
		}
		break;

	case hindi:
		cout << "you have choosen hindi" << endl;
		cout << "enter the genre:";
		cin >> inputGenre;
		switch (inputGenre)
		{

		default:
			cout << "no genre found" << endl;
			break;
		case Action:
			cout << "choosed genre: Action" << endl;
			break;
		case comedy:
			cout << "choosed genre: comedy" << endl;
			break;
		case Thriller:
			cout << "choosed genre: Thriller" << endl;
			break;
		case Mystery:
			cout << "choosed genre: Mystery" << endl;
			break;
		case sifi:
			cout << "choosed genre: sifi" << endl;
			break;
		}
		break;

	}
}

	
