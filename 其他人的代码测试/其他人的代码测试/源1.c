#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char a[20], b[20], c[20];
	scanf("%s%s", a, b);
	gets(b);
	printf("%s\n%s\n", a, b);
	get(c);
	printf("%s%s\n", a, b, c);
	system("pause");
}
