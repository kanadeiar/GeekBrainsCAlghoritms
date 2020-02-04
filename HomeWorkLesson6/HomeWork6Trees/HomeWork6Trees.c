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

void Task2Tree()
{
	puts("\n**************************************************************************************");
	puts("2. ���������� ���������, ����������� �������� ������ ������.");
	/////////////////////////////////////////////////////////////
	Node *Tree = NULL;
	FILE *file = fopen("digitals.txt", "r");
	if (file == NULL)
	{
		puts("���������� ������� ���� ��� ������");
		getchar();
		exit(1);
	}
	int count;
	fscanf(file, "%d", &count);
	int i;
	for (i = 0; i<count; i++)
	{
		int value;
		fscanf(file, "%d", &value);
		InsertNode(&Tree, value);
	}
	fclose(file);
	PrintTree(Tree);
	printf("\n����� � ������ �������: ");
	PreOrderTravers(Tree);
	printf("\n����� � ������������ �������: ");
	SimmOrderTravers(Tree);
	printf("\n����� � �������� �������: ");
	AfterOrderTravers(Tree);
	printf("\n� ����� ��������� ����� �������:> ");
	int value;
	scanf_s(" %d", &value);
	getchar();
	Node * found = FindInTree(Tree, value);
	if (found)
		printf("������ ������� �� ���������: %d\n", found->value);
	else
		printf("������� �� ������!\n");
	printf("\n");
	/////////////////////////////////////////////////////////////
	getchar();
}