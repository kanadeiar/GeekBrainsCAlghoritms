#pragma once
#define SIZE_ARR 30


void CountSort(int arr[SIZE_ARR])
{
	int countArr[SIZE_ARR] = {0};
	for (int i = 0; i<SIZE_ARR; i++)
		countArr[arr[i]]++;
	int i = 0; //проход по сортируемому массиву
	int k = 0;
	while (i < SIZE_ARR)
	{
		while (countArr[k] == 0)
			k++;
		arr[i] = k;
		countArr[k]--;
		i++;
	}
}

