#pragma once

void Merge(int arr[], int first, int m, int last)
{
	int * tarr = (int *)malloc(sizeof(int) * (last-first+1));

	
	free(tarr);
}

void MergeSort(int arr[], int first, int last)
{
	if (first >= last) 
		return;
	int m = (first + last) / 2;
	MergeSort(arr, first, m);
	MergeSort(arr, m+1, last);
	Merge(arr, first, m, last);
}