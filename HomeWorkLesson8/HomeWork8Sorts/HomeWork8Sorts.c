#include <stdio.h>
#include <time.h>
#include "HomeWork8Header.h"



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
		PrintMenu();
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
	int arr[SIZE_ARR];
	srand(time(NULL));
	for (int i = 0; i<SIZE_ARR; i++)
		arr[i] = rand() % 10 + 1;
	puts("Массив до сортировки подсчетом:");
	for (int i = 0; i<SIZE_ARR; i++)
		printf("%d ", arr[i]);
	printf("\n");
	CountSort(arr);
	puts("Массив после сортировки подсчетом:");
	for (int i = 0; i<SIZE_ARR; i++)
		printf("%d ", arr[i]);
	printf("\n");
	/////////////////////////////////////////////////////////////
	getchar();
}

void Task2QuickSort()
{
	puts("\n**************************************************************************************");
	puts("2. Реализовать быструю сортировку.");
	/////////////////////////////////////////////////////////////
	int arr[SIZE_ARR_Q];
	srand(time(NULL));
	for (int i = 0; i<SIZE_ARR_Q; i++)
		arr[i] = rand() % 10 + 1;
	puts("Массив до быстрой сортировки:");
	for (int i = 0; i<SIZE_ARR_Q; i++)
		printf("%d ", arr[i]);
	printf("\n");
	QuickSort(arr, 0, SIZE_ARR_Q - 1);
	puts("Массив после быстрой сортировки:");
	for (int i = 0; i<SIZE_ARR_Q; i++)
		printf("%d ", arr[i]);
	printf("\n");
	/////////////////////////////////////////////////////////////
	getchar();
}
