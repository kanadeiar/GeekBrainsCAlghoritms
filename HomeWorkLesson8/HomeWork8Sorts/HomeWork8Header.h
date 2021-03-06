#pragma once
#include <windows.h>
#include <stdio.h>
#include "Task1CountSort.h"
#include "Task2QuickSort.h"
#include "Task3MergeSort.h"
#include "Task4AnalyzSorts.h"

void Task1SortCounter();
void Task2QuickSort();
void Task3MergeSort();
void Task4AnalyzSorts();

/**
 * \brief �����������
 */
inline void Ru()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
}

/**
 * \brief ����� ���� � �������
 */
inline void PrintMenu()
{
	puts("\n**************************************************************************************");
	puts("������� ����� ����������� �������� (int):");
	puts("[1] - ������ 1. ����������� ���������� ���������.");
	puts("[2] - ������ 2. ����������� ������� ����������.");
	puts("[3] - ������ 3. *����������� ���������� ��������.");
	puts("[4] - ������ 4. ���������������� ����� ������ ������� �� ���� ���������� ��� 100, 10000, 1000000 ���������.");
	puts("[0] - �����");
	printf("��� �����:> ");
}

/**
 * \brief ����� ��������� ������������� ������
 * \param select ��������� ������
 */
inline void ActionSelect(int select)
{
	switch (select)
	{
	case 1: Task1SortCounter();
		break;
	case 2: Task2QuickSort();
		break;
	case 3: Task3MergeSort();
		break;
	case 4: Task4AnalyzSorts();
		break;
	case 0: break;
	default:
		puts("�������� �����.\a");
	}
}

/**
 * \brief ��������� ����������� ����������
 */
inline void PrintHeader()
{
	puts("**************************************************************************************");
	puts("*                    ��������� � ��������� ������. ������� ����.                     *");
	puts("*                            ���� 8. ������� ����������.                             *");
	puts("**************************************************************************************\n");
}

/**
 * \brief ���������� ����������� ����������
 */
inline void PrintFooter()
{
	puts("��� ������ �� ��������� ������� ����� ������ ...");
	getchar();
}