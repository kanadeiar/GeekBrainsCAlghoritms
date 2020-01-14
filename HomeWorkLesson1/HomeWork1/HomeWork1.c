#include <stdio.h>
#include <windows.h>
#include <math.h>

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
void Task14();
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
		scanf_s(" %d", &select);
		getchar();
		switch (select)
		{
		case 1: Task1();
			break;
		case 2: Task2();
			break;
		case 3: Task3();
			break;
		case 4: Task4();
			break;
		case 5: Task5();
			break;
		case 6: Task6();
			break;
		case 7: Task7();
			break;
		case 8: Task8();
			break;
		case 9: Task9();
			break;
		case 10: Task10();
			break;
		case 11: Task11();
			break;
		case 12: Task12();
			break;
		case 13: Task13();
			break;
		case 14: Task14();
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
	scanf_s(" %lf", &m);
	printf("Введите рост человека в метрах(double):> ");
	double h;
	scanf_s(" %lf", &h);
	double i = m / (h * h);
	printf("Индекс массы тела равен: %.2lf\n", i);
	getchar();
}

void Task2()
{
	printf("2. Найти максимальное из четырех чисел. Массивы не использовать.\n");
	printf("Введите четыре целых числа через пробел(int):> \n");
	int a, b, c, d;
	scanf_s(" %d %d %d %d", &a, &b, &c, &d);
	getchar();
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
	printf("Введите две целочисленные переменные (int):\n");
	int a, b;
	scanf_s(" %d %d", &a, &b);
	int t = a;
	a = b;
	b = t;
	printf("Значения после обмена значениями с использованием третьей переменной: %d и %d\n", a, b);
	a ^= b;
	b ^= a;
	a ^= b;
	printf("Значения после обмена без использования третьей переменной: %d и %d\n", a, b);
	getchar();
}

void Task4()
{
	printf("4. Написать программу нахождения корней заданного квадратного уравнения.\n");
	printf("Введите целочисленный коэффициент а (int):> ");
	int a;
	scanf_s(" %d", &a);
	getchar();
	printf("Введите целочисленный коэффициент b (int):> ");
	int b;
	scanf_s(" %d", &b);
	getchar();
	printf("Введите целочисленный коэффициент c (int):> ");
	int c;
	scanf_s(" %d", &c);
	getchar();
	printf("Решение квадратного уравнения %d*x^2 + %d*x + %d = 0:\n", a, b, c);
	int d = b * b - 4 * a * c;
	printf("Дискриминант равен: %d\n", d);
	if (d > 0)
	{
		int x1 = (- b + sqrt(d)) / 2 * a;
		int x2 = (- b - sqrt(d)) / 2 * a;
		printf("Два корня: x1 = %d, x2 = %d.\n", x1, x2);
	}
	else if (d == 0)
	{
		int x = - b / 2 * a;
		printf("Один корень: x = %d.\n", x);
	}
	else
	{
		printf("Нет корней.\n");
	}
	getchar();
}

void Task5()
{
	printf("5. С клавиатуры вводится номер месяца. Требуется определить, к какому времени года он относится.\n");
	printf("Введите номер месяца:> ");
	int mounth;
	scanf_s(" %d", &mounth);
	getchar();
	if (mounth >= 3 && mounth <= 5)
		printf("Это месяц зимы.\n");
	else if (mounth >= 6 && mounth <= 8)
		printf("Это месяц лета.\n");
	else if (mounth >= 9 && mounth <= 11)
		printf("Это месяц осени.\n");
	else if (mounth == 12 || mounth == 1 || mounth == 2)
		printf("Это месяц зимы.\n");
	else
		printf("Такого месяца не существует!");
	getchar();
}

void Task6()
{
	printf("6. Ввести возраст человека (от 1 до 150 лет) и вывести ег овместе с последующим словом «год», «года» или «лет».\n");
	printf("Введите возраст человека:> ");
	int age;
	scanf_s(" %d", &age);
	getchar();
	if (age / 10 % 10 == 1)
		printf("Возраст %d лет", age);
	else if (age % 10 == 1)
		printf("Возраст %d год", age);
	else if (age % 10 == 2 || age % 10 == 3 || age % 10 == 4)
		printf("Возраст %d года", age);
	else
		printf("Возраст %d лет", age);
	getchar();
}

void Task7()
{
	printf("5. С клавиатуры вводится номер месяца. Требуется определить, к какому времени года он относится.\n");
	printf("");

	getchar();
}

void Task8()
{
	printf("5. С клавиатуры вводится номер месяца. Требуется определить, к какому времени года он относится.\n");


	getchar();
}

void Task9()
{
	printf("5. С клавиатуры вводится номер месяца. Требуется определить, к какому времени года он относится.\n");


	getchar();
}

void Task10()
{
	printf("5. С клавиатуры вводится номер месяца. Требуется определить, к какому времени года он относится.\n");


	getchar();
}

void Task11()
{
	printf("5. С клавиатуры вводится номер месяца. Требуется определить, к какому времени года он относится.\n");


	getchar();
}

void Task12()
{
	printf("5. С клавиатуры вводится номер месяца. Требуется определить, к какому времени года он относится.\n");


	getchar();
}

void Task13()
{
	printf("5. С клавиатуры вводится номер месяца. Требуется определить, к какому времени года он относится.\n");


	getchar();
}

void Task14()
{
	printf("5. С клавиатуры вводится номер месяца. Требуется определить, к какому времени года он относится.\n");


	getchar();
}

void PrintMenu()
{
	printf("\n***********************************************************************************\n");
	printf("Введите цифру дальнейшего действия (int):\n");
	for (int i = 1; i <= 14; i++)
		printf("%2d - Задача №%2d\n", i, i);
	printf(" 0 - Выход\n");
	printf("Ваш выбор:> ");
}

void PrintHeader()
{
	printf("**************************************************************************************\n");
	printf("*                    Алгоритмы и структуры данных. Базовый курс.                     *\n");
	printf("*                              Урок 1. Простые алгоритмы                             *\n");
	printf("**************************************************************************************\n\n");
}
