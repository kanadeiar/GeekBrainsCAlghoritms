#include <stdio.h>
#include "HomeWork7Header.h"
#include "Task1Matrix.h"
#include "Task2Dfs.h"

/**
 * ���� "��������� � ��������� ������. ������� ����."
 * ���� 7. �����. ��������� �� ������.
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
		ActionSelect(userSelect);
	}
	while (userSelect != 0);
	//////////////////////////////////////////////
	PrintFooter();
	return 0;
}

void Task1Matrix()
{
	puts("\n**************************************************************************************");
	puts("1. �������� �������, ������� ��������� ������� ��������� �� ����� � ������� �� �� �����.");
	/////////////////////////////////////////////////////////////
	int mtrxsize;
	int ** matrix = GetMatrixFromFile(&mtrxsize);
	puts("������� ���������:");
	PrintMatrtix(matrix, mtrxsize);
	puts("������� ����:");
	PrintLines(matrix, mtrxsize);
	FreeMatrix(matrix, mtrxsize);
	/////////////////////////////////////////////////////////////
	getchar();
}

void Task2Dfs()
{
	puts("\n**************************************************************************************");
	puts("2. �������� ����������� ������� ������ ����� � �������.");
	/////////////////////////////////////////////////////////////
	RunDFS();
	/////////////////////////////////////////////////////////////
	getchar();
}

