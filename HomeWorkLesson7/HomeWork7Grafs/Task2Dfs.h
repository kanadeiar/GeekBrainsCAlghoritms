#pragma once
#include <stdio.h>

#define N 5
int Visited[N];

/**
 * \brief ����
 */
int Graph[N][N] =
{
{0, 1, 0, 0, 1},
{1, 0, 1, 1, 0},
{0, 1, 0, 0, 1},
{0, 1, 0, 0, 1},
{1, 0, 1, 1, 0},
};
/**
 * \brief ����� � �������
 * \param st �������
 */
void DFS(int st)
{
	printf("%d ", st + 1);
	Visited[st] = 1;
	for (int i = 0; i <= N; i++)
		if ( (Graph[st][i] != 0) && (!Visited[i]) )
			DFS(i);
}
/**
 * \brief ������ ������ � �������
 */
void RunDFS()
{
	puts("������� ��������� �����:");
	for (int i=0; i<N; i++)
	{
		Visited[i] = 0;
		for (int j=0; j<N; j++)
			printf("%d ", Graph[i][j]);
		printf("\n");
	}
	puts("������� ����� ��������� �������:");
	int start;
	scanf_s(" %d", &start);
	getchar();
	puts("������� ������:");
	DFS(start - 1);
}

