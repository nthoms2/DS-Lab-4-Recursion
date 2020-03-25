#ifndef Stack1_H
#define Stack1_H

#include<string>
using namespace std;

typedef int itemType; //Creates a specified type that will be used for the item being stored.

// Creates the node for the linked list.
struct node
{
	itemType item;
	node* next;
};

class Stack
{
public:
	//Constructor.
	//preconditions: Class is created.
	//postcondistions: The Attributes are initialized.
	Stack();

	//Decostructor.
	//preconditions: Class exists.
	//postcondistions: Class is destroyed and all components of the list are deleted.
	~Stack();

	//Checks to see if there is nothing in the stack.
	//preconditions: There are no problems with head.
	//postcondistions: True is returned if the stack is empty, otherwise false is returned.
	bool isEmpty();

	//Checks to see if the stack is full.
	//preconditions: Memory can be accessed.
	//postcondistions: If memory is full than true is returned, otherwise false is returned.
	bool isFull();

	//Adds a new item on top of the stack.
	//preconditions: Head can be accessed and isFull() is false.
	//postcondistions: Head is pointing to new item on top of the stack.
	void push(itemType item_);

	//Deletes the item on top of the stack.
	//preconditions: There is an item in the head of stack.
	//postcondistions: Head is deleted and then head points at next item in the stack.
	void pop();

	//The item on top is returned.
	//preconditions: There is an item in the head of stack.
	//postcondistions: The item in head is returned.
	itemType Top();

private:
	node* head; //pointer that points at the top of the list.

};
#endif
