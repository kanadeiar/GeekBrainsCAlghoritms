#include <stdio.h>

#include "HeaderHomeWork6Trees.h"

/*
 * ���� "��������� � ��������� ������. ������� ����."
 * ���� 6. �������
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

void Task1Hash()
{
	puts("\n**************************************************************************************");
	puts("1. ����������� ���������� ���-�������. �� ���� ������� �������� ������, �� ������ ����� ����� ��������.");
	/////////////////////////////////////////////////////////////
	char str[267];
	printf("������� ������ ��� ���������� �� ����:> ");
	gets_s(str, _countof(str));
	puts("��������� ������:");
	printf("%s\n", str);
	puts("�� ��� ����������:");
	int hash = getHashFromStr(str);
	printf("%d\n");
	/////////////////////////////////////////////////////////////
	getchar();
}