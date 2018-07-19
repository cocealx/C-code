#define _CRT_SECURE_NO_WARNINGS 1
#include"game2.h"
void play()
{
	time_t  first, second;
	int no_count;//未知区域的个数
	srand((unsigned int)time(NULL));
	char arr1[ROWS][LOCS] = { 0 };//布雷数组
	char arr2[ROWS][LOCS] = { 0 };//界面数组
	Init_iay(arr1, arr2, ROWS, LOCS);//初始两个数组
	set_mine(arr1);//布雷函数
	dis_play(arr2, ROWS, LOCS);//第一次打印界面
	dis_play(arr1, ROWS, LOCS);
	do
	{
		printf("雷的个数=%d\n", COUNT);//告诉玩家雷的个数
		first = time(NULL);
		no_count = playgame(arr1, arr2, COUNT, ROWS, LOCS);//统计未知区域的个数
		if (no_count != COUNT)//判断未知区域跟雷的个数是否相等，
		{
			printf("未知区域个数=%d\n", no_count);
			dis_play(arr2, ROWS, LOCS);
		}
		else
		{
			dis_play(arr1, ROWS, LOCS);//如果未知区域的个数等于雷的个数，打印雷的分布图
		}
	} while (no_count != COUNT);
	second = time(NULL);
	printf("*****花费了%.1f秒******\n", difftime(second,first));
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
			printf("游戏结束\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
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