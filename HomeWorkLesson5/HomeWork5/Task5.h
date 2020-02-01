#pragma once

#define MAX_CHARS_SIZE 100
char CharStack[MAX_CHARS_SIZE];
int countCharStack = 0;
void ChStPush(char val)
{
	if (countCharStack > MAX_CHARS_SIZE)
	{
		printf("Переполнение стека!");
		getchar();
		exit(1);
	}
	CharStack[countCharStack] = val;
	countCharStack++;
}
char ChStPop()
{
	if (countCharStack <= 0)
	{
		return 0;
	}
	return CharStack[--countCharStack];
}
char ChStPeek()
{
	if (countCharStack <= 0)
	{
		return 0;
	}
	return CharStack[countCharStack];
}
int isOperator(char c)
{
	return (c=='+' || c=='-' || c=='*' || c=='/' || c=='^');
}
int precedence(char c1, char c2)
{
	char s[4][3] = {"()", "+-", "*/", "^^"};
	int k1 = 0, k2 = 0;
	for (int i=0; i<4; i++)
	{
		for (int j=0; j<2; j++)
		{
			if (c1 == s[i][j]) k1 = i;
			if (c2 == s[i][j]) k2 = i;
		}
	}
	if (k1 < k2)
		return -1;
	if (k1 > k2)
		return 1;
	return 0;
}

void InfixPostfix(char infix[], char postfix[])
{
	int j = 0;
	for	(int i = 0; infix[i]!='\0'; i++)
	{
		char nowch = infix[i];
		if (nowch >= '0' && nowch <= '9')
		{
			postfix[j++] = nowch;
			postfix[j] = '\0';
		}
		else if (nowch == '(')
		{
			ChStPush(nowch);
		}
		else if (isOperator(nowch))
		{
			char top = ChStPop();
			while ((precedence(top, nowch) == 0) || !(precedence(top, nowch) == -1))
			{
				postfix[j++] = top;
				top = ChStPeek();
				if (top == ')' || top == '(')
					break;
				top = ChStPop();
			}
			ChStPush(nowch);
		}
		else if (nowch == ')')
		{
			char tmp = ChStPop();
			while (tmp != '(' && tmp != '\0')
			{
				postfix[j++] = tmp;
				tmp = ChStPop();
			}
		}
	}
	char tmp = ChStPop();
	while (tmp != '\0')
	{
		postfix[j++] = tmp;
		tmp = ChStPop();
	}
	postfix[j]='\0';
}