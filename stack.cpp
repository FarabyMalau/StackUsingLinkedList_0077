#include <iostream>
using namespace std;

//Node class representing a single node in the linked list
class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        next =NULL;
    }
};

//Stack class
class Stack
{
private:
    Node *top;  // Pointer to thr top node of the stack

public:
    Stack()
    {
        top = NULL; //Initialize the stack with a null top
    }

    // Push operation: Insert the element onto the top of the
    int push(int value)
    {
        Node *newNode = new Node(); //1. Allocate memory for
        newNode->data = value;      //2. Assign value
        newNode->next = top;        //3. Set the next pointer
        top = newNode;              //4. Update the top pointer
        cout << "Push value: " << value << endl;
        return value;
    }

    //pop operation: remove the topmost element from the stack
    void pop()
    {
        Node *temp = top;
        if (isEmpty())
        {
            cout << "Stack is empty." << endl;
            return;
        }
    

        cout << "Popped value: " << temp->data << endl;
        top = temp->next; //update the top pointer to the
        delete temp;
    }

    //peek/top operation: Retrieve the value of the topmost
    void peek()
    {
        if (isEmpty())
        {
            cout << "List is empty>" << endl;
        }
        else
        {
            Node *current = top;
            while (current != NULL)
            {
                cout << current->data << " " << endl;
                current = current->next;
            }
            cout << endl;
        } // Return the value of the top node
    }

    bool isEmpty()
    {
        return top == NULL; // Return true if the top pointer
    }
};

int main()
{
    Stack stack;

    int choice = 0;
    int value;

    while (choice != 5)
    {
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
            cout << "Enter the value to push: ";
            cin >> value;
            stack.push(value); // push the entered value onto the stack
            break;            
        }
    }
}
