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


};
