
#include <iostream>
#include <string>
#include <fstream>
#include <vector>  

using namespace std;

class Employee {
protected:
    char name[20];
    int id;

    void displayEmp() {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
    }

public:
    Employee() {
        id = 0;
        strcpy(name, "");
    }

    Employee(int id, const char* name) {
        this->id = id;
        strcpy(this->name, name);
    }

    void setValues(int id, char* name) {
        this->id = id;
        strcpy(this->name, name);
    }

    int getValues() {
        return id;
    }

    char* getValue() {
        return name;
    }

    void display() {
        displayEmp();
    }
};

class Financial_details : public Employee {
protected:
    int Hra;
    int bp;

public:
    Financial_details() {
        Hra = 0;
        bp = 0;
    }

    Financial_details(int Hra, int bp) {
        this->Hra = Hra;
        this->bp = bp;
    }

    void SetValue(int Hra, int bp) {
        this->Hra = Hra;
        this->bp = bp;
    }

    int gethra() {
        return Hra;
    }

    int getbp() {
        return bp;
    }

    void display() {
        displayEmp();
        cout << "HRA: " << Hra << endl;
        cout << "Basic Pay: " << bp << endl;
    }

    void write() {
        ofstream fout("emp.txt", ios::app);  
        fout << id << " " << name << " " << Hra << " " << bp << endl;
        fout.close();
    }

    static void read() {
        ifstream fin("emp.txt");
        Financial_details f;

        while (fin >> f.id >> f.name >> f.Hra >> f.bp) {
            f.display();
        }

        fin.close();
    }
};


int main() {
    int ch;
    vector<Financial_details> employees;  
    do {
        cout << "\n1. Add employee\n2. Show all\n3. Exit\nEnter choice: ";
        cin >> ch;

        if (ch == 1) {
            int id, hra, bp;
            char name[20];

            cout << "Enter ID: ";
            cin >> id;
            cout << "Enter Name: ";
            cin >> name;
            cout << "Enter HRA: ";
            cin >> hra;
            cout << "Enter Basic Pay: ";
            cin >> bp;

            Financial_details f;
            f.setValues(id, name);
            f.SetValue(hra, bp);

            employees.push_back(f);         
            f.write();                      
        }
        else if (ch == 2) {
           
            Financial_details::read();
        }

    } while (ch != 3);

    return 0;
}
