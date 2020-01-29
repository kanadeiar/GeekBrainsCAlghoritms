#pragma once
#include <stdio.h>

#define MAX_BIN_STACK 0x80
int binStack[MAX_BIN_STACK];
int * pCurrBinStack = binStack - 1;
void bin_push(int val)
{
	if (pCurrBinStack - binStack < MAX_BIN_STACK)
	{
		pCurrBinStack++;
		* pCurrBinStack = val;
	}
	else
	{
		printf("������������ �����!");
		getchar();
		exit(1);
	}
}
int bin_pop()
{
	if (pCurrBinStack >= binStack)
		return *pCurrBinStack--;
	printf("���� ����!");
	return -1;
}
/**
 * \brief ��������� �������� ����� � �������� ������� ��������� �� ����������
 * \param num ����� � ���������� �������
 * \return ����� � �������� �������
 */
long getBinFromDec(int num)
{
	while (num != 0)
	{
		bin_push(num % 2);
		num = num >> 1;
	}
	long temp = 0;
	while (pCurrBinStack >= binStack)
	{
		temp = temp * 10 + bin_pop();
	}
	return temp;
}