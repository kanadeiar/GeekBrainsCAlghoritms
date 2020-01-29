#pragma once
#include <windows.h>
#include <stdio.h>

void Task1Binary();
void Task2GoodSequence();
void Task3CopyList();

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
	printf("[1] - ������ 1. ����������� ������� �� ���������� � �������� ������� ��������� � �������������� �����.\n");
	printf("[2] - ������ 2. �������� ���������, ������� ����������, �������� �� ��������� ��������������������������� ����������.\n");
	printf("[3] - ������ 3. ������� �������, ���������� ����������� ������.\n");
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
	case 1: Task1Binary();
		break;
	case 2: Task2GoodSequence();
		break;
	case 3: Task3CopyList();
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
	printf("*                       ���� 5. ������������ ��������� ������                        *\n");
	printf("**************************************************************************************\n\n");
}

/**
 * \brief ���������� ����������� ����������
 */
inline void PrintFooter()
{
	printf("��� ������ �� ��������� ������� ����� ������ ...");
	getchar();
}

