#include<iostream>
#include"node.h"
#include"emp.h"

using namespace std;



int EmpLL::AddEmployee(int id, string name, float salary)
{

	Node* nn = new Node;


	nn->setID(id);
	nn->setName(name);
	nn->setSalary(salary);

	if (head == nullptr)
	{

		head = nn;
	}
	else
	{
		Node* temp = head;
		while (temp->getNext() != nullptr)
			temp = temp->getNext();
		temp->setNext(nn);
	}
	cout << "employee added:" << endl;
	return 0;
}

void EmpLL::DisplayallEmp()
{
	if (head == nullptr) {
		cout << "no employees found" << endl;
		return;
	}
	Node* temp = head;
	cout << "---all employee--" << endl;

	if (temp != nullptr)
		cout << temp->getID() << "\t";
	cout << temp->getName() << "\t";
	cout << temp->getSalary() << "\t";

	temp = temp->getNext();


}



void EmpLL::SearchEmployeebyName(string name) {
	Node* temp = head;

	while (temp != nullptr)
	{
		if (temp->getName() == name)
		{
			cout << "\n---search result---" << endl;
			cout << "ID: " << temp->getID();
			cout << "Name: " << temp->getName();
			cout << "Salary: " << temp->getSalary() << endl;

			return;
		}
		temp = temp->getNext();



	}
	cout << "employee name " << name << " not found\n";

}

int EmpLL::dispMenu()
{
	int ch;
	cout << "\tPress,\n\t1.  Add Employee\n\t2. Display all Emp\n";
	cout << "\t3. Delete Employee\n\t4. Search Employee by Name\n";
	cout << "\t5. Update Salaryby ID\n\t6. Count Employees\n";
	cout << "\t7. Exit\n\tChoice: ";
	cin >> ch;
	return ch;
}


void EmpLL::CountEmployees() {

	int count = 0;
	Node* temp = head;

	while (temp != nullptr)
	{
		count++;
		temp = temp->getNext();
	}
	cout << "total employees:" << endl;


}

void EmpLL::DeleteEmployee(int id)
{
	if (head == nullptr) {
		cout << "empty list:";
		return;
	}
	Node* temp = head;
	if (temp->getID() == id) 
	{
		head = temp->getNext();
		free(temp);
		cout << "employee id" << id << "deleted";

	}
	//while (temp != nullptr) 
	//{

	//}

}


//if (temp == nullptr) 



void EmpLL::UpdateSalarybyID(int id)
{
	Node* temp = head;

	while (temp != nullptr)
	{
		if (temp->getID() == id)
		{
			float updatedSalary;
			cout << "enter new salary for employee" << id << ": ";
			cin >> updatedSalary;

			temp->setSalary(updatedSalary);
			cout << "Salary updated for ID " << id << endl;
			return;
		}

		temp = temp->getNext();
	}

	cout << "employee with id " << id << " not found\n";
}
