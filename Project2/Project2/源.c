////#include "stdio.h"
////#include"math.h"
////int main()
////{
////	int n = 0, i = 0, j = 0, a = 0, sum = 0;
////	double t = 0;
////	printf("please an a ：an n:");
////	scanf_s("%d%d", &a, &n);
////
////	for (i = 0; i<n; i++)
////	{
////		for (j = 0; j <= i; j++)
////			t = a*pow(10, j) + t;
////
////	}
////	printf("%lf\n", t);
////	system("pause");
////	return 0;
////}
////在一个排好序的数组中间插入一个数
////#define _CRT_SECURE_NO_WARNINGS 1
////#include"stdio.h"
////int main()
////{
////	int i, n, c;
////	int arr[6] = { 2, 8, 14, 34, 47, 59 };
////	printf("please a n:");
////	scanf("%d", &n);
////	for (i = 0; i < 6; i++)
////	{
////
////		if (n <= arr[i])
////		{
////			printf("%3d", n);
////			c = i;
////			goto flag;
////		}
////		else
////			printf("%3d", arr[i]);
////
////	}
////	if (i == 6)
////	{
////		printf("%3d", n);
////		system("pause");
////		return 0;
////	}
////
////flag:for (i = c; i < 6; i++)
////	printf("%3d", arr[i]);
////	 system("pause");
////	 return 0;
////}
////
//
////#include "stdio.h"
////#include"string.h"
////int  main()
////{
////	/*extern*/ void Eenter(char str   []);
////	/*extern*/ void delete_string(char str[],  char ch);
////	/*extern */void printf_string(char str[]);
////	char str[80] ;
////	char c1;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      
////	Eenter(str[80]);
////	printf("plesae :");
////	scanf_s("%c", &c1);
////	delete_string(str,c1);
////	printf_string(str);
////	system("pause");
////	return 0;
////}
////
////void Eenter(char str[80])
////{
////	int i = 0;
////	for (i = 0; i != '\0';i++)
////	scanf_s("%c", &str[i]);
////	return;
////}
////void delete_string(char str[], char ch)
////{
////	int i = 0, j = 0;
////	for (i = 0, j = 0; str != '\0'; i++)
////	{
////		if (str[i] != ch)
////			str[j++] = str[i];
////		str = '\0';
////	}
////}
////	void printf_string(char str[])
////	{
////		printf("%s\n", str);
////	}
////#include "stdio.h"
////int main()
////{
////	int i, j;
////	int arr[3][3] = { 0 };
////	for (i = 0; i < 3; i++)
////	{
////		for (j = 0; j < 6; j++)
////		{
////			arr[i][j] = i*j;
////			printf("%6d", arr[i][j]);
////		}
////		printf("\n");
////	}
////	system("pause");
////	return 0;
//
////}
//#include"stdio.h"
//#include"string.h"
//int main()
//{
//	char arr[10];
//	int i = 0;
//
//	for (i = 0; i <3; i++)
//	{
//		scanf("%s", arr);
//		if (strcmp(arr, "123456") == 0)
//			break;
//		else
//
//			printf("密码错误，请重新输入\n");
//
//
//	}
//	if (i == 3)
//		printf("exit system\n");
//	else
//		printf("登陆成功\n");
//	system("pause");
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS 1
//#include "stdlib.h"
//#include "time.h"  
//#include "stdio.h"
//int main()
//{
//	srand ((int unsigned)time(NULL));
//	 void mean();
//	 void play();
//	 int input;
//	 do
//	 {
//		 mean();
//		 scanf("%d", &input);
//		 switch (input)
//		 {
//		 case 1:
//			 play();
//			 break;
//
//		 case 0:
//			 printf("exit system");
//			 break;
//		 default:
//			 printf("输入错误；请重新输入>\n");
//			 scanf("%d", &input);
//			 break;
//		 }
//	 } while (input);
//	
//	 system("pause");
//	 return 0;
//		 
//}
//void mean()
//{
//	printf("*****************************\n");
//	printf("**play input 1;exit input 0**\n");
//	printf("*****************************\n");
//}
//void play()
//{
//	int rand1,rand2;
//	rand1 = rand() % 100 + 10;
//	printf("输入你猜的数>\n");
//	scanf("%d", &rand2);
//	while (1)
//	{
//		if (rand2 == rand1)
//		{
//			printf("恭喜你猜对了\n");
//			break;
//		}
//		else if (rand2 < rand1)
//		{
//			printf("猜小了，请重新猜>\n");
//			scanf("%d", &rand2);
//		}
//		else
//		{
//			printf("猜大了，请重新猜>\n");
//			scanf("%d", &rand2);
//		}
//
//	} 
//
//}
//字符输入转换
//#define _CRT_SECURE_NO_WARNINGS 1
//#include "stdio.h"
//int main()
//{
//	char ch1 = '1';
//	printf("please enter:\n");
//	while (ch1 != '\n')
//	{
//		scanf("%c", &ch1);
//		if (ch1 >= 'a'&& ch1 <= 'z')
//		{
//			ch1 -= 32;
//			printf("%4c", ch1);
//		}
//		else if (ch1>='A'&& ch1<='Z')
//		{
//			ch1 += 32;
//			printf("%4c", ch1);
//		}
//      else
//      {
//         ;
//       }
//
//	}
//
//	system("pause");
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS 1
//#include "stdio.h"
//int main()
//{
//	double sum=0.0 ;
//	int flat = 1,i=0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = flat/(double)i + sum;
//		flat = -flat;
//	}
//	printf("%.6lf", sum);
//	system("pause");
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS 1
//#include"stdio.h"
//int main()
//{
//	int a, temp,i=-1,j=0;
//    int	arr[8] = { 0 };
//	printf("please a number>");
//	scanf("%d", &temp);
//	while (temp)
//	{
//		i++;
//		arr[i] = temp % 10;
//		temp = temp / 10;
//	}
//	for (j = i; j >= 0; j--)
//		printf("%2d", arr[j]);
//	system("pause");
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS 1
//#include"stdio.h"
//int main()
//{
//	int comp(int j);
//	int i, t = 0, cout = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		t = comp(i);
//		if (t == 1)
//			cout++;
//	}
//	printf("整数中出现9的次数=%d\n",cout);
//	system("pause");
//	return 0;
//}
//int comp(int j)
//{
//	while (j)
//	{
//		if (j % 10 == 9)
//			return 1;
//		j = j / 10;
//	}
//	return 0;
//	
//}
//#define _CRT_SECURE_NO_WARNINGS 1
//#include"stdio.h"
//int main()
//{
//	int arr[11] = { 1, 3, 5, 7, 12, 13, 14, 16, 28, 30 ,38};
//	int left = 0, right = sizeof(arr) / sizeof(arr[0]),num=0;
//	int mid = right / 2;
//	printf("输入你要查找的数>");
//	scanf("%d", &num);
//	while (left<right)
//	{
//		if (arr[mid] < num)
//		{
//			left = mid + 1;
//			if (arr[left] == num)
//			{
//				printf("查找成功\n");
//				printf("下标=%d\n", left);
//				system("pause");
//				return 0;
//				
//			}
//
//			mid = left + (right - left) / 2;
//		}
//		else if (arr[mid]>num)
//		{
//			right = mid - 1;
//			if (arr[right] == num)
//			{
//				printf("查找成功\n");
//				printf("下标=%d\n", right);
//				system("pause");
//				return 0;
//				
//			}
//			mid = left + (right - left) / 2;
//		}
//		else
//		{
//			printf("查找成功\n");
//			printf("%d", mid);
//			system("pause");
//			return 0;
//		}
//
//	}
//	printf("查找失败\n");
//	system("pause");
//	return 0;
//
//}
//#define _CRT_SECURE_NO_WARNINGS 1
//#include"stdio.h"
//int main()
//{
//	    int value,n;
//		int prime(int x);
//		printf("please a number>");
//		scanf("%d", &n);
//		value = prime(n);
//		if (value == 1)
//			printf("此数是素数\n");
//		else
//			printf("不是素数\n");
//		system("pause");
//		return 0;
//}
//int prime(int x)
//{
//	int i,j;
//	for (i = 2; i < x / 2; i++)
//	{
//		if (x%i == 0)
//			return 0;
//	}
//	return 1;
//}
//#define _CRT_SECURE_NO_WARNINGS 1
//#include"stdio.h"
//int main()
//{
//	int i, j;
//	char arr[6][13] = { { ' ', ' ', ' ', ' ', ' ', ' ', '*', ' ', ' ', ' ', ' ', ' ', ' ' }, { ' ', ' ', ' ', ' ', ' ', '*',
//		'*', '*', ' ', ' ', ' ', ' ', ' ' }, { ' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', ' ', ' ', ' ', ' '
//	}, { ' ', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', ' ' }, { ' ',' ', '*', '*', '*', '*', '*',
//	'*', '*', '*', '*', ' ', ' ' },
//	{ ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', ' ' } };
//	for (i = 0; i < 6; i++)
//	{
//		printf("\t");
//		for (j = 0; j < 13; j++)
//		{
//			printf("%c", arr[i][j]);
//		}
//		printf("\n\n");
//	}
//	printf("\t**************\n\n");
//	for (i = 5; i>=0; i--)
//	{
//		printf("\t");
//		for (j = 0; j < 13; j++)
//		{
//			printf("%c", arr[i][j]);
//		}
//		printf("\n\n");
//	}
//	system("pause");
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS 1
//#include"stdio.h"
//#include"math.h"
//#include"iostream"
//int main()
//{
//	int i, j, a;
//		double sum;
//	for (i = 100; i <999; i++)
//	{
//		sum = 0;
//		j = i;
//		while (j)
//		{
//			a = j % 10;
//			sum = sum + pow((double)a, 3);
//			j = j / 10;
//		}
//		if (i == sum)
//			printf("%4d", i);
//	}
//	system("pause");
//	return 0;
//
//}
//
//#define _CRT_SECURE_NO_WARNINGS 1
//#include"stdio.h"
//#include"iostream"
//int main()
//{
//	int i,a,n,j,sum=0;
//	printf("please number a,n:");
//	scanf("%d%d", &a, &n);
//	for (i = 1; i <=n; i++)
//	for (j = 0; j < i; j++)
//	{
//		sum = sum + a*pow(10, j);
//	}
//	printf("%d", sum);
//	system("pause");
//	return 0;	
//}
//#define _CRT_SECURE_NO_WARNINGS 1
//#include"stdio.h"
//#include"iostream"
//int main()
//{
//	char ch = '1';
//	int count = 0, x = 1;
//	while (ch != '\n')
//	{
//		scanf("%c", &ch);
//		if (ch == '{')
//		{
//			printf("%c", ch);
//			count++;
//		}
//		else if (ch == '}')
//		{
//			printf("%c", ch);
//			count--;
//			if (count < 0)
//				x = -1;
//		}
//
//	}
//	if (x == -1)
//		printf("不正确成对出现\n");
//	else if (count == 0)
//		printf("正确成对出现\n");
//	system("pause");
//	return 0;
//}
