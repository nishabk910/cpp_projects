#include <iostream>
#include <cstdlib>

using namespace std;


typedef struct node
{
	int data;
	struct node* next;
}NODE;

NODE* createNode();
NODE* addNodeBeg(NODE*, NODE*);
NODE* addNodeEnd(NODE*, NODE*);
int dispList(NODE*);
int dispMenu();
void freeNodes(NODE*);
NODE* addAtPosition(NODE*, NODE*, int);
NODE* deleteByValue(NODE*, int);
void searchValue(NODE*, int);
void updateValue(NODE*, int, int);

int main()
{
	NODE* head = NULL;
	int ch = 1, v, pos, preval, newv;
	while (ch)
	{
		switch (dispMenu())
		{
		case 1:
			head = addNodeBeg(head, createNode());
			break;
		case 2:
			head = addNodeEnd(head, createNode());
			break;
		case 3:
			dispList(head);
			break;
		case 4:
			cout << "Enter position to insert node: ";
			cin >> pos;
			head = addAtPosition(head, createNode(), pos);
			break;
		case 5:
			cout << "Enter value to delete: ";
			cin >> v;
			head = deleteByValue(head, v);
			break;
		case 6:
			cout << "Enter value to search: ";
			cin >> v;
			searchValue(head, v);
			break;
		case 7:
			cout << "Enter existing value to update: ";
			cin >> preval;
			cout << "Enter new value: ";
			cin >> newv;
			updateValue(head, preval, newv);
			break;
		case 8:
			ch = 0;
			break;
		default:
			cout << "Something went wrong" << endl;
		}
	}
	freeNodes(head);
	cout << "Exiting program...." << endl;
	return 0;
}


int dispMenu()
{
	int ch;
	cout << "\tPress,\n\t1. Add Node Begining\n\t2. Add Node End\n";
	cout << "\t3. Display List\n\t4. Add at Position\n";
	cout << "\t5. Delete by Value\n\t6. Search Value\n";
	cout << "\t7. Update Value\n\t8. Exit..\n\tChoice: ";
	cin >> ch;
	return ch;
}

int dispList(NODE* head)
{
	cout << "\tList is " << endl;
	cout << "\t";
	while (head != NULL)
	{
		cout << head->data << " -> ";
		head = head->next;
	}
	cout << "NULL" << endl;
	return EXIT_SUCCESS;
}

NODE* addNodeEnd(NODE* head, NODE* nn)
{
	NODE* temp = head;
	if (head == NULL) {
		head = nn;
		return head;
	}
	while (head->next != NULL)
		head = head->next;
	head->next = nn;
	head = temp;
	return head;
}

NODE* addNodeBeg(NODE* head, NODE* nn)
{
	if (head == NULL)
	{
		head = nn;
		return head;
	}
	nn->next = head;
	head = nn;
	return head;
}

NODE* createNode()
{
	NODE* nn = (NODE*)malloc(sizeof(NODE));
	cout << "enter the value of node: ";
	cin >> nn->data;
	nn->next = NULL;
	return nn;
}

void freeNodes(NODE* head)
{
	NODE* temp = head;
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}



NODE* deleteByValue(NODE* head, int v)
{
	NODE* temp = head;
	NODE* prev = NULL;
	while (temp != NULL && temp->data != v)
	{
		prev = temp;
		temp = temp->next;
	}
	if (temp == NULL) 
		return head; 
	if (prev == NULL)
	{
		head = head->next;
		free(temp);
		return head;
	}
	prev->next = temp->next;
	free(temp);
	return head;
}

void searchValue(NODE* head, int v)
{
	int pos = 1;
	bool found = false;
	while (head != NULL)
	{
		if (head->data == v)
		{
			cout << "Value " << v << " found at position: " << pos << endl;
			found = true;
		}
		head = head->next;
		pos++;
	}
	if (!found) cout << "Value " << v << " not found in the list\n";
}





































NODE* addAtPosition(NODE* head, NODE* nn, int pos)
{
	if (pos <= 1 || head == NULL)
	{
		nn->next = head;
		head = nn;
		return head;
	}
	NODE* temp = head;

	for (int i = 1; i < pos - 1 && temp->next != NULL; i++)
	{
		temp = temp->next;
	}
	nn->next = temp->next;
	temp->next = nn;
	return head;
}







void updateValue(NODE* head, int preval, int newv)
{
	bool found = false;
	while (head != NULL)
	{
		if (head->data == preval)
		{
			head->data = newv;
			cout << "Updated " << preval << " to " << newv << endl;
			found = true;
		}
		head = head->next;
	}
	if (!found) cout << "Value " << preval << " not found to update\n";
}
