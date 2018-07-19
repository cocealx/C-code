//#include"stdio.h"
//int main()
//{
//	int i = 0, j = 0, sum = 0;
//	for (i = 2; i <= 100; i++)
//	{
//		for (j = 1; j<i; j++)
//		if (i%j == 0)
//			sum = sum + j;
//		/*printf("%d",sum);*/
//		if (sum == i)
//		{
//			printf("%d its factors are", i);
//			for (j = 1; j<i; j++)
//			if (i%j == 0)
//				printf("%d,", j);
//		}
//	}
//	system("pause");
//	return 0;
//}
//#include "stdio.h"
//int main()
//{
//	int i, t, j;
//	int a[100] = { 0 };
//	for (i = 1; i <= 100; i++)
//		a[i - 1] = i;
//	a[0] = 0;
//	for (j = 1; j<100; j++){
//		if (a[j] != 0){
//			t = a[j];
//			
//			for (i = j+1; i<100 ; i++)
//			if (a[i + 1] % t == 0)
//				a[i + 1] = 0;
//			
//		}
//	}
//	for (i = 0; i<100; i++)
//	if (a[i] != 0)
//		printf("%4d", a[i]);
//	system("pause");
//	return 0;
//}
//
//#include"stdio.h"
//int main()
//{
//	int i, n,c;
//		printf("please a n:");
//	scanf_s("%d", &n);
//	 int arr[6] = { 1, 3, 4, 4, 7, 9 };
//	 for (i = 0; i < 6; i++)
//	 {
//		 if (i >= 6)
//		 {
//			 for (i = ; i < 6; i++)
//				 printf("%3d", arr[i]);
//			 printf("%3d", n);
//			 return 0;
//		 }
//		 if (/*arr[i] <= n &&*/ n <= arr[i + 1])
//		 {
//			 printf("%3d", arr[i]);
//			 printf("%3d", n);
//			 c = i+1;
//			 goto flag;
//		 }
//		 else
//			 printf("%3d", arr[i]);
//	 }
//		 
// flag:for (i = c; i < 6; i++)
//	 printf("%3d", arr[i]);
//	  system("pause");
//	  return 0;
//}
//#include<stdio.h>
//#include<math.h>
//#define Exp 0.00001
//int main()
//{
//	double a, b, c,x1,x2,dis,q;
//	printf("please enter 参数a,b,c:");
//	scanf_s("%lf%lf%lf", &a, &b, &c);
//	dis = b*b - 4 * a*c;
//	if (-Exp < a && a <Exp)
//	{
//		printf("参数a不能等于0\n");
//
//	}
// if (-Exp < dis && dis <Exp)
//	{
//		x1 = -b / (2 * a);
//		printf("x1=%.5lf\n", x1);
//	}
// else if ( dis <Exp)
//	 printf("此方程无解\n");
// else
// {
//
//	 q = sqrt(dis);
//	 x1 = (-b + q) / (2 * a);
//	 x2 = (-b - q) / (2 * a);
//	 printf("x1=%.5lf,x2=%.5lf\n", x1, x2);
//	 
// }
// system("pause");
// return 0;
//}
//#include "stdio.h"
//int a;
//int main()
//{
//	int pow(int);
//	int m,b=3;
//	int ch;
//	printf("Enter a,m:");
//	scanf_s("%d%d", &a, &m);
//	ch = pow(m);
//	printf("%2d ** %2d=%2d\n,%2d * %2d=%2d", a, m, ch, a, b, a*b);
//	system("pause");
//	return 0;
//
//}
//extern a;
//int pow(int n)
//	return ch1;
//}


