#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include"game.h"
#include"time.h"
#include"stdlib.h"
void menu()
{
	printf("*************************\n");
	printf("*****1.play  0.exist*****\n");
	printf("*************************\n");
}
void Playgame()
{
	
	char arr[ROWS][COLS] = { 0 };
	init_board(arr, ROWS, COLS);
	display(arr, ROWS, COLS);
	srand((unsigned int)time(NULL));
	while (1)
	{
		Computer(arr, ROWS, COLS);
		display(arr, ROWS, COLS);
		if (cheekfull(arr, ROWS, COLS) == 0)
			{
				printf("����Ӯ\n");
				break;
			}
	   else if (cheekfull(arr, ROWS, COLS) == 'p')
			{
				printf("ƽ��\n");
				break;

			}
		player(arr, ROWS, COLS);
		display(arr, ROWS, COLS);
		if (cheekfull(arr, ROWS, COLS) == 0)
			{
				printf("���Ӯ\n");
				break;
			}
		else if (cheekfull(arr, ROWS, COLS) == 'p')
		{
			printf("ƽ��\n");
			break;

		}
			
	}
	
}
void test()
{
	int input;
	do
	{
		menu();
		printf("��ѡ��\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			Playgame();
			break;
		case 0:
			printf("��Ϸ����\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	}while (input);

}

int main()
{
	test();
	system("pause");
	return 0;
}
