#include <iostream>
#include "Stack1.h"
#include <new>
using namespace std;

Stack::Stack()
{
	head = nullptr; //Sets head to point at nothing.
}

Stack::~Stack()
{
	while (isEmpty() == false) //Runs untill the list is empty.
	{
		pop(); //Deletes top node.
	}
}

bool Stack::isEmpty()
{
	if (head == nullptr) //Checks to see if head is pointing at nothing,
		return true;     //if so true is returned.

	else
		return false; //Otherwise false is returned.
}

bool Stack::isFull()
{
	node* location; //Temporary location is created.
	try //Try to create a new node and returns false.
	{
		location = new node;
		delete location;
		return false;
	}
	catch (bad_alloc exception) //If there is no room then true is returned.
	{
		return true;
	}
}

void Stack::push(itemType item_)
{
	//creates a pointer that will point at the node
	node* location;

	//checks to see if the list if full before inserting item.
	if (isFull() == false)
	{
		location = new node; //Allocates space and creates node.
		location->item = item_; //Stores item in the node.
		location->next = head; //Stores adress of the first node in next of the new node
		head = location; //Store addres of the newly created node to head.
	}
}

void Stack::pop()
{
	node* pointer; //Temporary pointer is created.

	if (isEmpty() == false) //Checks to see if List is not empty.
	{
		pointer = head; //Pointer is set to head.
		head = head->next; //Head points at the next node in stack.
		delete pointer; //Pointer is deleted.
	}
}

itemType Stack::Top()
{
	if (isEmpty()) //Checks to see if stack is empty and if it is returns NULL.
	{
		cout << "There is nothing in the stack." << endl;
		return NULL;
	}
	else
		return head->item; //Top item is returned.
}
