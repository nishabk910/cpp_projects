#include <iostream>
#define MAX 5

using namespace std;

class Stack
{

private:
    int arr[MAX];
    int top;


public:

    Stack() 
    {
        top = -1;

    }

    void push(int val)
    {
        if (top == MAX - 1)
        {
            cout << "stack is full" << endl;
            return;
            
        }
        top++;
        arr[top] = val;
        cout << val << "pushed to stack" << endl;


    }
    void pop()
    {
        if (top == -1)
        {
            cout << "stack is empty " << endl;
            return;
        }
        cout << arr[top] << "popped" << endl;
        arr[top]--;

    }





    





};



























#include <iostream>
#define MAX 5

using namespace std;

class Stack {
private:
    int arr[MAX];   // Array to store stack elements
    int top;        // Top pointer

public:
    // Constructor
    Stack() {
        top = -1;
    }

    // Push operation
    void push(int value) {
        if (top == MAX - 1) {
            cout << "Stack is full" << endl;
            return;
        }
        top++;
        arr[top] = value;
        cout << value << " pushed to stack" << endl;
    }

    // Pop operation
    void pop() {
        if (top == -1) {
            cout << "Stack is empty" << endl;
            return;
        }
        cout << arr[top] << " got popped out" << endl;
        top--;
    }

    // Display operation
    void display() {
        if (top == -1) {
            cout << "Stack is empty" << endl;
            return;
        }
        cout << "==== Stack Elements ====" << endl;
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << endl;
        }
        cout << endl;
    }
};

// Main function
int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60); // This should show "Stack is full"

    s.display();

    s.pop();
    s.pop();

    s.display();

    s.pop();
    s.pop();
    s.pop();
    s.pop(); // This should show "Stack is empty"

    return 0;
}
