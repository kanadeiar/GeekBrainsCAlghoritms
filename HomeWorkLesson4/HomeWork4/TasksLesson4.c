#include <windows.h>
#include <stdio.h>

#include "TaskLesson4.h"

/*
 * Курс "Алгоритмы и структуры данных. Базовый курс."
 * Задачи
 * Рассахатский
 */
int main(int argc, char * args[])
{
    Ru();
	PrintHeader();
	//////////////////////////////////////////////////
	int userSelect = 0;
	do
	{
		PrintMenu();
		scanf_s(" %d", &userSelect);
		getchar();
		actionSelect(userSelect);
	}
	while (userSelect != 0);
    //////////////////////////////////////////////////
	PrintFooter();
	return 0;
}

#define N 4
#define M 4
void task1_counter()
{
	printf("\n**************************************************************************************\n");
	printf("1. Количество маршрутов с препятствиями. Реализовать чтение массива с препятствием и нахождение количество маршрутов.\nНапример, карта:\n3 3\n1 1 1\n0 1 0\n0 1 0\n");
	/////////////////////////////////////////////////////////////
	int map[N][M] = 
	{{1, 1, 1, 1},
	 {0, 1, 0, 1},
	 {0, 1, 1, 1},
	 {1, 1, 0, 1}};
	int arr[N][M] = {0};
	arr[0][0] = 1;
	for (int j = 1; j < M; j++)
		if (map[0][j] == 1)
			arr[0][j] = arr[0][j-1];
	for (int i = 1; i < N; i++)
		if (map[i][0] == 1)
			arr[i][0] = arr[i-1][0];
	for (int i = 1; i < N; i++)
	{
		for (int j = 1; j < M; j++)
			if (map[i][j] == 1)
				arr[i][j] = arr[i][j-1] + arr[i-1][j];
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
			printf("%4d", arr[i][j]);
		printf("\n");
	}
	////////////////////////////////////////////////////////////
	getchar();
}

#define MSIZE 10

void lcs(const char * str1, const char * str2, int arr_index[MSIZE][MSIZE], char arr_types[MSIZE][MSIZE], int m, int n)
{
	if (n == 0 || m == 0)
		return;
	for (int i = 0; i<=m; i++)
		arr_index[i][0] = 0;
	for (int j = 0; j<=n; j++)
		arr_index[0][j] = 0;

	for (int i = 1; i<=m; i++)
		for (int j=1; j<=n; j++)
		{
			if (str1[i-1] == str2[j-1])
			{
				arr_index[i][j] = arr_index[i-1][j-1] + 1;
				arr_types[i][j] = 'c';
			}
			else if (arr_index[i-1][j] >= arr_index[i][j-1])
			{
				arr_index[i][j] = arr_index[i-1][j];
				arr_types[i][j] = 'u';
			}
			else
			{
				arr_index[i][j] = arr_index[i][j-1];
				arr_types[i][j] = 'l';
			}
		}
}

void print_lcs(const char * str1, char arr_types[MSIZE][MSIZE], int n, int m)
{
	if (n == 0 || m == 0)
		return;
	if (arr_types[n][m] == 'c')
	{
		print_lcs(str1, arr_types, n - 1, m - 1);
		printf("%c", str1[n-1]);
	}
	else if (arr_types[n][m] == 'u')
		print_lcs(str1, arr_types, n - 1, m);
	else
		print_lcs(str1, arr_types, n, m - 1);
}

void task2_lcs()
{
	printf("\n**************************************************************************************\n");
	printf("2. Решить задачу о нахождении длины максимальной общей последовательности с помощью матрицы.\n");
	/////////////////////////////////////////////////////////////
	printf("Введите первую строку:");
	char str1[MSIZE];
	scanf(" %s", &str1);
	getchar();
	printf("Введите вторую строку:");
	char str2[MSIZE];
	scanf(" %s", &str2);
	getchar();
	//char x[MSIZE] = "geekbra";
	//char y[MSIZE] = "geekfua";
	int arr_index[MSIZE][MSIZE];
	char arr_types[MSIZE][MSIZE];
	int n = strlen(str1);
	int m = strlen(str2);
	lcs(str1, str2, arr_index, arr_types, n, m);
	
	puts("Наибольшая общая последовательность:");
	print_lcs(str1, arr_types, n, m);
	
	////////////////////////////////////////////////////////////
	getchar();
}

void task3_horse()
{
	printf("\n**************************************************************************************\n");
	printf("3. Требуется обойти конем шахматную доску размером NxM, пройдя через все поля доски по одному разу. Здесь алгоритм решения такой же, как в задаче о 8 ферзях. Разница только в проверке положения коня.\n");
	/////////////////////////////////////////////////////////////

	////////////////////////////////////////////////////////////
	getchar();
}
