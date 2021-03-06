#include <stdio.h>
#include <time.h>
#include "HomeWork8Header.h"



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

void Task2QuickSort()
{
	puts("\n**************************************************************************************");
	puts("2. ����������� ������� ����������.");
	/////////////////////////////////////////////////////////////
	int arr[SIZE_ARR_Q];
	srand(time(NULL));
	for (int i = 0; i<SIZE_ARR_Q; i++)
		arr[i] = rand() % 10 + 1;
	puts("������ �� ������� ����������:");
	for (int i = 0; i<SIZE_ARR_Q; i++)
		printf("%d ", arr[i]);
	printf("\n");
	QuickSort(arr, 0, SIZE_ARR_Q - 1);
	puts("������ ����� ������� ����������:");
	for (int i = 0; i<SIZE_ARR_Q; i++)
		printf("%d ", arr[i]);
	printf("\n");
	/////////////////////////////////////////////////////////////
	getchar();
}

void Task3MergeSort()
{
	puts("\n**************************************************************************************");
	puts("3. *����������� ���������� ��������.");
	/////////////////////////////////////////////////////////////
	int arr[SIZE_MERGE];
	srand(time(NULL));
	for (int i = 0; i<SIZE_MERGE; i++)
		arr[i] = rand() % 10 + 1;
	puts("������ �� ���������� ������� �������:");
	for (int i = 0; i<SIZE_MERGE; i++)
		printf("%d ", arr[i]);
	printf("\n");
	MergeSort(arr, 0, SIZE_MERGE - 1);
	puts("������ ����� ���������� ������� �������:");
	for (int i = 0; i<SIZE_MERGE; i++)
		printf("%d ", arr[i]);
	printf("\n");
	/////////////////////////////////////////////////////////////
	getchar();
}

void Task4AnalyzSorts()
{
	puts("\n**************************************************************************************");
	puts("4. ���������������� ����� ������ ������� �� ���� ���������� ��� 100, 10000, 1000000 ���������.");
	/////////////////////////////////////////////////////////////
	srand(time(NULL));
	RunQuickSort();
	RunShellSort();
	RunMergeSort();
	RunHeapSort();
	//RunBubbleSort();
	//RunShakerSort();
	/////////////////////////////////////////////////////////////
	getchar();
}
