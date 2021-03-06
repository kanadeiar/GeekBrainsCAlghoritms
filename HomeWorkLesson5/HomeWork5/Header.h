#pragma once
#include <windows.h>
#include <stdio.h>

void Task1Binary();
void Task2Stack();
void Task3GoodSequence();
void Task4CopyList();
void Task5InfixToPostfix();
void Task6Queue();

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
	printf("[2] - ������ 2. �������� � ��������� \"���������� ����� �� ������ ������������ ������\" �������� �� ��������� ������.\n");
	printf("[3] - ������ 3. �������� ���������, ������� ����������, �������� �� ��������� ��������������������������� ����������.\n");
	printf("[4] - ������ 4. ������� �������, ���������� ����������� ������.\n");
	printf("[5] - ������ 5. **����������� �������� �������� �� ��������� ������ ��������������� ��������� � �����������.\n");
	printf("[6] - ������ 6. *����������� �������.\n");
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
	case 2: Task2Stack();
		break;
	case 3: Task3GoodSequence();
		break;
	case 4: Task4CopyList();
		break;
	case 5: Task5InfixToPostfix();
		break;
	case 6: Task6Queue();
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

