#pragma once
#include <windows.h>
#include <stdio.h>

void Task1Matrix();
void Task2Dfs();
void Task3Bfs();

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
	puts("[1] - ������ 1. �������� �������, ������� ��������� ������� ��������� �� ����� � ������� �� �� �����.");
	puts("[2] - ������ 2. �������� ����������� ������� ������ ����� � �������.");
	puts("[3] - ������ 3. �������� ������� ������ ����� � ������.");
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
	case 1: Task1Matrix();
		break;
	case 2: Task2Dfs();
		break;
	case 3: Task3Bfs();
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
	puts("*                        ���� 7. �����. ��������� �� ������.                         *");
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
