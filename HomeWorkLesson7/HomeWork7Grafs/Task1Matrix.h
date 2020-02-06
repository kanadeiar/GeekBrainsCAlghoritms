#pragma once
#include <stdio.h>
#include <stdlib.h>

/**
 * \brief получение матрицы из файла
 * \param mtrxsize размер
 * \return матрица
 */
int ** GetMatrixFromFile(int * mtrxsize)
{
	FILE * fptr;
	fopen_s(&fptr, "digitals.txt", "r");
	if (fptr == NULL)
	{
		puts("Ќевозможно считать файл.");
		getchar();
		exit(1);
	}
	int size;
	fscanf_s(fptr, "%d", &size);
	int **arr = (int **)malloc(sizeof(int)*size);
	if (arr)
	{
		for (int i=0; i<size; i++)
			arr[i] = (int *)malloc(sizeof(int)*size);
		char tmp[128];
		fgets(tmp, _countof(tmp), fptr);
		for (int i = 0; i<size; i++)
		{
			fgets(tmp, _countof(tmp), fptr);
			for (int j=0; j<size; j++)
			{
				arr[i][j] = atoi(&tmp);
				char * p = strchr(tmp, ' ');
				if (p != NULL)
					strcpy_s(tmp, _countof(tmp), p + 1);
			}
		}
	}
	fclose(fptr);
	*mtrxsize = size;
	return arr;
}
/**
 * \brief вывод матрицы на экран
 * \param matrix матрица
 * \param mtrxsize размер
 */
void PrintMatrtix(int ** matrix, int mtrxsize)
{
	printf("   ");
	for (int j=0; j<mtrxsize; j++)
		printf("%2c ", j + 'a');
	printf("\n");
	for (int i=0; i<mtrxsize; i++)
	{
		printf("%2c ", i + 'a');
		for (int j=0; j<mtrxsize; j++)
		{
			printf("%2d ", matrix[i][j]);
		}
		printf("\n");
	}
}

void PrintLines(int ** matrix, int mtrxsize)
{
	for (int i=0; i<mtrxsize; i++)
		for (int j=i; j<mtrxsize; j++)
			if (matrix[i][j] == 1)
				printf("%c - %c\n", i + 'a', j + 'a');
}

/**
 * \brief уничтожение матрицы
 * \param matrix матрица
 * \param mtrxsize размер
 */
void FreeMatrix(int ** matrix, int mtrxsize)
{
	for (int i=0; i<mtrxsize; i++)
		free(matrix[i]);
	free(matrix);
}
