#include<iostream>


using namespace std;


class Person {
protected:


	string name;
	char g;
	int age;
	int phno;


public:

	Person(string n,char g, int a,int pno):name(n),g(g),age(a),phno(pno){}

	void dispPerson() {
		cout << "Name:" << name << endl;
		cout << "gender:" << g << endl;
		cout << "age:" << age << endl;
		cout << "phono:" << phno << endl;



	}
};


class Employee:protected

{
protected:

	int e_id;
	int e_sal;
	string e_dept;


public:
	Employee(int id,int s,string dept):e_id(id),e_sal(s),e_dept(dept){}


	void dispEmp() {

		cout << "ID" << e_id << endl;
		cout << "Dept" << e_dept << endl;
		cout << "salary" << e_sal << endl;

	}

};



class EmpFin:private
{
private:


	int e_pt;
	int e_pf;
	int e_vp;
	int e_days;
	int e_sal;



public:
	EmpFin(int pt,int pf,int vp,int ndays):e_pt(pt),e_pf(pf),e_vp(vp),e_days(ndays)
	{}

	void dispEmpFin()
	{
		cout << "p Tax:" << e_pt << endl;
		cout << "PF: " << e_pf << endl;
		cout << "VP:" << e_vp << endl;
		cout << "no days" << e_days << endl;
		int gs = (e_sal - e_pt - e_pf - e_vp) / 30;
		gs = gs * e_days;
		cout << "gross sal: " << gs << endl;

	}



};


int main() {

	EmpFin e();
		e.dispEmpFin();
}