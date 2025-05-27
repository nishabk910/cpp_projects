#include"node.h"



void Node::setID(int ID)
{
	id = ID;

}

void Node::setName(string Name)
{
	name = Name;
}

void Node::setSalary(float Salary)
{
	salary = Salary;

}

int Node::getID()
{

	return id;
}

string Node::getName()
{
	return name;
}

float Node::getSalary()
{
	return salary;
}

void Node::setNext(Node* nn)
{
	next = nn;
}

Node* Node::getNext()
{
	return next;
}