#pragma once
#include <stdio.h>

void Task1Convert();
void Task2Pow();
void Task3Calculator();

inline void PrintMenu()
{
	printf("\n***********************************************************************************\n");
	printf("Введите цифру дальнейшего действия (int):\n");
	printf("[1] - Задача 1. Реализовать функцию перевода из десятичной системы в двоичную, используя рекурсию.\n");
	printf("[2] - Задача 2. Реализовать функцию возведения числа a в степень b.\n");
	printf("[3] - Задача 3.* Исполнитель Калькулятор преобразует целое число, записанное на экране.\n");
	printf("[0] - Выход\n");
	printf("Ваш выбор:> ");
}

inline void actionSelect(int select)
{
	switch (select)
	{
	case 1: Task1Convert();
		break;
	case 2: Task2Pow();
		break;
	case 3: Task3Calculator();
		break;
	case 0: break;
	default:
		printf("Неверный выбор.\a\n");
	}
}

inline void PrintHeader()
{
	printf("**************************************************************************************\n");
	printf("*                    Алгоритмы и структуры данных. Базовый курс.                     *\n");
	printf("*              Урок 2. Асимптотическая сложность алгоритма. Рекурсия                 *\n");
	printf("**************************************************************************************\n\n");
}

inline void PrintFooter()
{
	printf("Для выхода из программы нажмите кнопку ...");
	getchar();
}
