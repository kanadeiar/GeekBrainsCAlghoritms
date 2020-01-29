#include <windows.h>
#include <stdio.h>

#include "Header.h"
#include "Task1.h"

/*
 * Курс "Алгоритмы и структуры данных. Базовый курс."
 * Урок 5. Динамические структуры данных
 * Задачи
 * Рассахатский
 */
int main(int argc, char * args[])
{
    Ru();
	PrintHeader();
	/////////////////////////////////////////////
	int userSelect = 0;
	do
	{
		PrintMenu();
		scanf_s(" %d", &userSelect);
		getchar();
		actionSelect(userSelect);
	}
	while (userSelect != 0);
	//////////////////////////////////////////////
	PrintFooter();
	return 0;
}

void task1_binary()
{
	printf("\n**************************************************************************************\n");
	printf("1. Реализовать перевод из десятичной в двоичную систему счисления с использованием стека.\n");
	/////////////////////////////////////////////////////////////
	printf("Введите целое число в десятичной системе счисления:> ");
	int decnum;
	scanf_s(" %d", &decnum);
	getchar();
	long longval = getBinFromDec(10);
	printf("Это-же значение в десятичной системе счисления: %d", longval);
	//////////////////////////////////////////////
	getchar();
}

