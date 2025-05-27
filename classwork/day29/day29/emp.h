#pragma once
#include"node.h"


class EmpLL
{
private:
	Node* head;

public:
	EmpLL() {

		head = nullptr;
	}

	int AddEmployee(int, string, float);
	void DisplayallEmp();
	void DeleteEmployee(int);
	void SearchEmployeebyName(string);
	void UpdateSalarybyID(int);
	void CountEmployees();
	int dispMenu();


};


