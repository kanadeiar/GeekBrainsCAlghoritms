#include <windows.h>
#include <stdio.h>


#include "Header.h"

/*
 * ���� "��������� � ��������� ������. ������� ����."
 * ������ � 1 �� 3.
 * ������������
 */
int main(int argc, char * args[])
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	PrintHeader();
	int userSelect = 0;
	do
	{
		PrintMenu(); //�������
		scanf_s(" %d", &userSelect); //��������� ������ ������������
		getchar();
		actionSelect(userSelect); //����� ��������� ������������� ������
	}
	while (userSelect != 0);
	PrintFooter();
	return 0;
}

void Task1Convert()
{
	printf("1. ����������� ������� �������� �� ���������� ������� � ��������, ��������� ��������.\n");
	
	getchar();
}

void Task2Pow()
{
	printf("2. ����������� ������� ���������� ����� a � ������� b:\na. ��� ��������;\nb. ����������;\nc. *����������, ��������� �������� �������� �������.");

	getchar();
}

void Task3Calculator()
{
	printf("3.* ����������� ����������� ����������� ����� �����, ���������� �� ������. � ����������� ��� �������, ������ ������� �������� �����:\n������� 1\n������ �� 2\n������ ������� ����������� ����� �� ������ �� 1, ������ ����������� ��� ����� � 2 ����. ������� ���������� ��������, ������� ����� 3 ����������� � ����� 20?\n�) � �������������� �������;\n�) � �������������� ��������.");

	getchar();
}



