#include <windows.h>
#include <stdio.h>

#include "Header.h"

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

void task1_bubble()
{
	printf("1. ����������� �������������� ����������� ����������. �������� ���������� �������� ��������� ���������������� � �� ���������������� ���������. �������� ������� ����������, ������� ���������� ���������� ��������.\n");
	
	getchar();
}


