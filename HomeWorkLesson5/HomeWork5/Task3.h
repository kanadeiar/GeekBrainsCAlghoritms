#pragma once
#include <stdio.h>

#define MAX_SEQ_STACK 0x20
char seqStack[MAX_SEQ_STACK];
int curr = -1;
void push(char val)
{
	if (curr < MAX_SEQ_STACK)
	{
		seqStack[++curr] = val;
	}
	else
		printf("Переполнение стека!");
}
char pop()
{
	if (curr != -1)
		return seqStack[curr--];
	printf("Стек пуст!");
	return -1;
}
int isGoodSequence(char str[])
{
	char * pI = str;
	while (*pI != '\0')
	{
		char c1 = *pI;
		if (c1 == '(' || c1 == '{' || c1 == '[')
			push(c1);
		else if (c1 == ')' || c1 == '}' || c1 == ']')
		{
			if (curr == -1)
				return 0;
			char c2 = pop();
			if (c1 == ')' && c2 != '(' || c1 == '}' && c2 != '{' || c1 == ']' && c2 != '[')
				return 0;
		}
		pI++;
	}
	if (curr == -1)
		return 1;
	return 0;
}
