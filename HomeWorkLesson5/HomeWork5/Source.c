#include <windows.h>
#include <stdio.h>

#include "Header.h"
#include "Task1.h"

/*
 * ���� "��������� � ��������� ������. ������� ����."
 * ���� 5. ������������ ��������� ������
 * ������
 * ������������
 */
int main(int argc, char * args[])
{
    Ru();
	PrintHeader();
	/////////////////////////////////////////////
	int userSelect = 0;
	do
	{
		PrintMenu();
		scanf_s(" %d", &userSelect);
		getchar();
		actionSelect(userSelect);
	}
	while (userSelect != 0);
	//////////////////////////////////////////////
	PrintFooter();
	return 0;
}

void task1_binary()
{
	printf("\n**************************************************************************************\n");
	printf("1. ����������� ������� �� ���������� � �������� ������� ��������� � �������������� �����.\n");
	/////////////////////////////////////////////////////////////
	printf("������� ����� ����� � ���������� ������� ���������:> ");
	int decnum;
	scanf_s(" %d", &decnum);
	getchar();
	long longval = getBinFromDec(10);
	printf("���-�� �������� � ���������� ������� ���������: %d", longval);
	//////////////////////////////////////////////
	getchar();
}

