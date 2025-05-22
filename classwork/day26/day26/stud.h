#pragma once
class Student {
protected:

	float marks[3] = {30,50,90};
	char studentname[100];



public:

	float calculateAverage();
	char getGrade();
	void display();


};
