# GeekBrainsCAlghoritms

Курс GeekBrains "Алгоритмы и структуры данных на С" 

## Урок 1. Простые алгоритмы.

1. Ввести вес и рост человека. Рассчитать и вывести индекс массы тела по формуле I=m/(h*h); где m-масса тела в килограммах, h - рост в метрах.
2. Найти максимальное из четырех чисел. Массивы не использовать.
3. Написать программу обмена значениями двух целочисленных переменных:
a. с использованием третьей переменной;
b. *без использования третьей переменной.
4. Написать программу нахождения корней заданного квадратного уравнения.
5. С клавиатуры вводится номер месяца. Требуется определить, к какому времени года он относится.
6. Ввести возраст человека (от 1 до 150 лет) и вывести его вместе с последующим словом «год», «года» или «лет».
7. С клавиатуры вводятся числовые координаты двух полей шахматной доски (x1,y1,x2,y2). Требуется определить, относятся поля к одному цвету или нет.
8. Ввести a и b и вывести квадраты и кубы чисел от a до b.
9. Даны целые положительные числа N и K. Используя только операции сложения и вычитания, найти частное от деления нацело N на K, а также остаток от этого деления.
10. Дано целое число N (> 0). С помощью операций деления нацело и взятия остатка от деления определить, имеются ли в записи числа N нечетные цифры. Если имеются, то вывести True, если нет — вывести False.
11. С клавиатуры вводятся числа, пока не будет введен 0. Подсчитать среднее арифметическое всех положительных четных чисел, оканчивающихся на 8.
12. Написать функцию нахождения максимального из трех чисел.
13. * Написать функцию, генерирующую случайное число от 1 до 100.
а) с использованием стандартной функции rand()
б) без использования стандартной функции rand()
14. *Автоморфные числа. Натуральное число называется автоморфным, если оно равно последним цифрам своего квадрата. Например, 252 = 625. Напишите программу, которая вводит натуральное число N и выводит на экран все автоморфные числа, не превосходящие N.

## Урок 2. Асимптотическая сложность алгоритма. Рекурсия

1. Реализовать функцию перевода из десятичной системы в двоичную, используя рекурсию.
2. Реализовать функцию возведения числа a в степень b:

a. без рекурсии;

b. рекурсивно;

c. *рекурсивно, используя свойство четности степени.

3. *Исполнитель Калькулятор преобразует целое число, записанное на экране. У исполнителя две команды, каждой команде присвоен номер:

Прибавь 1

Умножь на 2

Первая команда увеличивает число на экране на 1, вторая увеличивает это число в 2 раза. Сколько существует программ, которые число 3 преобразуют в число 20?

а) с использованием массива;

б) с использованием рекурсии.

## Урок 3. Поиск в массиве. Простые сортировки

1. Попробовать оптимизировать пузырьковую сортировку. Сравнить количество операций сравнения оптимизированной и не оптимизированной программы. Написать функции сортировки, которые возвращают количество операций.
2. *Реализовать шейкерную сортировку.
3. Реализовать бинарный алгоритм поиска в виде функции, которой передается отсортированный массив. Функция возвращает индекс найденного элемента или -1, если элемент не найден.
4. *Подсчитать количество операций для каждой из сортировок и сравнить его с асимптотической сложностью алгоритма.

## Урок 4. Динамическое программирование. Поиск возвратом

1. Количество маршрутов с препятствиями. Реализовать чтение массива с препятствием и нахождение количество маршрутов. Например, карта:

3 3

1 1 1

0 1 0

0 1 0

2. Решить задачу о нахождении длины максимальной подпоследовательности с помощью матрицы.
3. ***Требуется обойти конем шахматную доску размером NxM, пройдя через все поля доски по одному разу. Здесь алгоритм решения такой же, как в задаче о 8 ферзях. Разница только в проверке положения коня.

## Урок 5. Динамические структуры данных

1. Реализовать перевод из десятичной в двоичную систему счисления с использованием стека.
2. Написать программу, которая определяет, является ли введенная скобочная последовательность правильной. 

Примеры правильных скобочных выражений: (), ([])(), {}(), ([{}]), 

неправильных — )(, ())({), (, ])}), ([(]) 

для скобок [, (, {.

Например: (2+(2*2)) или [2/{5*(4+7)}].

3. *Создать функцию, копирующую односвязный список (то есть создающую в памяти копию односвязного списка без удаления первого списка).
4. *Реализовать алгоритм перевода из инфиксной записи арифметического выражения в постфиксную.
5. Реализовать очередь:
1. С использованием массива.
2. *С использованием односвязного списка.
6. ***Реализовать двустороннюю очередь.