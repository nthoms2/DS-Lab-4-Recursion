//Nolan Thoms
//Data Structures Spring 2020
//Due: 2/6/2020
//Lab 4 Recursion

#include <iostream>
#include "Stack1.h"
using namespace std;

//Preconditions: There needs to be two different stacks created in the main.
//Postconditions: The contents in the first parameter are flipped and then placed in the second.
void flip(Stack& stack1, Stack& stack2);

int main()
{
	//Stack are created.
	Stack stack1;
	Stack stack2;

	//Items are placed on the first stack.
	stack1.push(1);
	stack1.push(2);
	stack1.push(3);

	//Outputs items on the first stack.
	while (stack1.isEmpty() == false)
	{
		cout << stack1.Top() << endl;
		stack1.pop();
	}

	//Reputs items on the first stack.
	stack1.push(1);
	stack1.push(2);
	stack1.push(3);

	//Flips items on to second stack.
	flip(stack1, stack2);

	//Output the items on the second stack.
	while (stack2.isEmpty() == false)
	{
		cout << stack2.Top() << endl;
		stack2.pop();
	}

	return 0;
}

//Flip function.
void flip(Stack& stack1, Stack& stack2)
{
	if (stack1.isEmpty() == false)//Runs untill first stack is empty.
	{
		stack2.push(stack1.Top()); //Puts top item of stack1 on to stack 2
		stack1.pop(); //Gets rid of top of stack 1.
		flip(stack1, stack2);//Repeat.
	}
};

