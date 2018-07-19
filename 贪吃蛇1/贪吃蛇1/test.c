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
	food.flag = 0;//��ʾʳ���Ѿ����Ե���
	snake.snk[2].x = 4;
	snake.snk[2].y = 6;
	snake.snk[1].x = 5;
	snake.snk[1].y = 6;
	snake.snk[0].x = 6;
	snake.snk[0].y = 6;//��ÿһ�ڵ�������Ϣ��
	arr[snake.snk[0].y][snake.snk[0].x] = '*';//
	arr[snake.snk[1].y][snake.snk[1].x] = '*';//
	arr[snake.snk[2].y][snake.snk[2].x] = '*';//��*��ʾ�ߵ����塣
	snake.head_snake = &snake.snk[0];//�ѵ�һ�ڵ���Ϣ������ͷָ�����
	snake.tail_snake = &snake.snk[2];//�ѵ����ڵ���Ϣ������βָ�����
	snake.n = 3;//�߿�ʼʱ��Ϊ���ڡ�
	snake.ch = d;//����Ϊ�ҡ�
}
void snake_food(char arr[][COLS], int row, int col)
{
	while (1)
	{
		 food.fd.x = rand() % 14;//Ϊʳ���������x���ꡣ
		 food.fd.y = rand() % 14;//Ϊʳ���������y���ꡣ
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
		(snake.n)++;//�Ե�һ��ʳ��ߵ������1��
		food.flag = 0;
	}
	
}
void sanke_move(char arr[][COLS], int n)
{

		int j = 0;
		arr[(*snake.tail_snake).y][(*snake.tail_snake).x] = ' ';//β���ÿո�
		for (j = n - 2; j >= 0; j--)
		{
			snake.snk[j+1] = snake.snk[j];//������ǰ����������긳ֵ������ġ�
		}
	snake.tail_snake = &(snake.snk[n-1]);
	switch (snake.ch)
	{
	case w://�����ƶ�
		(*snake.head_snake).y -= 1;
		break;
	case s://������
		(*snake.head_snake).y += 1;
		break;
	case d://������
		(*snake.head_snake).x += 1;
		break;
	case a://�����ߡ�
		(*snake.head_snake).x -= 1;
		break;
	}
	arr[(*snake.head_snake).y][(*snake.head_snake).x] = '*';
}
void snake_change()//���ڽ����û����롣
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
	for (j = 2; j < snake.n; j++)//�ж���ͷ������û�и��ڶ����Ժ������������غϡ�
	{
		if (((*snake.head_snake).x == snake.snk[j].x) && ((*snake.head_snake).y == snake.snk[j].y))
		{
			printf("��ҧ���Լ���\n");
			return 0;//ҧ���Լ�������������0�����ڽ�����Ϸ��
		}
	}
	if (((0 >(*snake.head_snake).x) || ((*snake.head_snake).x >= row)) || ((0 >(*snake.head_snake).y) || ((*snake.head_snake).y >= col)))//�ж���ͷ��û��Խ�硣
	{
		printf("��ײǽ��\n");
		return 0;//ҧ���Լ�������������0�����ڽ�����Ϸ��
	}
	return 1;//���û������������1������Ϸ��
}