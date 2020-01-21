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

/**
 * \brief возведение в степень числа
 * \param num число
 * \param pw степень
 * \return результат
 */
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

/**
 * \brief Рекурсивное возведение в степень
 * \param num число
 * \param pw степень
 * \return результат
 */
int myRecPow(int num, int pw)
{
	if (pw == 0)
		return 1;
	return myRecPow(num, pw - 1) * num;
}

/**
 * \brief Рекурсивное возведение в степень с использованием свойства четности степени
 * \param num число
 * \param pw степень
 * \return результат
 */
int myQuiRecPow(int num, int pw)
{
	if (pw == 0)
		return 1;
	if (pw % 2)
		return myQuiRecPow(num, pw - 1) * num;
	return myQuiRecPow(num * num, pw / 2); 
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
	int res =  myPow(num, pw);
	printf("Значение возведенное в степень без рекурсии: %d\n", res);
	res = myRecPow(num, pw);
	printf("Значение возведенное в степень с помощью рекурсии: %d\n", res);
	res = myQuiRecPow(num, pw);
	printf("Значение возведенное в степень с помощью рекурсии с четностью степени: %d\n", res);
	getchar();
}

/**
 * \brief исполнение команд по изменению числа
 * \param num число которое изменять
 * \param comm команды 1: "+1" 2: "*2"
 * \return измененное число
 */
int getNumAct(int num, int comm[20])
{
	int i = 0;
	while (i < 20 && comm[i] != 0)
	{
		if (comm[i] == 1)
			num++;
		else if (comm[i] == 2)
			num *= 2;
		i++;
	}
	return num;
}

/**
 * \brief печать в консоли всего массива команд
 * \param comm 
 */
void Print(int comm[20])
{
	for (int i = 0; i < 20; i++)
		if (comm[i] != 0)
			printf("%d ", comm[i]);
	printf("\n");
}

/**
 * \brief изменение списка команд на основе предищущего, генерация следующей последовательности
 * \param comm изменяемый список команд
 * \param n диапазон изменений команд
 * \param count длинна списка команд
 * \return удачное изменение команд
 */
int Gen(int comm[20], int n, int count)
{
	int i = 0;
	while (comm[i] == n && i < count)
	{
		i++;
	}
	if (i >= count) return 0;
	if (comm[i] >= n)
		i++;
	comm[i]++;
	if (i == 0)
		return 1;
	for (int j = 0; j < i; j++)
		comm[j] = 1;
	return 1;
}

/**
 * \brief Рекурсивный подсчет количества путей достижения от одного числа до второго используя две команды - плюс один и умножить на два
 * \param from от
 * \param to до
 * \param comm передача уже пройденных команд, по умолчанию - ноль
 * \return 
 */
int countRecursive(int from, int to, long long comm)
{
	if (from == to)
	{
		printf("%lld\n", comm);
		return 1;
	}
	if (from > to)
		return 0;
	int count = 0;
	long long cm = comm * 10 + 1;
	count += countRecursive(from + 1, to, cm);
	cm = comm * 10 + 2;
	count += countRecursive(from * 2, to, cm);
	return count;
}

void task3_calculator()
{
	printf("3.* Исполнитель Калькулятор преобразует целое число, записанное на экране. У исполнителя две команды, каждой команде присвоен номер:\n1 - Прибавь 1\n2 - Умножь на 2\nПервая команда увеличивает число на экране на 1, вторая увеличивает это число в 2 раза. Сколько существует программ, которые число 3 преобразуют в число 20?\nа) с использованием массива;\nб) с использованием рекурсии.\n");
	int from = 3;
	int to = 20;
	int comm[20] = {0};
	int count = 0;
	while (Gen(comm, 2, 20))
	{
		int num = getNumAct(from, comm);
		if (num == 20)
		{
			count++;
			Print(comm);
		}
	}
	printf("Всего программ перевода числа 3 в 20 без использования рекурсии: %d\n", count);

	int cnt = countRecursive(from, to, 0);
	printf("Всего программ перевода числа 3 в 20 с помощью рекурсии: %d", cnt);
	getchar();
}



