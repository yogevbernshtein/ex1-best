/*
#include "Queue.h"
#include <iostream>

#define SIZE 24
#define NUMBERS 20

int main()
{
	int i = 0;
	int num = 0;
	Queue* q = new Queue;
	
	//initialize the queue
	initQueue(q, SIZE);

	//a loop enters numbers to queue
	for (i = 0; i < NUMBERS; i++)
	{
		std::cout << "enter number";
		std::cin >> num;

		enqueue(q, 1);
	}

	//if there are mo numbers
	if (isEmpty(q))
	{
		//print an appropriate message
		std::cout << "the queue is empty";
	}
	//if full 
	else
	{
		//print an appropriate message
		std::cout << "the queue is full";
	}

	//delete the queue
	dequeue(q);
	cleanQueue(q);

	return 0;
}
*/