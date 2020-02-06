#pragma once
#define SIZE_MERGE 30

/**
 * \brief �������
 * \param arr ����������� ������
 * \param first ������ �������
 * \param m ������� �������
 * \param last ��������� �������
 */
void Merge(int arr[], int first, int m, int last)
{
	int * tarr = (int *)malloc(sizeof(int) * (last-first+1));
	int f = first;
	int l = m + 1;
	int it = 0;
	while (f <= m && l <= last)
		if (arr[f] < arr[l])
			tarr[it++] = arr[f++];
		else
			tarr[it++] = arr[l++];
	while (f <= m)
		tarr[it++] = arr[f++];
	while (l <= last)
		tarr[it++] = arr[l++];
	for (int i = first; i <= last; i++)
		arr[i] = tarr[i-first];
	free(tarr);
}

/**
 * \brief ���������� ��������
 * \param arr ����������� ������
 * \param first ������ �������
 * \param last ��������� �������
 */
void MergeSort(int arr[], int first, int last)
{
	if (first >= last)
		return;
	int m = first + (last - first) / 2;
	MergeSort(arr, first, m);
	MergeSort(arr, m+1, last);
	Merge(arr, first, m, last);
}