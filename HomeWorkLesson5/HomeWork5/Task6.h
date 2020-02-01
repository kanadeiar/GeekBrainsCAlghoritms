#pragma once
#include <stdio.h>

#define TQ char

struct TQNode
{
	TQ value;
	struct TQNode * next;
};
typedef struct TQNode QNode;
struct Queue
{
	QNode * head;
	QNode * tail;
	int size;
	int maxSize;
};
struct Queue Queue;
void Enqueue(TQ value)
{
	if (Queue.size >= Queue.maxSize)
	{
		puts("Переполнение очереди!");
		return;
	}
	QNode * tmp = (QNode *)malloc(sizeof(QNode));
	tmp->value = value;
	tmp->next = NULL;
	if (Queue.size == 0)
	{
		Queue.head = Queue.tail = tmp;
	}
	else
	{
		Queue.tail->next = tmp;
		Queue.tail = tmp;
	}
	Queue.size++;
}
TQ Dequeue()
{
	if (Queue.size == 0)
	{
		puts("Очередь пуста!");
		return -1;
	}
	TQ temp = Queue.head->value;
	QNode * delme = Queue.head;
	Queue.head = Queue.head->next;
	Queue.size--;
	if (Queue.size == 0)
	{
		Queue.head = Queue.tail = NULL;
	}
	free(delme);
	return temp;
}
TQ Peek()
{
	if (Queue.size == 0)
	{
		puts("Очередь пуста!");
		return -1;
	}
	return Queue.head->value;
}



