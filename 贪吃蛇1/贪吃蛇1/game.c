#define _CRT_SECURE_NO_WARNINGS 1
#include<Windows.h>
#include<conio.h>
#include"game.h"
void play()
{
	int i = 0;
	int identifier = 1;//�ý���snake_break()�����ķ���ֵ���ж�����Ƿ��Ѿ�������
	srand((size_t)time(NULL));
	char arr[ROWS][COLS];//�������顣
	memset(arr, ' ', sizeof(arr));//������������Ϊ�ո�
	init_borad(arr, ROWS, COLS);//��ʼ��Ϸ��Ϣ��
	show_borad(arr, ROWS, COLS);//��ӡ��Ϸ��Ϣ��
	while (1)
	{
		while (!_kbhit())//����Ƿ��м������롣
		{
			if (food.flag== 0)//���ʳ�ﱻ�ԣ���������ʳ�
			{
				snake_food(arr, ROWS, COLS);//ʳ�����ɺ�����
			}
			identifier = snake_break(arr, ROWS, COLS);//�ж�����Ƿ�������
			if (identifier == 0)//�ж���Ϸ�Ƿ������
			{
				return 0;
			}
			 sanke_eat();//�ж��Ƿ�Ե�ʳ�
			 if (snake.n == snake_length)//�ж������ǲ��ǳ��������ռ䡣
			 {
				 printf("��Ӯ��\n");
				 return;
			 }
			sanke_move(arr, snake.n);//�ߵ��ƶ�
			system("cls");//�����Ļ��
			show_borad(arr, ROWS, COLS);//��ӡ�ߵ���Ϣ��
			Sleep(SLEEP);//������ͣSLLEEP��������ִ�С�
		}
		snake_change();//�����û�����
	}
}
void mean()
{
	printf("\n*******��ӭ����̰������Ϸ*****\n");
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
			printf("��Ϸ����\n");
			break;
		defalut:
			printf("ѡ�����������ѡ��");
			break;
		}
	} while (input);
	system("pause");
	return 0;
}