#include <iostream>
#include "emp.h"
using namespace std;

int main()
{
    EmpLL emp;
    int ch;

    do
    {
        cout << "\n1. add employee";
        cout << "\n2. display all employees";
        cout << "\n3. delete employee by id";
        cout << "\n4. search employee by name";
        cout << "\n5. update salary by id";
        cout << "\n6. count employees";
        cout << "\n0. exit";
        cout << "\nenter your choice: ";
        cin >> ch;

        if (ch == 1)
        {
            int id;
            string name;
            float salary;

            cout << "Enter ID, Name, Salary: ";
            cin >> id >> name >> salary;

            emp.AddEmployee(id, name, salary);
            cout << "employee added: " << name << endl;
        }
        else if (ch == 2)
        {
            emp.DisplayallEmp();
        }
        else if (ch == 3)
        {
            int id;
            cout << "Enter ID to delete: ";
            cin >> id;
            emp.DeleteEmployee(id);
        }
        else if (ch == 4)
        {
            string name;
            cout << "Enter name to search: ";
            cin >> name;
            emp.SearchEmployeebyName(name);
        }
        else if (ch == 5)
        {
            int id;
            cout << "Enter ID to update salary: ";
            cin >> id;
            emp.UpdateSalarybyID(id);
        }
        else if (ch == 6)
        {
            emp.CountEmployees();
        }
        else if (ch == 0)
        {
            cout << "Exit\n";
        }
        else
        {
            cout << "invalid choice\n";
        }

    } while (ch != 0);

    return 0;
}