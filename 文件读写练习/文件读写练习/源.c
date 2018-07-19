#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int judage(const char* src, const char ch)
{
	while (*src)
	{
		if (*src == ch)
			return 1;
		src++;
	}
	return 0;
}
int main()
{
	char buf[30] = { 0 };
	char ch = 'c';
	FILE*read = fopen("www.txt", "r");
	if (read == NULL)
	{
		perror(" ");
		exit(EXIT_FAILURE);
	}
	while (fgets(buf, 30, read))
	{
		if (judage(buf, ch))
			fputs(buf,stdout);
	}
	return 0;
}