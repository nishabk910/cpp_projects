#include<iostream>
#include<string>
using namespace std;

class student
{
public:

	int rollno;
	string name;

};


int main() {

	student s;
	cout << sizeof(s) << endl;
	s.name = "abc";
	s.rollno = 101;

	cout << s.name << "\t" << s.rollno;

	return 0;

}
