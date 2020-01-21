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

/**
 * \brief ���������� � ������� �����
 * \param num �����
 * \param pw �������
 * \return ���������
 */
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

/**
 * \brief ����������� ���������� � �������
 * \param num �����
 * \param pw �������
 * \return ���������
 */
int myRecPow(int num, int pw)
{
	if (pw == 0)
		return 1;
	return myRecPow(num, pw - 1) * num;
}

/**
 * \brief ����������� ���������� � ������� � �������������� �������� �������� �������
 * \param num �����
 * \param pw �������
 * \return ���������
 */
int myQuiRecPow(int num, int pw)
{
	if (pw == 0)
		return 1;
	if (pw % 2)
		return myQuiRecPow(num, pw - 1) * num;
	return myQuiRecPow(num * num, pw / 2); 
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
	int res =  myPow(num, pw);
	printf("�������� ����������� � ������� ��� ��������: %d\n", res);
	res = myRecPow(num, pw);
	printf("�������� ����������� � ������� � ������� ��������: %d\n", res);
	res = myQuiRecPow(num, pw);
	printf("�������� ����������� � ������� � ������� �������� � ��������� �������: %d\n", res);
	getchar();
}

/**
 * \brief ���������� ������ �� ��������� �����
 * \param num ����� ������� ��������
 * \param comm ������� 1: "+1" 2: "*2"
 * \return ���������� �����
 */
int getNumAct(int num, int comm[20])
{
	int i = 0;
	while (i < 20 && comm[i] != 0)
	{
		if (comm[i] == 1)
			num++;
		else if (comm[i] == 2)
			num *= 2;
		i++;
	}
	return num;
}

/**
 * \brief ������ � ������� ����� ������� ������
 * \param comm 
 */
void Print(int comm[20])
{
	for (int i = 0; i < 20; i++)
		if (comm[i] != 0)
			printf("%d ", comm[i]);
	printf("\n");
}

/**
 * \brief ��������� ������ ������ �� ������ �����������, ��������� ��������� ������������������
 * \param comm ���������� ������ ������
 * \param n �������� ��������� ������
 * \param count ������ ������ ������
 * \return ������� ��������� ������
 */
int Gen(int comm[20], int n, int count)
{
	int i = 0;
	while (comm[i] == n && i < count)
	{
		i++;
	}
	if (i >= count) return 0;
	if (comm[i] >= n)
		i++;
	comm[i]++;
	if (i == 0)
		return 1;
	for (int j = 0; j < i; j++)
		comm[j] = 1;
	return 1;
}

/**
 * \brief ����������� ������� ���������� ����� ���������� �� ������ ����� �� ������� ��������� ��� ������� - ���� ���� � �������� �� ���
 * \param from ��
 * \param to ��
 * \param comm �������� ��� ���������� ������, �� ��������� - ����
 * \return 
 */
int countRecursive(int from, int to, long long comm)
{
	if (from == to)
	{
		printf("%lld\n", comm);
		return 1;
	}
	if (from > to)
		return 0;
	int count = 0;
	long long cm = comm * 10 + 1;
	count += countRecursive(from + 1, to, cm);
	cm = comm * 10 + 2;
	count += countRecursive(from * 2, to, cm);
	return count;
}

void task3_calculator()
{
	printf("3.* ����������� ����������� ����������� ����� �����, ���������� �� ������. � ����������� ��� �������, ������ ������� �������� �����:\n1 - ������� 1\n2 - ������ �� 2\n������ ������� ����������� ����� �� ������ �� 1, ������ ����������� ��� ����� � 2 ����. ������� ���������� ��������, ������� ����� 3 ����������� � ����� 20?\n�) � �������������� �������;\n�) � �������������� ��������.\n");
	int from = 3;
	int to = 20;
	int comm[20] = {0};
	int count = 0;
	while (Gen(comm, 2, 20))
	{
		int num = getNumAct(from, comm);
		if (num == 20)
		{
			count++;
			Print(comm);
		}
	}
	printf("����� �������� �������� ����� 3 � 20 ��� ������������� ��������: %d\n", count);

	int cnt = countRecursive(from, to, 0);
	printf("����� �������� �������� ����� 3 � 20 � ������� ��������: %d", cnt);
	getchar();
}



