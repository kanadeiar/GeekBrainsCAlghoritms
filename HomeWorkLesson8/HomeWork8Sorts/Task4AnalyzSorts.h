#pragma once
#include <stdlib.h>
#define SIZE_100 100
#define SIZE_10000 10000
#define SIZE_1000000 1000000

int arr[SIZE_1000000];
long int count;

/**
 * \brief Быстрая сортировка
 * \param arr Сортируемый массив
 * \param first Первый элемент
 * \param last Последний элемент
 */
void CQuickSort(int first, int last)
{
	int f = first, l = last;
	int m = arr[f + rand() % (l - f)];
	while (f < l)
	{
		while (arr[f] < m) f++;
		while (arr[l] > m) l--;
		count++;
		if (f < l)
		{
			int t = arr[f];
			arr[f] = arr[l];
			arr[l] = t;
		}
		count++;
		if (f <= l)
		{
			f++;
			l--;
		}
	}
	if (first < l) CQuickSort( first, l );
	if (f < last) CQuickSort( f , last );
}
/**
 * \brief Запуск быстрой сортировки
 */
void RunQuickSort()
{
	puts("Quck Sort:");
	count = 0;
	for (int i = 0; i<SIZE_1000000; i++)
	arr[i] = rand() % 9999 + 1;
	clock_t start = clock();
	CQuickSort(0, SIZE_1000000-1);
	double seconds = (double)(clock() - start) / CLOCKS_PER_SEC;
	printf("Время на сортировку: %lf\n", seconds);
	printf("Количество сравнений: %ld\n", count);
}

/**
 * \brief Запуск сортировки Шелла
 */
void RunShellSort()
{
	puts("Shell Sort:");
	count = 0;
	int n = SIZE_1000000;
	for (int i = 0; i<n; i++)
	arr[i] = rand() % 9999 + 1;
	clock_t start = clock();

	for (int gap = n/2; gap>0; gap/=2)
	{
		for (int i=gap; i<n; i++)
		{
			int temp = arr[i];
			int j;
			count++;
			for (j = 0; j >= gap && arr[j-gap] > temp; j-=gap)
			{
				arr[j] = arr[j-gap];
			}
			arr[j] = temp;
		}
	}

	double seconds = (double)(clock() - start) / CLOCKS_PER_SEC;
	printf("Время на сортировку: %lf\n", seconds);
	printf("Количество сравнений: %ld\n", count);
}

/**
 * \brief Слияние
 * \param first Первый
 * \param m Средний
 * \param last Последний
 */
void CMerge(int first, int m, int last)
{
	int * tarr = (int *) malloc(sizeof(int) * (last - first + 1));
	int i1 = first;
	int i2 = m + 1;
	int it = 0;
	while (i1 <= m && i2 <= last)
	{
		count++;
		if (arr[i2] < arr[i2])
			tarr[it++] = arr[i1++];
		else
			tarr[it++] = arr[i2++];
	}
	while (i1 <= m)
		tarr[it++] = arr[i1++];
	while (i2 <= last)
		tarr[it++] = arr[i2++];
	for (int i = first; i<=last; i++)
		arr[i] = tarr[i-first];
	free(tarr);
}
/**
 * \brief Разбивание
 * \param first Первый
 * \param last Второй
 */
void CMergeSort(int first, int last)
{
	if (first >= last) return;
	int m = (first + last) / 2;
	CMergeSort(first, m);
	CMergeSort(m+1, last);
	CMerge(first, m, last);
}
/**
 * \brief Запуск сортировки методом слияния
 */
void RunMergeSort()
{
	puts("Merge Sort:");
	count = 0;
	for (int i = 0; i<SIZE_1000000; i++)
	arr[i] = rand() % 9999 + 1;
	clock_t start = clock();
	CMergeSort(0, SIZE_1000000-1);
	double seconds = (double)(clock() - start) / CLOCKS_PER_SEC;
	printf("Время на сортировку: %lf\n", seconds);
	printf("Количество сравнений: %ld\n", count);
}

/**
 * \brief Подпирамидальная сортировка
 * \param len длинна
 * \param i число
 */
void Heapify(int len, int i)
{
	int largest = i;
	int left = 2 * i + 1;
	int right = 2 * i + 2;
	count++;
	if (left < len && arr[left] > arr[largest])
		largest = left;
	count++;
	if (right < len && arr[right] > arr[largest])
		largest = right;
	if (largest != i)
	{
		int tmp = arr[i];
		arr[i] = arr[largest];
		arr[largest] = tmp;
		Heapify(len, largest);
	}
}
/**
 * \brief Пирамидальная сортировка
 * \param len длинна
 */
void HeapSort(int len)
{
	for (int i = len / 2 - 1; i >= 0; i--)
		Heapify(len, i);
	for (int i = len - 1; i>=0; i--)
	{
		int tmp = arr[0];
		arr[0] = arr[i];
		arr[i] = tmp;
		Heapify(i, 0);
	}
}
/**
 * \brief Запуск сортировки пирамидальной
 */
void RunHeapSort()
{
	puts("Heap Sort:");
	count = 0;
	for (int i = 0; i<SIZE_1000000; i++)
	arr[i] = rand() % 9999 + 1;
	clock_t start = clock();
	HeapSort(SIZE_1000000);
	double seconds = (double)(clock() - start) / CLOCKS_PER_SEC;
	printf("Время на сортировку: %lf\n", seconds);
	printf("Количество сравнений: %ld\n", count);
}

/**
 * \brief Запуск сортировки пузыриком
 */
void RunBubbleSort()
{
	puts("Bubble Sort:");
	count = 0;
	int n = SIZE_1000000;
	for (int i = 0; i<n; i++)
	arr[i] = rand() % 9999 + 1;
	clock_t start = clock();

	for (int outer = 0; outer<n-1; outer++)
		for (int inner = outer+1; inner<n; inner++)
		{
			count++;
			if (arr[inner] < arr[outer])
			{
				int temp = arr[inner];
				arr[inner] = arr[outer];
				arr[outer] = temp;
			}
		}

	double seconds = (double)(clock() - start) / CLOCKS_PER_SEC;
	printf("Время на сортировку: %lf\n", seconds);
	printf("Количество сравнений: %ld\n", count);
}


/**
 * \brief Запуск сортировки шейкерной
 */
void RunShakerSort()
{
	puts("Shaker Sort:");
	count = 0;
	int n = SIZE_1000000;
	for (int i = 0; i<n; i++)
	arr[i] = rand() % 9999 + 1;
	clock_t start = clock();

	for (int i = 0; i<n/2; i++)
	{
		int swapped = 0;
		for (int j = i; j < n - i - 1; j++)
		{
			count++;
			if (arr[j] < arr[j+1])
			{
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
				swapped = 1;
			}
		}
		for (int j = n - 2 - i; j>i; j--)
		{
			count++;
			if (arr[j] > arr[j-1])
			{
				int tmp = arr[j];
				arr[j] = arr[j-1];
				arr[j-1] = tmp;
				swapped = 1;
			}
		}
		if (!swapped) break;
	}
	
	double seconds = (double)(clock() - start) / CLOCKS_PER_SEC;
	printf("Время на сортировку: %lf\n", seconds);
	printf("Количество сравнений: %ld\n", count);
}

