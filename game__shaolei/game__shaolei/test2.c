#define _CRT_SECURE_NO_WARNINGS 1
#include"game2.h"
void play()
{
	time_t  first, second;
	int no_count;//δ֪����ĸ���
	srand((unsigned int)time(NULL));
	char arr1[ROWS][LOCS] = { 0 };//��������
	char arr2[ROWS][LOCS] = { 0 };//��������
	Init_iay(arr1, arr2, ROWS, LOCS);//��ʼ��������
	set_mine(arr1);//���׺���
	dis_play(arr2, ROWS, LOCS);//��һ�δ�ӡ����
	dis_play(arr1, ROWS, LOCS);
	do
	{
		printf("�׵ĸ���=%d\n", COUNT);//��������׵ĸ���
		first = time(NULL);
		no_count = playgame(arr1, arr2, COUNT, ROWS, LOCS);//ͳ��δ֪����ĸ���
		if (no_count != COUNT)//�ж�δ֪������׵ĸ����Ƿ���ȣ�
		{
			printf("δ֪�������=%d\n", no_count);
			dis_play(arr2, ROWS, LOCS);
		}
		else
		{
			dis_play(arr1, ROWS, LOCS);//���δ֪����ĸ��������׵ĸ�������ӡ�׵ķֲ�ͼ
		}
	} while (no_count != COUNT);
	second = time(NULL);
	printf("*****������%.1f��******\n", difftime(second,first));
}
mean()
{
	printf("**********************\n");
	printf("****play.1 exit.0*****\n");
	printf("**********************\n");
}
void test()
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
		default:
			printf("ѡ�����������ѡ��\n");
			break;


		}

	} while (input);
}

int main()
{
	test();
	system("pause");
	return 0;
}