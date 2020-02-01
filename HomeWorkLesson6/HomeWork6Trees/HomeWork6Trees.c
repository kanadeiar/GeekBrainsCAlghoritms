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