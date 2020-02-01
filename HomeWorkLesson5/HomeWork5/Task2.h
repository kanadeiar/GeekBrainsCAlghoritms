#pragma once
#include <stdio.h>
#include <malloc.h>
#define T char

struct TNode
{
	T value;
	struct TNode * next;
};
typedef struct TNode Node;

struct Stack
{
	Node * head;
	int size;
	int maxSize;
};
struct Stack Stack;

void Push(T value)
{
	if (Stack.size >= Stack.maxSize)
	{
		printf("Переполнение стека!");
		getchar();
		exit(1);
	}
	Node * temp = (Node*) malloc(sizeof(Node));
	if (temp == NULL)
	{
		printf("Ошибка выделения памяти!");
		getchar();
		exit(1);
	}
	temp->value = value;
	temp->next = Stack.head;
	Stack.head = temp;
	Stack.size++;
}

T Pop()
{
	if (Stack.size == 0)
	{
		printf("Стек пуст!");
		return -1;
	}
	Node * temp = Stack.head;
	T value = Stack.head->value;
	Stack.head = Stack.head->next;
	free(temp);
	Stack.size--;
	return value;
}

void PrintStack()
{
	Node * curr = Stack.head;
	while (curr != NULL)
	{
		printf(" %c", curr->value);
		curr = curr->next;
	}
}

