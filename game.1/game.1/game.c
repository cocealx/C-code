#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
#include"string.h"
#include"stdio.h"
void  init_board(char arr[ROWS][COLS], int row, int col)
{
	/*int i, j;
	for (i = 0; i < ROWS; i++)
	for (j = 0; j < COLS; j++)
	{
	    arr[i][j]='5';

	}*/

		memset(arr, ' ', ROWS*COLS*sizeof(char));
}
void display(char arr[ROWS][COLS], int row, int col)
{
	int i;
	for (i = 0; i < row; i++)
	{
		printf("------------\n");
		
			printf(" %c | %c | %c |\n", arr[i][0],arr[i][1],arr[i][2]);
	}
	printf("-----------\n");
}
void Computer(char arr[ROWS][COLS], int row, int col)
{
	while (1)
	{
		int x = rand () % 4;
		int y = rand () % 4;
		if (arr[x-1][y-1] == ' ')
		{
			arr[x-1][y-1] = 'o';
			break;
		}
			
	}
 cheekfull(arr, ROWS, COLS);
}
void player(char arr[ROWS][COLS], int row, int col)
{
	int x, y;
	printf("输入你要放棋子的坐标");
	scanf("%d%d", &x, &y);
	while (1)
	{
		if ((x<4 && x>0) && (y<4 && y>0))
		{
			if (arr[x-1][y-1] == ' ')
			{
				arr[x-1][y-1] = 'X';
				break;
			}
			else
			{
				printf("此坐标有棋子，请重新你输入》");
				scanf("%d%d", &x, &y);
			}

		}
		else
		{
			printf("输入的坐标有误，请重新输入》");
			scanf("%d%d", &x, &y);
		}
	}
	cheekfull(arr, ROWS, COLS);
}
int cheekfull(char arr[ROWS][COLS], int row, int col)
{
	int i,j;
	for (i = 0; i < row;i++)
	if ((arr[i][0] == arr[i][1]) && (arr[i][1] == arr[i][2]) && (arr[i][0] != ' '))
		return 0;
	for (i = 0; i < col; i++)
	if ((arr[0][i] == arr[1][i]) && (arr[1][i] == arr[2][i]) && (arr[0][i] != ' '))
		return 0;
	if ((((arr[0][0] == arr[1][1]) && (arr[1][1] == arr[2][2]) )||
		((arr[0][2] == arr[1][1]) && (arr[1][1] == arr[2][0])))&&arr[1][1]!=' ')
		return 0;
	
	for (i = 0; i < row;i++)
	for (j = 0; j < col; j++)
	{
		if (arr[i][j] == ' ')
			return 1;
	}
	
	return 'p';
}