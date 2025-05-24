#include<iostream>
using namespace std;

struct employee
{
	int empID;
	int empPhno;
	string empName;
	string empAddress;
	string empGender;


}EMP;

void disp(EMP e);
bool getempdetails(EMP*); //can be ref or pointer (EMP &)
int searchempdetails(EMP*);
int updateempdetails(EMP*);
bool v_name(string);

void disp(EMP e)
{
	cout << "===========================================" << endl;
	cout << "Name: " << e.empName << endl;
	cout << "ID: " << e.empID << endl;
	cout << "Gender: " << e.empGender << endl;
	cout << "Phone: " << e.empPhno << endl;
	cout << "Address: " << e.empAddress << endl;
	cout << "===========================================" << endl;
}

bool getEmpDetails(EMP* e)
{
	cout << "===========================================" << endl;
	cout << "Name: ";cin >> e->empName;
	//do the validation of name here
	cout << "ID:";cin >> e->empID << endl;//cout<<"ID:";cin>>empID;
	cout << "Gender:";cin >> e->empGender << endl;
	cout << "phone:";cin >> e->empPhno << endl;
	cout << "address:";cin >> e->empAddress << endl;
	cout << "=============================================" << endl;
}

int updateempdetails(EMP* e);
{
	cout << "===========================================" << endl;
	cout<<"joining "

}

bool v_name(string name)
{
	for (int i = 0;i < name.length();i++) {
		if(name[i]>='a')&&(name[i]<='z')||(name[i]>='A')&&(name[i]<='Z')||(name[i]==' ')

	}
}

		