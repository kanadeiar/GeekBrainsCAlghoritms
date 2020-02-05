#pragma once
#include <stdio.h>

#define N2 5

/**
 * \brief ����
 */
int Graph2[N][N] =
{
{0, 1, 0, 0, 1},
{1, 0, 1, 1, 0},
{0, 1, 0, 0, 1},
{0, 1, 0, 0, 1},
{1, 0, 1, 1, 0},
};
/**
 * \brief ����� � ������
 * \param visited ���������� ����
 * \param unit ����� �������
 */
void BFS(int *visited, int unit)
{
	int queue[N2] = {0};
	int count = 0;
	int head = 0;
	queue[count++]=unit;
	visited[unit]=1;
	while (head < count)
	{
		unit = queue[head++];
		printf("%d ", unit+1);
		for (int i=0; i<N2; i++)
			if (Graph2[unit][i] && !visited[i])
			{
				queue[count++] = i;
				visited[i] = 1;
			}
	}
}
/**
 * \brief ������ ������ � ������
 */
void RunBFS()
{
	puts("������� ��������� �����:");
	for (int i=0; i<N2; i++)
	{
		for (int j=0; j<N2; j++)
			printf("%d ", Graph[i][j]);
		printf("\n");
	}
	puts("������� ����� ��������� �������:");
	int start;
	scanf_s(" %d", &start);
	getchar();
	int Visited2[N2] = {0};
	puts("������� ������:");
	BFS(Visited2, start-1);
}

