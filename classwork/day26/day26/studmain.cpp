#include<iostream>
#include "stud.h"

using namespace std;

int main()
{
	Student s;
	s.calculateAverage();
	s.display();
	cout << s.getGrade();

}