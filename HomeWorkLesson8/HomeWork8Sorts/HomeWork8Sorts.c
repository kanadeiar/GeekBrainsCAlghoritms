#include <stdio.h>
#include "HomeWork8Header.h"
#include <time.h>

/**
 * Курс "Алгоритмы и структуры данных. Базовый курс."
 * Урок 8. Сложные сортировки.
 * Задачи
 * Рассахатский
 */
int main(int argc, char * args[])
{
	Ru();
	PrintHeader();
	/////////////////////////////////////////////////
	int userSelect = 0;
	do
	{
		PrintHeader();
		scanf_s(" %d", &userSelect);
		getchar();
		ActionSelect(userSelect);
	}
	while (userSelect != 0);
	/////////////////////////////////////////////////
	PrintFooter();
	return 0;
}

void Task1SortCounter()
{
	puts("\n**************************************************************************************");
	puts("1. Реализовать сортировку подсчетом.");
	/////////////////////////////////////////////////////////////
	int arr[30];
	srand(time(NULL));
	for (int i = 0; i<30; i++)
		arr[i] = rand() % 10;
	int resultArr[10];
	
	
	/////////////////////////////////////////////////////////////
	getchar();
}
