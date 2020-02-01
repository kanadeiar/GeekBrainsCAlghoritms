#include <windows.h>
#include <stdio.h>

#include "Header.h"
#include "Task1.h"
#include "Task2.h"
#include "Task3.h"
#include "Task4.h"
#include "Task5.h"
#include "Task6.h"

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

void Task1Binary()
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

void Task2Stack()
{
	printf("\n**************************************************************************************\n");
	printf("2. �������� � ��������� \"���������� ����� �� ������ ������������ ������\" �������� �� ��������� ������.\n���� ������ �� ����������, �� ��������� ��������������� ���������.\n");
	/////////////////////////////////////////////////////////////
	Stack.maxSize = 100;
	Stack.head = NULL;
	Push('a');
	Push('b');
	Push('c');
	PrintStack();
	//////////////////////////////////////////////
	getchar();
}

void Task3GoodSequence()
{
	printf("\n**************************************************************************************\n");
	printf("3. �������� ���������, ������� ����������, �������� �� ��������� ��������� ������������������ ����������. ������� ���������� ��������� \n���������: (), ([])(), {}(),([{}]), \n������������ � )(, ())({), (, ])}), ([(]) \n��� ������ [, (, {.\n��������: (2+(2*2)) ��� [2/{5*(4+7)}]..\n");
	/////////////////////////////////////////////////////////////
	printf("������� ������������������ ��������:> ");
	char str[255];
	gets_s(str, _countof(str));
	int res = isGoodSequence(str);
	printf("��� ������������������%s ����������.\n", res ? "" : " ��");
	//////////////////////////////////////////////
	getchar();
}

void Task4CopyList()
{
	printf("\n**************************************************************************************\n");
	printf("4. ������� �������, ���������� ����������� ������ (�� ���� ��������� � ������ ����� ������������ ������ ��� �������� ������� ������).\n");
	/////////////////////////////////////////////////////////////
	struct My_Node * head = InitMyNodes(1);
	AddToEndMyNodes(head, 2);
	AddToEndMyNodes(head, 3);
	AddToEndMyNodes(head, 4);
	AddToEndMyNodes(head, 5);
	puts("������ ������:");
	PrintNodes(head);
	struct My_Node * headTwo = CloneMyNodes(head);
	puts("������ �������������� ������:");
	PrintNodes(headTwo);	
	//////////////////////////////////////////////
	getchar();
}

void Task5InfixToPostfix()
{
	printf("\n**************************************************************************************\n");
	printf("5. **����������� �������� �������� �� ��������� ������ ��������������� ��������� � �����������.\n");
	/////////////////////////////////////////////////////////////
	char str[128] = "(6+2)*3";
	printf("�������� ���������: %s\n", str);
	char str2[128];
	InfixPostfix(str, str2);
	printf("��������� ��������������: = %s\n", str2);
	//////////////////////////////////////////////
	getchar();
}

void Task6Queue()
{
	printf("\n**************************************************************************************\n");
	printf("6. *����������� �������.\n");
	/////////////////////////////////////////////////////////////

	//////////////////////////////////////////////
	getchar();}
