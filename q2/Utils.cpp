#include "Stack.h"
#include <iostream>

#define NUMBER 10

/*
Function reverses an array of numbers by stack
inputs: nums - the numbers array, size - the array size
output: none
*/
void reverse(int* nums, unsigned int size)
{
	Stack* stack = new Stack;
	int i = 0;

	//init a new stack
	initStack(stack);

	//a loop for all the numbers in numbers array
	for (i = 0; i < size; i++)
	{
		//push the current number into the stack
		push(stack, nums[i]);
	}

	//for all the indexes in nums array
	for (i = 0; i < size; i++)
	{
		//put in the current index the current first number in stack
		nums[i] = pop(stack);
	}
}

/*
Function reverses a 10 size array which it creates
inputs: none
output: none
*/
int* reverse10(void)
{
	int i = 0;
	int number = 0;
	int* arr = new int[NUMBER];

	//a loop runs 10 times
	for (i = 0; i < NUMBER; i++)
	{
		//initial the current index
		arr[i] = 0;
	}

	//a loop runs on all array
	for (i = 0; i < NUMBER; i++)
	{
		//input a number to the array
		std::cout << "write a number: ";
		std::cin >> arr[i];
	}

	//reverse the array
	reverse(arr, NUMBER);

	//return the reversed array
	return arr;
}
