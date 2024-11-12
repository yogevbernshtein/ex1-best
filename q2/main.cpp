#include "LinkedList.h"
#include <iostream>


int main()
{
	unsigned int i = 0;
	const int NUM = 10;
	Stack* q = NULL;

	for (i = 0; i < NUM; i++)
	{
		add_num(&q);
	}
	for (i = 0; i < 0.5 * NUM; i++)
	{
		remove_num(&q);
	}

	return 0;
}
