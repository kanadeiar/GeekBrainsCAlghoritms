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