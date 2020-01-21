#include <windows.h>
#include <stdio.h>
#include <time.h>

#include "Header.h"

/*
 * ���� "��������� � ��������� ������. ������� ����."
 * ������
 * ������������
 */
int main(int argc, char * args[])
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	PrintHeader();
	///////////////////////////////////////////////////
	int userSelect = 0;
	do
	{
		PrintMenu();
		scanf_s(" %d", &userSelect);
		getchar();
		actionSelect(userSelect);
	}
	while (userSelect != 0);
	///////////////////////////////////////////////////
	PrintFooter();
	return 0;
}

#define SIZE_ARR 100
/**
 * \brief ���������� ���������
 * \param arr ������
 * \param count ���������� ��������
 */
void sortBubbleFirst(int arr[], int * count)
{
	*count = 0;
	for (int i=0; i<SIZE_ARR; i++)
		for (int j=0; j<SIZE_ARR - 1; j++)
		{
			*count += 1;
			if (arr[j] > arr[j + 1])
			{
				*count += 1;
				int t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
			}
		}
}

/**
 * \brief ���������������� ���������� ���������
 * \param arr ������
 * \param count ���������� ��������
 */
void sortBubbleModified(int * arr, int * count)
{
	*count = 0;
	int * pI = arr;
	int * pLast = arr + SIZE_ARR-1;
	while (pI <= pLast - 1)
	{
		int * pJ = pI + 1;
		while (pJ <= pLast)
		{
			*count += 1;
			if (*pJ < *pI)
			{
				*count += 1;
				int t = *pJ;
				*pJ = *pI;
				*pI = t;
			}
			pJ++;
		}
		pI++;
	}
}

void task1_bubble()
{
	printf("1. ����������� �������������� ����������� ����������. �������� ���������� �������� ��������� ���������������� � �� ���������������� ���������. �������� ������� ����������, ������� ���������� ���������� ��������.\n");
	srand(time(NULL));
	int arr[SIZE_ARR];
	for (int i=0; i<SIZE_ARR; i++)
		arr[i] = rand() % 20;
	int count;
	sortBubbleFirst(arr, &count);
	puts("\n������ ����� ������� ���������� ��������� �� ���������:");
	for (int i=0; i<SIZE_ARR; i++)
		printf("%2d ", arr[i]);
	printf("\n");
	printf("���������� ��������: %d\n", count);
	for (int i=0; i<SIZE_ARR; i++)
		arr[i] = rand() % 20;
	sortBubbleModified(arr, &count);
	puts("\n������ ����� ���������������� ���������� ���������:");
	for (int i=0; i<SIZE_ARR; i++)
		printf("%2d ", arr[i]);
	printf("\n");
	printf("���������� ��������: %d\n", count);
	getchar();
}

/**
 * \brief ��������� ����������
 * \param arr ������
 * \param count ����� ��������
 */
void sortShaker(int * arr, int * count)
{
	*count = 0;
	int * pI = arr;
	int * pJ = arr + SIZE_ARR - 1;
	while (pI < pJ)
	{
		*count += 1;
		if ((pJ - pI) % 2 != 0)
		{ //�������� - ����� �������
			int * pK = pI + 1;
			while (pK <= pJ)
			{
				*count += 1;
				if (*pK < *pI)
				{
					*count += 1;
					int t = *pI;
					*pI = *pK;
					*pK = t;
				}
				pK++;
			}
			pI++;
		}
		else
		{ //������ - ������ ������
			int * pK = pJ - 1;
			while (pK >= pI)
			{
				*count += 1;
				if (*pK > *pJ)
				{
					*count += 1;
					int t = *pJ;
					*pJ = *pK;
					*pK = t;
				}
				pK--;
			}
			pJ--;
		}
	}
}

void task2_shaker()
{
	printf("2. ����������� ��������� ����������.\n");
	srand(time(NULL));
	int arr[SIZE_ARR];
	for (int i=0; i<SIZE_ARR; i++)
		arr[i] = rand() % 20;
	int count;
	puts("\n������:");
	for (int i=0; i<SIZE_ARR; i++)
		printf("%2d ", arr[i]);
	printf("\n");
	
	sortShaker(arr, &count);
	
	puts("\n������ ����� ���������� ���������:");
	for (int i=0; i<SIZE_ARR; i++)
		printf("%2d ", arr[i]);
	printf("\n");
	printf("���������� ��������: %d\n", count);
	
	getchar();
}
