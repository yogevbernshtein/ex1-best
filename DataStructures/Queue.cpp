#include "Queue.h"
#include <cstdlib>
#include <iostream>

/*
Function inits a queue
inputs: q - the queue to initialize, size - the q size to initialize
output: none
*/
void initQueue(Queue* q, unsigned int size)
{
	unsigned int i = 0;
	//create an array saves the queue
	q->queue = new int[size];
	
	//a loop runs on all the array and initializes numbers by 0
	for (i = 0; i < size; i++)
	{
		q->queue[i] = 0;
	}

	//initialize the size and the length
	q->size = 0;
	q->length = size;
}

/*
Function cleans a queue
inputs: q - the queue to clean
output: none
*/
void cleanQueue(Queue* q)
{
	//delete queue
	delete q->queue;
	q->queue = NULL;
	q->size = 0;
}

/*
Function enters a number to the queue
inputs: q - the queu to which add a number, newValue - the number to enter
output: none
*/
void enqueue(Queue* q, unsigned int newValue)
{
	//if queue has more plases
	if (q->length > q->size)
	{
		//add a number to queue
		q->queue[q->size] = newValue;
		q->size++;
	}
}

/*
Function deletes a number from queue
inputs: q - the queue to delete a number from
output: the number removed
*/
int dequeue(Queue* q)
{
	int i = 0;

	//find the first number in queue
	int first_value = q->queue[0];

	//a loop runs on all the numbers in queue and takes every number one step forward
	while (q->queue[i] != 0 && i < q->length)
	{
		q->queue[i] = q->queue[i + 1];
		i++;
	}

	//remove the last number
	q->queue[i - 1] = 0;
	q->size--;

	//return the first number
	return first_value;
}

/*
Function checks if a queue is empty
inputs: s - the queue to check
output: is que empty
*/
bool isEmpty(Queue* s)
{
	return s->queue[0] == 0;
}

/*
Function checks wether a queue is full
inputs: s - the queue to check
output: is queue full
*/
bool isFull(Queue* s)
{
	return s->queue[0] != 0;
}
