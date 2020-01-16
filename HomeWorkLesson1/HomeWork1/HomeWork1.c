#include <stdio.h>
#include <windows.h>
#include <math.h>
#include <time.h>

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
	printf("7. С клавиатуры вводятся числовые координаты двух полей шахматной доск и (x1, y1, x2, y2).\nТребуется определить, относятся ли к поля к одному цвету или нет.\n");
	printf("Введите координаты первого поля шахматной доски (x1, y1):> ");
	int x1, y1;
	scanf_s(" %d %d", &x1, &y1);
	getchar();
	printf("Введите координаты первого поля шахматной доски (x2, y2):> ");
	int x2, y2;
	scanf_s(" %d %d", &x2, &y2);
	getchar();
	int isBlack1 = (x1 % 2 != 0 && y1 % 2 !=0 || x1 % 2 == 0 && y1 % 2 ==0);
	int isBlack2 = (x1 % 2 != 0 && y1 % 2 !=0 || x1 % 2 == 0 && y1 % 2 ==0);
	if (isBlack1 == isBlack2)
		printf("Эти Поля относятся к одному цвету.\n");
	else
		printf("Эти поля относятся к разным цветам.\n");	
	getchar();
}

void Task8()
{
	printf("8. Ввести a и b и вывести квадраты и кубы чисел от a до b.\n");
	printf("Введите целое число a (меньшее):> ");
	int a;
	scanf_s(" %d", &a);
	getchar();
	printf("Введите целое число b (большее):> ");
	int b;
	scanf_s(" %d", &b);
	getchar();
	for (int i = a; i <= b; i++)
		printf("Квадраты: %d Кубы: %d\n", i*i, i*i*i );
	getchar();
}

void Task9()
{
	printf("9. Даны целые положительные числа N и K. Используя только операции сложения и вычитания, найти частное от деления нацело N на K, а также остаток от этого деления.\n");
	printf("Введите число N:> ");
	int n;
	scanf_s(" %d", &n);
	getchar();
	printf("Введите число K:> ");
	int k;
	scanf_s(" %d", &k);
	getchar();
	int quotient = 0;
	while (n >= k)
	{
		quotient++;
		n -= k;
	}
	int remainer = n;
	printf("Частное от деления нацело: %d\nОстаток от деления: %d\n", quotient, remainer);
	getchar();
}

void Task10()
{
	printf("10. Дано целое число N (> 0). С помощью операций деления на целое и взятия остатка от деления определить, имеются ли в записи числа N нечетные цифры. Если имеются, то вывести True, если нет — вывести False.\n");
	printf("Введите целое число N:> ");
	int num;
	scanf_s(" %d", &num);
	getchar();
	int contain = 0;
	while (num > 0)
	{
		if (num % 2 != 0)
		{
			contain = 1;
			break;
		}
		num /= 10;
	}
	if (contain)
		printf("Это число содержит в своем составе нечетные цифры.\n");
	else
		printf("В этом числе нет нечетных цифр.\n");
	getchar();
}

void Task11()
{
	printf("11. С клавиатуры вводятся числа, пока не будет введен 0. Подсчитать среднее арифметическое всех положительных четных чисел, оканчивающихся на 8.\n");
	printf("Вводите числа:\n");
	int summ = 0;
	int count = 0;
	int num;
	while (1)
	{
		printf("> ");
		scanf_s(" %d", &num);
		getchar();
		if (num == 0)
			break;
		if (num > 0 && num % 10 == 8)
		{
			count++;
			summ += num;
		}
	}
	double average = (double)summ / count;
	printf("Среднее значение равно: %.2lf\n", average);
	getchar();
}

int getMaxFromThree(int a, int b, int c)
{
	if (a > b && a > c)
		return a;
	if (b > c)
		return b;
	return c;
}

void Task12()
{
	printf("12. Написать функцию нахождения максимального из трех чисел.\n");
	printf("Введите три числа:\n");
	int a, b, c;
	scanf_s(" %d %d %d", &a, &b, &c);
	getchar();
	int max = getMaxFromThree(a, b, c);
	printf("Максимальное число из этих трех: %d\n", max);
	getchar();
}

int getRand()
{
	int m = 100;
	int b = 3;
	int a = 2;
	int x = 1;
	x = (a * x + b) % m;
	return x;
}

void Task13()
{
	printf("13. * Написать функцию, генерирующую случайное число от 1 до 100.\n- с использованием стандартной функции rand()\n- без использования стандартной функции rand()\n");
	printf("Генерация случайного числа с помощью стандартной функции:\n");
	srand(time(NULL));
	int n1 = rand() % 100 + 1;
	printf("Число: %d\n", n1);
	printf("Генерация случайного числа с помощью самописной функции:\n");
	int n2 = getRand();
	printf("Число: %d\n", n2);
	getchar();
}

void Task14()
{
	printf("14. *Автоморфные числа. Натуральное число называется автоморфным, если оно равно последним цифрам своего квадрата. Например, 25^2=625. Напишите программу, которая вводит натуральное число N и выводит на экран все автоморфные числа, не превосходящие N.\n");
	printf("Введите число n:> ");
	int n = 0;
	scanf_s(" %d", &n);
	getchar();
	printf("Автоморфные числа:");
	int quadro;
	int num;
	for (int i = 0; i <= n; i++)
	{
		num = i;
		quadro = i * i;
		while (num % 10 == quadro % 10 && num > 0)
		{
			num /= 10;
			quadro /= 10;
		}
		if (num == 0)
			printf("%d\n", i);
	}	
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
