#include <stdio.h>
#include <time.h>
#include "HomeWork8Header.h"
#include "Task1CountSort.h"


/**
 * ���� "��������� � ��������� ������. ������� ����."
 * ���� 8. ������� ����������.
 * ������
 * ������������
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
	puts("1. ����������� ���������� ���������.");
	/////////////////////////////////////////////////////////////
	int arr[SIZE_ARR];
	srand(time(NULL));
	for (int i = 0; i<SIZE_ARR; i++)
		arr[i] = rand() % 10 + 1;
	puts("������ �� ���������� ���������:");
	for (int i = 0; i<SIZE_ARR; i++)
		printf("%d ", arr[i]);
	printf("\n");
	CountSort(arr);
	puts("������ ����� ���������� ���������:");
	for (int i = 0; i<SIZE_ARR; i++)
		printf("%d ", arr[i]);
	printf("\n");
	/////////////////////////////////////////////////////////////
	getchar();
}
