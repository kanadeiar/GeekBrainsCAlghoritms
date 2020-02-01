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




