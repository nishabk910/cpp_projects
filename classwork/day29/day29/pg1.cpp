//srp-self referenced pointer


#include<iostream>

using namespace std;

struct node {

	int v;
	struct node* ptr;

};

int main() {

	//allocating mem for diff nodes

	struct node n1, n2, n3;

	cout << sizeof(n1) << "\t address of n1" << (unsigned long int) & n1 << endl;
	cout << sizeof(n2) << "\t address of n1" << (unsigned long int) & n2 << endl;
	cout << sizeof(n3) << "\t address of n1" << (unsigned long int) & n3 << endl;




	//step2: initialise val of all nodes


	n1.v = 10;
	n1.ptr = NULL;


	n2.v = 20;
	n2.ptr = NULL;

	n3.v = 30;
	n3.ptr = NULL;



	cout << "n1 value:  " << n1.v << "\tptr" << n1.ptr << endl;
	cout << "n2 value:  " << n2.v << "\tptr" << n2.ptr << endl;
	cout << "n3 value:  " << n3.v << "\tptr" << n3.ptr << endl;

	//step3: make a relationship

	n1.ptr = &n2;
	n2.ptr = &n3;


	cout << "after making the relationship" << endl;
	cout << sizeof(n1) << "\t address of n1" << (unsigned long int) & n1 << endl;
	cout << sizeof(n2) << "\t address of n2" << (unsigned long int) & n2 << endl;
	cout << sizeof(n3) << "\t address of n3" << (unsigned long int) & n3 << endl;

//srep4: traversing in the list

	struct node* head = &n1;//n1=>BA of the list


	cout << n1.v << endl;//10
	cout << head->v << endl;
	cout << "address of head->ptr:" << (unsigned long int)head->ptr;

	//head = &n2;
	head = head->ptr;
	cout << n2.v << endl;//20
	cout << head->v << endl;


	//head = &n3;
	head = head->ptr;
	cout << n3.v << endl;//30
	cout << head->v << endl;


	while (head!=NULL)

	{
		cout << head->v << "->";
		head = head->ptr;
	}

	cout << "NULL" << endl;

	struct node n4;
	n4.v = 40;
	n4.ptr = NULL;

	//add node btw 2 nodes
	n1.ptr = &n4;
	n4.ptr = &n2;



	head = &n1;

	while (head != NULL)
	{
		cout << head->v << "->";
		head = head->ptr;
	}








	return 0;



}
