////作业
//int judge(int n)
//{
//	int i;
//	for (i = 2; i <= n/2;i++)
//	{
//		if(n%i==0)
//			return 0;
//	}
//	return 1;
//}
//#define _CRT_SECURE_NO_WARNINGS 1
//#include"stdio.h"
//int main()
//{
//	int n;
//	printf("please a number>");
//	scanf("%d", &n);
//	if (judge(n) == 0)
//		printf("不是素数\n");
//	else
//		printf("是素数\n");
//	system("pause");
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS 1
//int judge(int year)
//{
//	if ((year % 4 == 0 && year %100 != 0) || (year % 400 == 0))
//		return 1;
//	return 0;
//}
//
//#include"stdio.h"
//int main()
//{
//	int year;
//	printf("input your judge year>");
//	scanf("%d", &year);
//	if (judge(year) == 0)
//		printf("不是闰年\n");
//	else
//		printf("是闰年\n");
//	system("pause");
//	return 0;
//
//}
//
//int search(int arr[], int n1, int n2 ,int num)
//{
//	int left = n1, right = n2, mid;
//	left = n1, right = n2;
//	while (left <= right)
//	{
//		mid = left + (right - left)/2;
//		if (arr[mid] < num)
//			
//		    left = mid + 1;
//		else if (arr[mid]>num)
//			right = mid - 1;
//		else
//			return mid;
//	}
//	return -1;
//}
//#define _CRT_SECURE_NO_WARNINGS 1
//#include"stdio.h"
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int n1, n2,num;
//	printf("please input n1,n2 ,and search's number>");
//	scanf("%d%d%d", &n1,&n2,&num);
//	search(arr, n1, n2,num);
//	if (search(arr, n1, n2,num) == -1)
//		printf("没有找到\n");
//	else
//		printf("下标=%d\n", search(arr, n1, n2,num));
//	system("pause");
//	return 0;
//}

//void Increment(int *p)
//{
//	(*p)++;
//
//}
//
//#define _CRT_SECURE_NO_WARNINGS 1
//#include"stdio.h"
//int main()
//{
//	int n = 0;
//	Increment(&n);
//	Increment(&n);
//	Increment(&n);
//	Increment(&n);
//	Increment(&n);
//	printf("%d", n);
//	system("pause");
//
//}

//练习
//struct student
//{
//	char name[20];
//	float score;
//	int num;
//	struct student *next;
//}student1[];







//利用main（）实现简单计算器。
//#include<stdio.h>
//#include<stdlib.h>
//int add(int a, int b)
//{
//	return a + b;
//}
//int sub(int a, int b)
//{
//	return a - b;
//}
//int mul(int a, int b)
//{
//	return a*b;
//}
//int dv(int a, int b)
//{
//	return a / b;
//}
//int main(int argc, char*argv[])
//{
//	int ret = 0;
//	if ((argc != 4) ||(argv[1][0] != '-'))
//	{
//		printf("参数错误\n");
//		return 0;
//	}
//	switch (argv[1][1])
//	{
//	case 'a':
//		ret = add(atoi(argv[2]),atoi( argv[3]));
//		break;
//	case's':
//		ret = sub(atoi(argv[2]), atoi(argv[3]));
//		break;
//	case 'm':
//		ret = mul(atoi(argv[2]), atoi(argv[3]));
//		break;
//	case'd':
//		ret = dv(atoi(argv[2]), atoi(argv[3]));//atoi()函数把一个数字字符串转换为整型。
//		break;
//	default:
//		break;
//	}
//	printf("ret = %d", ret);
//	system("pause");
//	return 0;
//}

// 
#include<stdio.h>
void bit_set(unsigned char*p_date, unsigned char position, int flag)
{
	if (flag == 1)
	{
		*p_date |= (1 << (position - 1));
	}
	else
	{
		*p_date &= (~(1 << (position - 1)));
	}
}
int main()
{
	unsigned char  pc = 0x04;//0000 0100
	bit_set(&pc, 1, 1);
	printf("%d\n", pc);
	getchar();
	return 0;
}