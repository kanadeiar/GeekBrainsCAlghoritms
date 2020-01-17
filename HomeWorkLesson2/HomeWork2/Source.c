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
		PrintMenu();
		scanf_s(" %d", &userSelect);
		getchar();
		actionSelect(userSelect);
	}
	while (userSelect != 0);
	PrintFooter();
	return 0;
}

/**
 * \brief ������� �� ���������� ������� � ��������
 * \param num ����� � ���������� ������� ���������
 * \return ����� � �������� ������� ���������
 */
int convDecToBin(int num)
{
	if (num <= 1)
		return num;
	int retMe = convDecToBin(num / 2);
	return retMe * 10 + num % 2;
}

void task1_convert()
{
	printf("1. ����������� ������� �������� �� ���������� ������� � ��������, ��������� ��������.\n");
	printf("������� �����-������ �����:> ");
	int num;
	scanf_s(" %d", &num);
	getchar();
	int numBin = convDecToBin(num);
	printf("��� �� ����� � �������� ������� ���������: %d\n", numBin);
	getchar();
}


int myPow(int num, int pw)
{
	int i = 2;
	int rt = num;
	while (i <= pw)
	{
		rt *= num;
		i++;
	}
	return rt;
}

int myRecPow(int num, int pw)
{
	
}

void task2_pow()
{
	printf("2. ����������� ������� ���������� ����� a � ������� b:\na. ��� ��������;\nb. ����������;\nc. *����������, ��������� �������� �������� �������.\n");
	printf("������� �����-������ �����:> ");
	int num;
	scanf_s(" %d", &num);
	getchar();
	printf("� ����� ������� ��� �������?:> ");
	int pw;
	scanf_s(" %d", &pw);
	getchar();
	printf("�������� ����������� � ������� ��� ��������: %d\n", myPow(num, pw));
	

	
	getchar();
}

void task3_calculator()
{
	printf("3.* ����������� ����������� ����������� ����� �����, ���������� �� ������. � ����������� ��� �������, ������ ������� �������� �����:\n������� 1\n������ �� 2\n������ ������� ����������� ����� �� ������ �� 1, ������ ����������� ��� ����� � 2 ����. ������� ���������� ��������, ������� ����� 3 ����������� � ����� 20?\n�) � �������������� �������;\n�) � �������������� ��������.");

	getchar();
}



