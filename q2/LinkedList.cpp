#include "LinkedList.h"
#include <iostream>

/*
Function adds a num to a linked list
inputs: q - the linked list to which add a num pointer
output: none
*/
void add_num(LinkedList** q)
{
	//create a new linked list
	LinkedList* new_num = new LinkedList;

	//input a number
	std::cout << "enter number";
	std::cin >> new_num->num;

	//put the new node at list first
	new_num->next = *q;
	*q = new_num;
}

/*
Function removes a num
inputs: q - the linked list from which to remove a number pointer
output: none
*/
void remove_num(LinkedList** q)
{
	//find the first number
	LinkedList* first_num = *q;

	//remove the number from the linked list
	*q = (*q)->next;

	//deleyte the first num
	delete first_num;
}
