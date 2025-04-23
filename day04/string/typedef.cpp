#include <iostream>
#define MAXCAP 100
using namespace std;

typedef struct users {
	int _id;
	int usertype;//0=admin and 1 is for normal users
	string userName;

}USERS;

void dispMenuNU(string);
void dispMenuAU();

int main()
{
	USERS u;
	cout << "enter id";
	cin >> u._id;
	cout << "enter userType (0/1)";
	cin >> u.usertype;
	cout << "enter user Name:";
	cin >> u.userName;

	if (u.usertype == 0)
	{
		dispMenuAU();

	}
	else
	{
		dispMeanuAU();

	}
	else
	{
		dispMenuNU(u.userName);
		}
		cout << "application ended successfully" << endl;
		return 0;
}