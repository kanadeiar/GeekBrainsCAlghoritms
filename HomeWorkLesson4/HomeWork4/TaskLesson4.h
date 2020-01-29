#pragma once
#include <windows.h>
#include <stdio.h>

void task1_counter();
void task2_lcs();
void task3_horse();

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
	printf("\n**************************************************************************************\n");
	printf("������� ����� ����������� �������� (int):\n");
	printf("[1] - ������ 1. ���������� ��������� � �������������. ����������� ������ ������� � ������������ � ���������� ���������� ���������.\n");
	printf("[2] - ������ 2. ������ ������ � ���������� ����� ������������ ������������������ � ������� �������.\n");
	printf("[3] - ������ 3. ����� ����� ��������� �����.\n");
	printf("[0] - �����\n");
	printf("��� �����:> ");
}

/**
 * \brief ����� ��������� ������������� ������
 * \param select ��������� ������
 */
inline void actionSelect(int select)
{
	switch (select)
	{
	case 1: task1_counter();
		break;
	case 2: task2_lcs();
		break;
	case 3: task3_horse();
		break;
	case 0: break;
	default:
		printf("�������� �����.\a\n");
	}
}

/**
 * \brief ��������� ����������� ����������
 */
inline void PrintHeader()
{
	printf("**************************************************************************************\n");
	printf("*                    ��������� � ��������� ������. ������� ����.                     *\n");
	printf("*              ���� 4. ������������ ����������������. ����� ���������                *\n");
	printf("**************************************************************************************\n\n");
}

/**
 * \brief ���������� ����������� ����������
 */
inline void PrintFooter()
{
	printf("��� ������ �� ��������� ������� ������ ...");
	getchar();
}