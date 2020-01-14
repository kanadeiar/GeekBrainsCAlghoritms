#include <stdio.h>
#include <windows.h>

void Task1();
void Task2();
void Task3();
void Task4();
void Task5();
void Task6();
void Task7();
void Task8();
void Task9();
void Task10();
void Task11();
void Task12();
void Task13();
void Task13();
void PrintMenu();
void PrintHeader();

/*
 * Курс "Алгоритмы и структуры данных. Базовый курс."
 * Задачи с 1 по 14.
 * Рассахатский
 */

int main(int argc, char * args[])
{
	SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
	PrintHeader();
	int select = 0;
	do
	{
		PrintMenu();
		scanf(" %d", &select);
		getchar();
		switch (select)
		{
		case 1: Task1();
			break;
		case 2: Task2();
			break;
		case 0: printf("\nПока.\n\n");
			break;
		default:
			printf("Неверный выбор.\a\n");
		}
	}
	while (select != 0);
	printf("Для выхода из программы нажмите кнопку ...");
	getchar();
	return 0;
}

void Task1()
{
	printf("1. Ввести вес и рост человека. Рассчитать и вывести индекс массы тела по формуле I=m/(h*h); где m-масса тела в килограммах, h - рост в метрах.\n");
	printf("Введите массу тела человека в килограммах (double):> ");
	double m;
	scanf(" %lf", &m);
	printf("Введите рост человека в метрах(double):> ");
	double h;
	scanf(" %lf", &h);
	double i = m / (h * h);
	printf("Индекс массы тела равен: %.2lf\n", i);
	getchar();
}

void Task2()
{
	printf("2. Найти максимальное из четырех чисел. Массивы не использовать.\n");
	printf("Введите четыре целых числа через пробел(int):> ");
	int a, b, c, d;
	scanf(" %d %d %d %d", &a, &b, &c, &d);
	int imax;
	if (a > b && a > c && a > d)
		imax = a;
	else if (b > c && b > d)
		imax = b;
	else if (c > d)
		imax = c;
	else
		imax = d;
	printf("Максимальное из четырех чисел: %d\n\n", imax);
	getchar();
}

void Task3()
{
	printf("3. Написать программу обмена значениями двух целочисленных переменных:\na. с использованием третьей переменной;\nb. *без использования третьей переменной.\n");


	getchar();
}


void PrintMenu()
{
	printf("Введите цифру дальнейшего действия (int):\n");
	printf("1 - Задача №1\n");
	printf("2 - Задача №2\n");
	printf("0 - Выход\n");
	printf("Ваш выбор:> ");
}

void PrintHeader()
{
	printf("**************************************************************************************\n");
	printf("*                    Алгоритмы и структуры данных. Базовый курс.                     *\n");
	printf("*                              Урок 1. Простые алгоритмы                             *\n");
	printf("**************************************************************************************\n\n");
}
