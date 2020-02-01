#pragma once
#include <windows.h>
#include <stdio.h>

void Task1Binary();
void Task2Stack();
void Task3GoodSequence();
void Task4CopyList();
void Task5InfixToPostfix();
void Task6Queue();

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
	printf("\n**************************************************************************************\n");
	printf("Введите цифру дальнейшего действия (int):\n");
	printf("[1] - Задача 1. Реализовать перевод из десятичной в двоичную систему счисления с использованием стека.\n");
	printf("[2] - Задача 2. Добавить в программу \"Реализация стека на основе односвязного списка\" проверку на выделение памяти.\n");
	printf("[3] - Задача 3. Написать программу, которая определяет, является ли введенная скобочнаяпоследовательность правильной.\n");
	printf("[4] - Задача 4. Создать функцию, копирующую односвязный список.\n");
	printf("[5] - Задача 5. **Реализовать алгоритм перевода из инфиксной записи арифметического выражения в постфиксную.\n");
	printf("[6] - Задача 6. *Реализовать очередь.\n");
	printf("[0] - Выход\n");
	printf("Ваш выбор:> ");
}

/**
 * \brief Вызов выбранной пользователем задачи
 * \param select Выбранная задача
 */
inline void actionSelect(int select)
{
	switch (select)
	{
	case 1: Task1Binary();
		break;
	case 2: Task2Stack();
		break;
	case 3: Task3GoodSequence();
		break;
	case 4: Task4CopyList();
		break;
	case 5: Task5InfixToPostfix();
		break;
	case 6: Task6Queue();
		break;
	case 0: break;
	default:
		printf("Неверный выбор.\a\n");
	}
}

/**
 * \brief Заголовок консольного приложения
 */
inline void PrintHeader()
{
	printf("**************************************************************************************\n");
	printf("*                    Алгоритмы и структуры данных. Базовый курс.                     *\n");
	printf("*                       Урок 5. Динамические структуры данных                        *\n");
	printf("**************************************************************************************\n\n");
}

/**
 * \brief Завершение консольного приложения
 */
inline void PrintFooter()
{
	printf("Для выхода из программы нажмите любую кнопку ...");
	getchar();
}

