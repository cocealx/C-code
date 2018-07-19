#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void show_borad(char arr[][COLS], int row, int col)
{
	int i, j;
	printf("**********************\n");
	for (i = 0; i < col; i++)
	{
		printf("*");
		for (j = 0; j < row; j++)
		{
			printf("%c", arr[i][j]);
		}
		printf("*");
		printf("\n");
	}
	printf("**********************\n");
}
void init_borad(char arr[][COLS], int row, int col)
{
	food.flag = 0;//表示食物已经被吃掉。
	snake.snk[2].x = 4;
	snake.snk[2].y = 6;
	snake.snk[1].x = 5;
	snake.snk[1].y = 6;
	snake.snk[0].x = 6;
	snake.snk[0].y = 6;//蛇每一节的坐标信息。
	arr[snake.snk[0].y][snake.snk[0].x] = '*';//
	arr[snake.snk[1].y][snake.snk[1].x] = '*';//
	arr[snake.snk[2].y][snake.snk[2].x] = '*';//用*表示蛇的身体。
	snake.head_snake = &snake.snk[0];//把第一节的信息交给蛇头指针管理。
	snake.tail_snake = &snake.snk[2];//把第三节的信息交给蛇尾指针管理。
	snake.n = 3;//蛇开始时设为三节。
	snake.ch = d;//方向为右。
}
void snake_food(char arr[][COLS], int row, int col)
{
	while (1)
	{
		 food.fd.x = rand() % 14;//为食物生成随机x坐标。
		 food.fd.y = rand() % 14;//为食物生成随机y坐标。
		 if (arr[food.fd.y][food.fd.x] == ' ')
		{
			arr[food.fd.y][food.fd.x] = '*';
			break;
		}
	}
	food.flag = 1;
}

void sanke_eat()
{
	if (((*snake.head_snake).x == food.fd.x) && ((*snake.head_snake).y == food.fd.y))
	{
		(snake.n)++;//吃到一个食物，蛇的身体加1。
		food.flag = 0;
	}
	
}
void sanke_move(char arr[][COLS], int n)
{

		int j = 0;
		arr[(*snake.tail_snake).y][(*snake.tail_snake).x] = ' ';//尾巴置空格。
		for (j = n - 2; j >= 0; j--)
		{
			snake.snk[j+1] = snake.snk[j];//把蛇身前面的身体坐标赋值给后面的。
		}
	snake.tail_snake = &(snake.snk[n-1]);
	switch (snake.ch)
	{
	case w://向上移动
		(*snake.head_snake).y -= 1;
		break;
	case s://向下走
		(*snake.head_snake).y += 1;
		break;
	case d://向右走
		(*snake.head_snake).x += 1;
		break;
	case a://向左走。
		(*snake.head_snake).x -= 1;
		break;
	}
	arr[(*snake.head_snake).y][(*snake.head_snake).x] = '*';
}
void snake_change()//用于接受用户输入。
{
	char  move;
	//move = getchar();
	scanf("%c", &move);
	switch (move)
	{
	case 'W':
	case 'w':
		if (snake.ch != s)
			snake.ch = w;
		break;
	case 'S':
	case 's':
		if (snake.ch != w)
			snake.ch = s;
		break;
	case 'D':
	case 'd':
		if (snake.ch != a)
			snake.ch = d;
		break;
	case 'A':
	case 'a':
		if (snake.ch != d)
			snake.ch = a;
		break;
	}
}
int snake_break(char arr[][COLS], int row, int col)
{
	int j = 1;
	for (j = 2; j < snake.n; j++)//判断蛇头坐标有没有跟第二节以后的蛇身的坐标重合。
	{
		if (((*snake.head_snake).x == snake.snk[j].x) && ((*snake.head_snake).y == snake.snk[j].y))
		{
			printf("你咬到自己了\n");
			return 0;//咬到自己向主函数返回0，用于结束游戏。
		}
	}
	if (((0 >(*snake.head_snake).x) || ((*snake.head_snake).x >= row)) || ((0 >(*snake.head_snake).y) || ((*snake.head_snake).y >= col)))//判断蛇头有没有越界。
	{
		printf("你撞墙了\n");
		return 0;//咬到自己向主函数返回0，用于结束游戏。
	}
	return 1;//如果没有死亡，返回1继续游戏。
}