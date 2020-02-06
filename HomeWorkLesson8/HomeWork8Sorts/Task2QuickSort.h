#pragma once
#include <stdlib.h>
#define SIZE_ARR_Q 30

/**
 * \brief Случайное число
 * \param from От
 * \param to До
 * \return Случайное число
 */
int iRand(int from, int to)
{
	return from + rand() % (to - from);
}
/**
 * \brief Быстрая сортировка
 * \param arr Сортируемый массив
 * \param first Первый элемент
 * \param last Последний элемент
 */
void QuickSort(int arr[], int first, int last)
{
	int f = first, l = last;
	int m = arr[iRand(f, l)];
	while (f < l)
	{
		while (arr[f] < m) f++;
		while (arr[l] > m) l--;
		if (f < l)
		{
			int t = arr[f];
			arr[f] = arr[l];
			arr[l] = t;
		}
		if (f <= l)
		{
			f++;
			l--;
		}
	}
	if (first < l) QuickSort( arr, first, l );
	if (f < last) QuickSort( arr, f , last );
}
