#include <windows.h>
#include <stdio.h>

#include "TaskLesson4.h"

/*
 * ���� "��������� � ��������� ������. ������� ����."
 * ������
 * ������������
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
	printf("1. ���������� ��������� � �������������. ����������� ������ ������� � ������������ � ���������� ���������� ���������.\n��������, �����:\n3 3\n1 1 1\n0 1 0\n0 1 0\n");
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

#define MSIZE 16
void lcs(const char * str1, const char * str2, int arr_index[MSIZE][MSIZE], char arr_types[MSIZE][MSIZE], int m, int n);
void print_lcs(const char * str1, char arr_types[MSIZE][MSIZE], int n, int m);
void task2_lcs()
{
	printf("\n**************************************************************************************\n");
	printf("2. ������ ������ � ���������� ����� ������������ ����� ������������������ � ������� �������.\n");
	/////////////////////////////////////////////////////////////
	printf("������� ������ ������:");
	char str1[MSIZE];
	scanf(" %s", &str1);
	getchar();
	printf("������� ������ ������:");
	char str2[MSIZE];
	scanf(" %s", &str2);
	//getchar();
	//char str1[MSIZE] = "geekbrains";
	//char str2[MSIZE] = "geekminds";
	int arr_index[MSIZE][MSIZE];
	char arr_types[MSIZE][MSIZE];
	int n = strlen(str1);
	int m = strlen(str2);
	lcs(str1, str2, arr_index, arr_types, n, m);
	
	puts("���������� ����� ������������������:");
	print_lcs(str1, arr_types, n, m);
	puts("\n�������:");
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <=m; j++)
			printf("%2d ", arr_index[i][j]);
		printf("\n");
	}
	
	////////////////////////////////////////////////////////////
	getchar();
}
/**
 * \brief ������� ���������� ��������������������� � ����������������������
 * \param str1 ������ ������������������������
 * \param str2 ������ ������������������������
 * \param arr_index ������ � ��������
 * \param arr_types ������ � ������
 * \param m ����� ������
 * \param n ����� ������
 */
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
/**
 * \brief ����� �� ����� ���������� ���������� ������������������������
 * \param str1 ������ ���������������������
 * \param arr_types ������ �����
 * \param n ������
 * \param m ������
 */
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

#define MOVES_SIZE 8
//���� ����
int possible_moves[MOVES_SIZE][2] = {
	{-2, -1}, {-1, -2}, {1, -2}, {2, -1},
	{2, 1}, {1, 2}, {-1, 2}, {-2, 1},
};
#define BOARD_SIZE 5
const int moves_max = BOARD_SIZE * BOARD_SIZE - 1;
//����������� ���������� ����
int move_possible(int x, int y, int board[BOARD_SIZE][BOARD_SIZE])
{
	return x >= 0 && y >=0 && x < BOARD_SIZE && y < BOARD_SIZE && board[x][y] == 0;
}
/**
 * \brief ����� ����� ���� �� ����
 * \param curr_x ��������� �������
 * \param curr_y ��������� �������
 * \param move_num ������� ����� - ��� ����
 * \param board ����� ��� ����
 * \param max_moves ������������ ����� ����� ����
 * \return 
 */
int find_next(int curr_x, int curr_y, int move_num, int board[BOARD_SIZE][BOARD_SIZE], int max_moves)
{
	board[curr_x][curr_y] = move_num;
	if (move_num > max_moves)
		return 1;
	for (int i = 0; i < MOVES_SIZE; i++)
	{ //����� �����, ��������� ������ � ���������� ����������� �����
		int next_x = curr_x + possible_moves[i][0];
		int next_y = curr_y + possible_moves[i][1];
		if (move_possible(next_x, next_y, board) && find_next(next_x, next_y, move_num + 1, board, max_moves))
			return 1;
	}
	board[curr_x][curr_y] = 0; //�� ������� ����� ������ ����� ��� ������
	return 0;
}

void task3_horse()
{
	printf("\n**************************************************************************************\n");
	printf("3. ��������� ������ ����� ��������� ����� �������� NxM, ������ ����� ��� ���� ����� �� ������ ����. ����� �������� ������� ����� ��, ��� � ������ � 8 ������. ������� ������ � �������� ��������� ����.\n");
	/////////////////////////////////////////////////////////////
	int start_x = 2, start_y = 2;
	int board[BOARD_SIZE][BOARD_SIZE] = {0};
	if (find_next(start_x, start_y, 1, board, moves_max))
	{
		puts("��������� �������:");
		for (int i=0; i<BOARD_SIZE; i++)
		{
			for (int j=0; j<BOARD_SIZE; j++)
				printf("%2d ", board[i][j]);
			printf("\n");
		}
	}
	else
		puts("������� ���!");
	////////////////////////////////////////////////////////////
	getchar();
}
