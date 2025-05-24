




















































       
























#include <iostream>
using namespace std;

typedef struct Employee {
    int empID;
    string empName;
    int daysWorked;
    float salary;
} EMP;

// Function declarations
int getEmpDetails(EMP* e);      // to input details
float calculateSalary(int days); // to calculate based on days
void disp(EMP e);               // to display output

// Main function
int main() {
    EMP e;

    getEmpDetails(&e);  // fill employee details
    e.salary = calculateSalary(e.daysWorked); // calculate salary
    disp(e);            // display all details

    return 0;
}

// Function to get employee input
int getEmpDetails(EMP* e) {
    cout << "Enter Employee ID: ";
    cin >> e->empID;

    cout << "Enter Employee Name: ";
    cin.ignore(); // to ignore leftover newline
    getline(cin, e->empName);

    cout << "Enter number of days worked: ";
    cin >> e->daysWorked;

    return 0;
}

// Function to calculate salary based on days
float calculateSalary(int days) {
    const float dailyRate = 1000.0; // fixed salary per day
    return days * dailyRate;
}

// Function to display employee details
void disp(EMP e) {
    cout << "\n========== PAYSLIP ==========\n";
    cout << "Employee ID   : " << e.empID << endl;
    cout << "Employee Name : " << e.empName << endl;
    cout << "Days Worked   : " << e.daysWorked << endl;
    cout << "Salary        : Rs. " << e.salary << endl;
    cout << "=============================\n";
}

