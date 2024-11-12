#include "Stack.h"
#include <iostream>

/*
Function enters a number to the stack
inputs: s - the stack to which enter a number, element - the number to enter to the stack
output: none
*/
void push(Stack* s, unsigned int element)
{
	//create a new node
	LinkedList* new_element = new LinkedList;

	//enter the number to the new node
	new_element->num = element;

	//enter the new node to the stack
	new_element->next = s->first_node;
	s->first_node = new_element;
}

/*
Function takes a number from a stack
inputs: s - the stack from which to take a number
output: the number taken
*/
int pop(Stack* s)
{
	//get the first node
	LinkedList* first_element = s->first_node;
	int flag = 0;

	//if stack full
	if (first_element)
	{
		//take the element from stack
		s->first_node = s->first_node->next;
		flag = first_element->num;
		delete first_element;
	}
	//if stack empty
	else
	{
		//make flag -1(empty)
		flag = -1;
	}

	//return element or empty(-1)
	return flag;
}

/*
Function inits a stack
inputs: s - the stack to init
output: none
*/
void initStack(Stack* s)
{
	s->first_node = NULL;
}

/*
Function cleans a stack
inputs: s - the stalc to clean
output: none
*/
void cleanStack(Stack* s)
{
	//for all the nodes in stack
	while (s->first_node)
	{
		//remove the current node
		pop(s);
	}
}

/*
Function checks if a stack is empty
inptus: s - the stakc to check if empty
output: empty or not
*/
bool isEmpty(Stack* s)
{
	//return if stack empty
	return s->first_node == NULL;
}

/*
Function checks if a stack is full
inputs: s - the stack to check if full
output: full or not
*/
bool isFull(Stack* s)
{
	//return if stack full
	return s->first_node != NULL;
}
