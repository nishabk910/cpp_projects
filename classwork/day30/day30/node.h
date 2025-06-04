
#pragma once
#include<iostream>
using namespace std;


class Node

{
private:

	int id;
	string name;
	float salary;
	Node* next;


public:
	Node(int i = 0)
	{
		id = i;
		salary = 0.0;

	}

	void setID(int);
	void setName(string);
	void setSalary(float);
	int getID();
	string getName();
	float getSalary();
	void setNext(Node*);
	Node* getNext();


};