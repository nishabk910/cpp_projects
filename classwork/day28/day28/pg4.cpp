
#include <iostream>
#include <string>
#define MAX 5

using namespace std;

class EmployeeStack
{
private:
    string emp[MAX];
    int top;

public:
    EmployeeStack() 
    {
        top = -1;
    }

    void addEmployee(string name) 
    {
        if (top == MAX - 1)
        {
            cout << "Stack is full" << endl;
            return;
        }
        top++;
        emp[top] = name;
        cout << "Employee \"" << name << "\" added" << endl;
    }

    void removeEmployee()
    {
        if (top == -1) {
            cout << "Stack is empty" << endl;
            return;
        }
        cout << "Employee \"" << emp[top] << "\" removed" << endl;
        top--;
    }

    void displayEmployees() {
        if (top == -1) {
            cout << "No employees in the stack" << endl;
            return;
        }
        cout << " Current Employees " << endl;
        for (int i = top; i >= 0; i--) 
        {
            cout << emp[i] << endl;
        }
        cout << endl;
    }
};

int main()
{
    EmployeeStack stack;

    stack.addEmployee("abc");
    stack.addEmployee("efg");
    stack.addEmployee("hij");
    stack.addEmployee("lmn");
    stack.addEmployee("opq");
    stack.addEmployee("rst");

    stack.displayEmployees();
    stack.removeEmployee();
    stack.removeEmployee();
    stack.displayEmployees();

    return 0;
}

