

/*
#include<iostream>

using namespace std;

int main()
{
	int amtInHand;

	cout << "enter the amount in hand:";
	cin >> amtInhand;

	if (amtInHand < 10)
	{
		cout << "please get more amount" << endl;
	}

	if (amtInHand >= 10 and amtInHand <= 50)
	{
		cout << "i can order snacks" << endl;
	}
	else if (amtInHand > 50 and amtInHand <= 100)
	{
		cout << "i can order rotis" << endl;
	}
	else if (amtInHand > 100 and amtInHand < 500)
	{
		cout << "i can order complete meals" << endl;

	}
	else
	{
		cout << "i can order anything" << endl;
	}
}
*/
/*
#include<iostream>

using namespace std;


int main()
{
	string genre;
	cout << "enter the genre:";
	cin >> genre;
	if (genre[0] >= 48 && genre[0] <= 57)
	{
		cout << "genre name cannot start with numeric characters" << endl;
		return 0;
	}
	if (genre.compare("action") == 0)
	{
		cout << "selected genre is action" << endl;
	}
	else if ((genre.compare("comedy") == 0) || (genre.compare("comedy") == 0))
	{
		cout << "selected genre is comedy" << endl;
	}
	else if (genre.compare("thriller") == 0)
	{
		cout << "selected genre is thriller" << endl;
	}
	else
	{
		cout << "genre is not present" << endl;
	}
	cout << "end of program" << endl;
	return 0;
}
*/


/*
int main()
{
	int v1 = 10;

	if (v1 > 10)
		goto END;
	else
		cout << "within the limit" << endl;
END:
	return 0;
}
*/

#include<iostream>
using namespace std;

int display();

int main()
{
BEGIN:
	//INT FLAG = FLAG;
	while (true) {
		int ret = display();
		switch (ret)

		{
		case 1:
			cout << "addition" << endl;
			break;
		case 2:
			cout << "substraction" << endl;
		case 3:
			cout << "multiplication" << endl;
		case 0:
			cout << "exit the application" << endl;
			goto END
				break;
		default:
			cout << "wrong choice" << endl;
		}
		//if (flag == true)
			//break;
	}//end of while 1
END:
	cout << "\nprogram ended successfully" << endl;
	goto BEGIN;

	return 0;
}

int display()
{
	int ch;
	cout << "press," << endl;
	cout << "1.addition" << endl;
	cout << "2.substraction" << endl;
	cout << "3.multiplication" << endl;
	cout << "0.exit"<<endl;
	cout << "choice:" << endl;
	cin >> ch;
	return ch;
}
