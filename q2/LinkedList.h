#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct LinkedList
{
	unsigned int num;
	struct LinkedList* next;
}LinkedList;

void add_num(LinkedList** q);
void remove_num(LinkedList** q);

#endif // !LINKEDLIST_H
