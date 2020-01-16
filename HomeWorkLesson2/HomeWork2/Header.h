#pragma once
#include <stdio.h>

void Task1Convert();
void Task2Pow();
void Task3Calculator();

inline void PrintMenu()
{
	printf("\n***********************************************************************************\n");
	printf("������� ����� ����������� �������� (int):\n");
	printf("[1] - ������ 1. ����������� ������� �������� �� ���������� ������� � ��������, ��������� ��������.\n");
	printf("[2] - ������ 2. ����������� ������� ���������� ����� a � ������� b.\n");
	printf("[3] - ������ 3.* ����������� ����������� ����������� ����� �����, ���������� �� ������.\n");
	printf("[0] - �����\n");
	printf("��� �����:> ");
}

inline void actionSelect(int select)
{
	switch (select)
	{
	case 1: Task1Convert();
		break;
	case 2: Task2Pow();
		break;
	case 3: Task3Calculator();
		break;
	case 0: break;
	default:
		printf("�������� �����.\a\n");
	}
}

inline void PrintHeader()
{
	printf("**************************************************************************************\n");
	printf("*                    ��������� � ��������� ������. ������� ����.                     *\n");
	printf("*              ���� 2. ��������������� ��������� ���������. ��������                 *\n");
	printf("**************************************************************************************\n\n");
}

inline void PrintFooter()
{
	printf("��� ������ �� ��������� ������� ������ ...");
	getchar();
}
