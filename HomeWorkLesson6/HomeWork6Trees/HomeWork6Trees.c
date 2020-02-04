#include <stdio.h>

#include "HeaderHomeWork6Trees.h"

/*
 * Курс "Алгоритмы и структуры данных. Базовый курс."
 * Урок 6. Деревья
 * Задачи
 * Рассахатский
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
	puts("1. Реализовать простейшую хеш-функцию. На вход функции подается строка, на выходе сумма кодов символов.");
	/////////////////////////////////////////////////////////////
	char str[267];
	printf("Введите строку для вычисления ее хеша:> ");
	gets_s(str, _countof(str));
	puts("Введенная строка:");
	printf("%s\n", str);
	puts("Ее хеш полученный:");
	int hash = getHashFromStr(str);
	printf("%d\n");
	/////////////////////////////////////////////////////////////
	getchar();
}

void Task2Tree()
{
	puts("\n**************************************************************************************");
	puts("2. Переписать программу, реализующую двоичное дерево поиска.");
	/////////////////////////////////////////////////////////////
	Node *Tree = NULL;
	FILE *file = fopen("digitals.txt", "r");
	if (file == NULL)
	{
		puts("Невозможно открыть файл для чтения");
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
	printf("\nОбход в прямом порядке: ");
	PreOrderTravers(Tree);
	printf("\nОбход в симметричном порядке: ");
	SimmOrderTravers(Tree);
	printf("\nОбход в обратном порядке: ");
	AfterOrderTravers(Tree);
	printf("\nС каким значением найти элемент:> ");
	int value;
	scanf_s(" %d", &value);
	getchar();
	Node * found = FindInTree(Tree, value);
	if (found)
		printf("Найден элемент со значением: %d\n", found->value);
	else
		printf("Элемент не найден!\n");
	printf("\n");
	/////////////////////////////////////////////////////////////
	getchar();
}