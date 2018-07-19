#define _CRT_SECURE_NO_WARNINGS 1
#include<Windows.h>
#include<conio.h>
#include"game.h"
void play()
{
	int i = 0;
	int identifier = 1;//用接受snake_break()函数的返回值，判断玩家是否已经死亡。
	srand((size_t)time(NULL));
	char arr[ROWS][COLS];//蛇身数组。
	memset(arr, ' ', sizeof(arr));//把数组内容置为空格。
	init_borad(arr, ROWS, COLS);//初始游戏信息。
	show_borad(arr, ROWS, COLS);//打印游戏信息。
	while (1)
	{
		while (!_kbhit())//检查是否有键盘输入。
		{
			if (food.flag== 0)//如果食物被吃，重新生成食物。
			{
				snake_food(arr, ROWS, COLS);//食物生成函数。
			}
			identifier = snake_break(arr, ROWS, COLS);//判断玩家是否死亡。
			if (identifier == 0)//判断游戏是否结束。
			{
				return 0;
			}
			 sanke_eat();//判断是否吃到食物。
			 if (snake.n == snake_length)//判断蛇身是不是充满整个空间。
			 {
				 printf("你赢了\n");
				 return;
			 }
			sanke_move(arr, snake.n);//蛇的移动
			system("cls");//清除屏幕。
			show_borad(arr, ROWS, COLS);//打印蛇的信息。
			Sleep(SLEEP);//程序暂停SLLEEP毫秒后继续执行。
		}
		snake_change();//接受用户输入
	}
}
void mean()
{
	printf("\n*******欢迎来到贪吃蛇游戏*****\n");
	printf("******************************\n");
	printf("*******play 1 exit 0**********\n");
	printf("******************************\n");
}
int main()
{
	int input;
	do
	{
		mean();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			play();
			break;
		case 0:
			printf("游戏结束\n");
			break;
		defalut:
			printf("选择错误，请重新选择");
			break;
		}
	} while (input);
	system("pause");
	return 0;
}