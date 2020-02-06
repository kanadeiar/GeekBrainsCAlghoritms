#pragma once
#include <windows.h>
#include <stdio.h>
#include "Task1CountSort.h"
#include "Task2QuickSort.h"

void Task1SortCounter();
void Task2QuickSort();

/**
 * \brief Русификация
 */
inline void Ru()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
}

/**
 * \brief Вывод меню в консоль
 */
inline void PrintMenu()
{
	puts("\n**************************************************************************************");
	puts("Введите цифру дальнейшего действия (int):");
	puts("[1] - Задача 1. Реализовать сортировку подсчетом.");
	puts("[2] - Задача 2. Реализовать быструю сортировку.");
	puts("[0] - Выход");
	printf("Ваш выбор:> ");
}

/**
 * \brief Вызов выбранной пользователем задачи
 * \param select Выбранная задача
 */
inline void ActionSelect(int select)
{
	switch (select)
	{
	case 1: Task1SortCounter();
		break;
	case 2: Task2QuickSort();
		break;
	case 0: break;
	default:
		puts("Неверный выбор.\a");
	}
}

/**
 * \brief Заголовок консольного приложения
 */
inline void PrintHeader()
{
	puts("**************************************************************************************");
	puts("*                    Алгоритмы и структуры данных. Базовый курс.                     *");
	puts("*                            Урок 8. Сложные сортировки.                             *");
	puts("**************************************************************************************\n");
}

/**
 * \brief Завершение консольного приложения
 */
inline void PrintFooter()
{
	puts("Для выхода из программы нажмите любую кнопку ...");
	getchar();
}