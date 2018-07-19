#define _CRT_SECURE_NO_WARNINGS 1
//2/1+3/2+5/3
//#include<stdio.h>
//float add(double i1, double i2, int k)
//{
//	if (k == 20)
//		return i1 / i2;
//	if (k <20)
//		return i1 / i2 + add((i1 + i2), i1, k + 1);
//}
//int main()
//{
//	double sum = 0;
//	sum = add(2.0f, 1.0f, 1);
//	printf("%lf", sum);
//	getchar();
//	return 0;
//}
//#include<stdio.h>
//int add(int a, int n)
//{
//	if (n == 1)
//	{
//		return a * 10 + 2;
//	}
//	if (n > 1)
//		return a + add(a * 10 + 2, n - 1);
//}
//int main()
//{
//	int sum = 0;//add(2, 5);
//	sum = add(2, 5);
//	printf("%d\n", sum);
//	return 0;
//}

#include<stdio.h>
int add(int a, int n)
{
	int sum = a + n;
	return sum;
}
int main()
{
	int sum = 0;//add(2, 5);
	sum = add(2, 5);
	printf("%d\n", sum);
	return 0;
}