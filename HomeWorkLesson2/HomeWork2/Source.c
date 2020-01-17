#include <windows.h>
#include <stdio.h>


#include "Header.h"

/*
 * Курс "Алгоритмы и структуры данных. Базовый курс."
 * Задачи с 1 по 3.
 * Рассахатский
 */
int main(int argc, char * args[])
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	PrintHeader();
	int userSelect = 0;
	do
	{
		PrintMenu();
		scanf_s(" %d", &userSelect);
		getchar();
		actionSelect(userSelect);
	}
	while (userSelect != 0);
	PrintFooter();
	return 0;
}

/**
 * \brief Перевод из десятичной системы в двоичную
 * \param num число в десятичной системе счисления
 * \return число в двоичной системе счисления
 */
int convDecToBin(int num)
{
	if (num <= 1)
		return num;
	int retMe = convDecToBin(num / 2);
	return retMe * 10 + num % 2;
}

void task1_convert()
{
	printf("1. Реализовать функцию перевода из десятичной системы в двоичную, используя рекурсию.\n");
	printf("Введите какое-нибудь число:> ");
	int num;
	scanf_s(" %d", &num);
	getchar();
	int numBin = convDecToBin(num);
	printf("Это же число в двоичной системе счисления: %d\n", numBin);
	getchar();
}


int myPow(int num, int pw)
{
	int i = 2;
	int rt = num;
	while (i <= pw)
	{
		rt *= num;
		i++;
	}
	return rt;
}

int myRecPow(int num, int pw)
{
	
}

void task2_pow()
{
	printf("2. Реализовать функцию возведения числа a в степень b:\na. без рекурсии;\nb. рекурсивно;\nc. *рекурсивно, используя свойство четности степени.\n");
	printf("Введите какое-нибудь число:> ");
	int num;
	scanf_s(" %d", &num);
	getchar();
	printf("В какую степень его взвести?:> ");
	int pw;
	scanf_s(" %d", &pw);
	getchar();
	printf("Значение возведенное в степень без рекурсии: %d\n", myPow(num, pw));
	

	
	getchar();
}

void task3_calculator()
{
	printf("3.* Исполнитель Калькулятор преобразует целое число, записанное на экране. У исполнителя две команды, каждой команде присвоен номер:\nПрибавь 1\nУмножь на 2\nПервая команда увеличивает число на экране на 1, вторая увеличивает это число в 2 раза. Сколько существует программ, которые число 3 преобразуют в число 20?\nа) с использованием массива;\nб) с использованием рекурсии.");

	getchar();
}



