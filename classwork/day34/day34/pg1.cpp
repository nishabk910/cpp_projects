
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Employee
{
protected:

	char name[20];
	int id;


	void displayEmp()
	{
		cout << "ID: " << id << endl;
		cout << "Name: " << name << endl;
	}

public:

	Employee()
	{
		id = 0;
		strcpy(name, "");
	}
	Employee(int id, const char* name)
	{
		this->id = id;
		strcpy(this->name, name);
	}
	void setValues(int id, char* name)
	{
		this->id = id;
		strcpy(this->name, name);
	}
	int getValues()
	{
		return id;

	}
	char* getValue()
	{
		return name;
	}

	void display() {
		displayEmp();

	}

	//outFile.close();
};


class Financial_details :public Employee {
protected:

	int Hra;
	int bp;
public:

	Financial_details()
	{
		Hra = 0;
		bp = 0;
	}

	Financial_details(int Hra, int bp) {
		this->Hra = Hra;
		this->bp = bp;

	}
	void SetValue(int Hra, int bp)
	{
		this->Hra = Hra;
		this->bp = bp;
	}
	int gethra()
	{
		return Hra;
	}
	int getbp()
	{
		return bp;
	}

	void display() {
		displayEmp();
		cout << "hra: " << Hra << endl;
		cout << "basic pay: " << bp << endl;
	}

	void write()
	{
		ofstream fout("emp.txt", ios::binary | ios::app);
		fout.write((char*)this, sizeof(*this));
		fout.close();
	}

	static void read() {
		ifstream fin("emp.txt", ios::binary);
		Financial_details f;

		while (fin.read((char*)&f, sizeof(f))) {
			f.display();

		}

		fin.close();
	}

};


int main() {
	int ch;
	Financial_details f;

	do {
		cout << "\n1. Add employee\n2. show employees\n3. exit\nenter choice: ";
		cin >> ch;

		if (ch == 1) {
			int id, hra, bp;
			char name[20];

			cout << "enter ID: ";
			cin >> id;
			cout << "enter Name: ";
			cin >> name;
			cout << "enter HRA: ";
			cin >> hra;
			cout << "enter Basic Pay: ";
			cin >> bp;

			f.setValues(id, name);
			f.SetValue(hra, bp);
			f.write();
		}
		else if (ch == 2) {
			Financial_details::read();
		}

	} while (ch != 3);

	return 0;
}














