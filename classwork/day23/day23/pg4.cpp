#include<iostream>

using namespace std;

void display(char[]);
int main() {
	char s[] = "bhima";
	display("nullptr");//temp buffered string

	return 0;

}


void display(const char name[])

{
	while (*name != '\0')
		cout << *name++;
	cout << endl;


}