#include<iostream>
#include "stud.h"

using namespace std;

float Student::calculateAverage() {

		float avg = 0.0;
		for (int i = 0;i < 3;i++)
		{
			avg += marks[i];
		}
		return avg / 3.0;
	}



char Student::getGrade()
{
	int average = calculateAverage();
	if (average >= 80 && average <= 100)
		return 'A';

	else if (average >= 50 && average < 80)
		return 'B';

	else
		return 'C';




}


void Student::display()
{
	
	cout << "name : ";
	cin >> studentname;
	//cout << "marks :" << marks;
	

	


}