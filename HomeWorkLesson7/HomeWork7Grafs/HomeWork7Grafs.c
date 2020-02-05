#include <stdio.h>
#include "HomeWork7Header.h"
#include "Task1Matrix.h"
#include "Task2Dfs.h"

/**
 * Курс "Алгоритмы и структуры данных. Базовый курс."
 * Урок 7. Графы. Алгоритмы на графах.
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
	puts("1. Написать функции, которые считывают матрицу смежности из файла и выводят ее на экран.");
	/////////////////////////////////////////////////////////////
	int mtrxsize;
	int ** matrix = GetMatrixFromFile(&mtrxsize);
	puts("Матрица смежности:");
	PrintMatrtix(matrix, mtrxsize);
	puts("Смежные узлы:");
	PrintLines(matrix, mtrxsize);
	FreeMatrix(matrix, mtrxsize);
	/////////////////////////////////////////////////////////////
	getchar();
}

void Task2Dfs()
{
	puts("\n**************************************************************************************");
	puts("2. Написать рекурсивную функцию обхода графа в глубину.");
	/////////////////////////////////////////////////////////////
	RunDFS();
	/////////////////////////////////////////////////////////////
	getchar();
}

