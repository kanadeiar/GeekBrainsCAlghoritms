#pragma once
#include <windows.h>
#include <stdio.h>
#include "Task1CountSort.h"
#include "Task2QuickSort.h"

void Task1SortCounter();
void Task2QuickSort();

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