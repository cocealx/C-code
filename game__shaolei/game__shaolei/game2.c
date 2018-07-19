#define _CRT_SECURE_NO_WARNINGS 1
#include"game2.h"

void set_mine(char arr[ROWS][LOCS])//布雷函数
{
	int  x, y;
	int count = COUNT;
	do
	{
		x = rand() % 14;
		y = rand() % 14;
		if (arr[x][y]!=3)
		{
			arr[x][y] = 3;
			count--;
		}
	} while (count);
}
void Init_iay(char arr1[ROWS][LOCS], char arr2[ROWS][LOCS], int row, int loc)//初始化函数
{
	memset(arr1, ' ', row*loc*sizeof(arr1[0][0]));
	memset(arr2, '*', row*loc*sizeof(arr2[0][0]));
}

void dis_play(char arr[ROWS][LOCS], int row, int loc)//打印函数
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		if (i<10)
			printf(" | %d", i + 1);
		else
			printf(" |%d", i + 1);
	}
	printf("\n");

	for (i = 0; i < row; i++)
	{
		printf("____________________________________________________________\n");
		if (i<9)
			printf("%d ", i + 1);
		else
			printf("%d", i + 1);
		for (j = 0; j < loc; j++)
		{
			if (arr[i][j] == ' ' || arr[i][j] == '*')
				printf("| %c ", arr[i][j]);
			else
				printf("| %d ", arr[i][j]);
		}
		printf("|\n");

	}
	printf("____________________________________________________________\n");

}
int playgame(char arr1[ROWS][LOCS], char arr2[ROWS][LOCS], int count,int row, int loc)
{
	int x, y, no_count = 0, i, j;
	static int flag = 0;
	flag++;
	while (1)
	{
		printf("输入你选择的坐标》");
		scanf("%d%d", &x, &y);
		if ((x > 14) || (y > 14) || (x < 1) || (y < 1))
			printf("此坐标不合法，请重新选择坐标\n");
		else
			break;
	}
	if ((arr1[x - 1][y - 1] == 3) && (flag == 1))//如果第一次玩家选中雷，则把雷移走
	{
		int temp;
		for (i = 0; i < row; i++)
		{
			for (j = 0; j < loc; j++)
			{
				if (arr1[i][j] == ' ')
				{
					temp = arr1[i][j];
					arr1[i][j] = arr1[x - 1][y - 1];
					arr1[x - 1][y - 1] = temp;
					break;
				}
			}
			break;
		}
		
	}
	if (arr1[x - 1][y - 1] == 3)
	{
		printf("踩中雷区\n\a");
		return count;
	}
	else
	{
		spread(arr1, arr2, x-1, y-1);
		for (i = 0; i < 27; i++)
		for (j = 0; j < 27; j++)
		{
			if (arr2[i][j] == '*')
				no_count++;
		}
		if (no_count == count)
			printf("扫雷成功\n");
	}
	return no_count;
}
void spread(char arr1[ROWS][LOCS], char arr2[ROWS][LOCS], int x, int y)
{
	if ((x >= 0) && (y >= 0) && (x <= 13) && (y <= 13))//判断坐标是否合法
	{
		if (check(arr1, arr2, x, y) == 0)//判断这个坐标周围是否有雷，如果没有雷就对其周围8个元素进行检查
		{
			arr2[x][y] = ' ';//如果没有雷把这个坐标内容设置为空格
			if (arr2[x - 1][y] == '*')//以下if语句检查这个坐标周围的8个元素有没有被展开如果没有展开继续调用这个函数
			{
				spread(arr1, arr2, x - 1, y);
			}
			if (arr2[x][y - 1] == '*')
			{
				spread(arr1, arr2, x, y - 1);
			}
			if (arr2[x + 1][y + 1] == '*')
			{
				spread(arr1, arr2, x + 1, y + 1);
			}
			if (arr2[x - 1][y + 1] == '*')
			{
				spread(arr1, arr2, x - 1, y + 1);
			}
			if (arr2[x - 1][y - 1] == '*')
			{
				spread(arr1, arr2, x - 1, y - 1);
			}
			if (arr2[x ][y+1] == '*')
			{
				spread(arr1, arr2, x , y+1);
			}
			if (arr2[x + 1][y-1] == '*')
			{
				spread(arr1, arr2, x + 1, y - 1);
			}
			if (arr2[x+1][y] == '*')
			{
				spread(arr1, arr2, x+1, y );
			}
		}
		else//如果这个坐标周围的元素有雷，统计雷的个数，并且把雷的个数赋给这个坐标
			arr2[x][y] = check(arr1, arr2, x, y);
	}
}
int check(char arr1[ROWS][LOCS], char arr2[ROWS][LOCS], int x, int y)//判断你输入坐标周围是否有雷
{
	int thcout = 0;
	if ((x - 1 >= 0)&&(arr1[x - 1][y] == 3))
		thcout++;
	if ((x + 1 < 14)&&(arr1[x + 1][y] == 3))
		thcout++;
	if ((y - 1 >= 0)&&(arr1[x][y - 1] == 3) )
		thcout++;
	if ((y + 1 < 14)&&(arr1[x][y + 1] == 3))
		thcout++;
	if ((y + 1 < 14) && (x + 1 < 14)&&(arr1[x + 1][y + 1] == 3) )
		thcout++;
	if ((y - 1 >= 0) && (x - 1 >= 0)&&(arr1[x - 1][y - 1] == 3))
		thcout++;
	if ((x + 1 < 14) && (y - 1 >= 0)&&(arr1[x + 1][y - 1] == 3))
		thcout++;
	if ((x - 1 >= 0) && (y + 1 < 14)&&(arr1[x - 1][y + 1] == 3))
		thcout++;
	return thcout;
}
