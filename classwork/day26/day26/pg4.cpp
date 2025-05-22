#include<iostream>

using namespace std;


class student 
{
private:

	int rollno;
	int phoneno;
	char Name[20];
	int sem;
	int batch;
	int age;
	char gender[20];
	float marks1,marks2,marks3;


public:
	void setName(char* n)
	{
		strcpy(Name, n);

	}
	char* getName() {
		return Name;
	}

	void setGender(char* g)
	{
		strcpy(gender, g);
	}

	char* getGender() {
		return gender;
	}

	void setRollno(int r) {
		rollno = r;
	}

	int getRollno() {
		return rollno;
	}

	void setPhoneno(int p) {
		phoneno = p;
	}

	int getPhoneno() {
		return phoneno;
	}


	int setSem(int s) {
		sem = s;
	}

	int getSem() {
		return sem;
	}

	int setBatch(int b) {
		batch = b;

	}

	int getBatch() {
		return batch;
	}

	int setAge(int a) {
		age = a;

	}

	int getAge() {
		return age;
	}

	int setMarks(int m1,int m2,int m3)        //void setMarks(float n[]){ for(int i=0;i<4;i++)  marks[i]=n[i];}
		{}
	{
		marks1=m1;
		marks2 = m2;
		marks3 = m3;


	}

	int getMarks() {
		return marks1,marks2,marks3;

	}






	void display()
	{
		float avg = 0.0;
		cout << "Name: " << Name << endl;
		cout << "Roll No: " << rollno << endl;
		cout << "phone no:" << phoneno << endl;
		cout << "sem:" << sem << endl;
		cout << "age:" << age << endl;
		cout << "batch:" << batch << endl;
		cout << "gender:" << gender << endl;
		cout << "marks1:" << marks1 << endl;
		cout << "marks2:" << marks2 << endl;
		cout << "marks3:" << marks3 << endl;
		//for (int i=0;i<4;i++){

		//cout << mark[i] << "\t";
		// avg += marks[i];
	//}
		//cout << "avg: " << avg / 4.0;
		//cout << endl;


	//}







		cout << endl;





	}

};