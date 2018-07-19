#define _CRT_SECURE_NO_WARNINGS 1
//判断大小端
//#include<stdio.h>
//union 
//{
//	int i;
//	char c;
//}temp;
//int main()
//{
//	temp.i = 1;
//	printf("%d", temp.c);
//	system("pause");
//	return 0;
//}
#include<assert.h>
#include<stdio.h>
#if(0)
int main()
{
	char a = -1;
	signed char b = -1;
	unsigned char c = -1;
	printf("a=%d,b=%d,c=%d", a, b, c);//-1,-1,0x000000ff 255
	system("pause");
	return 0;
}


int main()
{
	char a = -128;
	char a1 = 128;
	printf("%u\n", a);//0xffffff80
	printf("%u\n", a1);//
	return 0;

}

int main()
{
	char a[1000];
	int i;
	for (i = 0; i < 1000; i++)
	{
		a[i] = i+1;
	}
	printf("%d\n", strlen(a));
	return 0;
}

int main()
{
	short int num = 32767;
	short int a = num + 1;
	printf("%0x\n", (int)a);//0xffff8000
	printf("%d\n", a);//0xffff8000
	return 0;
}

//vc下验证
//void fun()
//{
//	int temp = 10;
//	int *p =NULL;	
//}
//int main()
//{
//	int a = 0;
//	fun();
//	printf("%d\n", a);
//	return 0;
//}
void Print(size_t num)
{
	if (num > 9)
		Print(num / 10);
	printf("%d", num % 10);
}
int main()
{
	size_t num = 1234;
    Print(1234);
	return 0;
}

size_t MY_strlen(const char* src)
{
	if (*src == 0)
		return 0;
	else
		return 1 + MY_strlen(src + 1);
}
int main()
{
	char *p = "1234567";
	printf("%d",MY_strlen(p));
	return 0;
}

int factorial(int n)
{
	if (n == 2)
		return 2;
	else
		return n*factorial(n - 1);
}
int main()
{
	int n = 5;
	printf("%d",factorial(n));
	return 0;
}

int fib(int n)
{
	if (n <= 2)
		return 1;
	else
		return fib(n - 1) + fib(n - 2);
}
int main()
{
	printf("%d", fib(30));
	return 0;
}

int main()
{//1 1 2 3 5 8 13
	int a1 = 1;
	int a2 = 1;
	int sum = 2;
	for (int i = 3; i <= 7; i++)
	{
		sum += (a1 + a2);
		if (i % 2)
		{
			a1 = a1 + a2;
		}
		else
			a2 = a1 + a2;
	}
	printf("%d", sum);
	return 0;
}

#include<stdarg.h>
int average(int n, ...)
{
	va_list arg;
	va_start(arg, n);
	int i = 0;
	int sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(arg, int);
	}
	va_end(arg);
	return sum / n;
}
int main()
{
	printf("%d", average(5,1, 2, 3, 4, 5));
	return 0;
}


int my_strlen(const char*src)
{
	assert(src);
	char*p = src;
	while (*src)src++;
	return src - p;
}
int main()
{
	char*p = "1234567";
	printf("%d", my_strlen(p));
	return 0;
}
char*MY_strcat(char*dest, const char*src)
{
	assert(dest&&src);
	char*ret = dest;
	while (*dest)dest++;
	while (*dest++ = *src++);
	return ret;
}
int main()
{
	char s1[30] = "12345";
	char*s2 = "78910\0 123";
	printf("%s", MY_strcat(s1, s2));
	return 0;
}

char*MY_strcpy(char*dest,const char*src)
{
	assert(dest&&src);
	char*ret = dest;
	while (*dest++ = *src++);
	return ret;
}
int main()
{
	char s1[20] = "12345\0 123";
	char *s2 = "78910 123";
	printf("%s", MY_strcpy(s1, s2));
	return 0;
}

int my_strcmp1(const char*s1, const char*s2)
{
	assert(s1&&s2);
	while (1)
	{
		if (*s1 == *s2&&*s1)
		{
			s1++;
			s2++;
		}
		else
			return *(unsigned char*)s1 - *(unsigned char*)s2;/*比较的是ASCll码值，大小为0——255为无符号字符*/
	}
}
int my_strcmp(const char*s1, const char*s2)
{
	assert(s1&s2);
	int ret = 0;
	while (!(ret = *(unsigned char*)s1 - *(unsigned char*)s2/*比较的是ASCll码值，大小为0——255为无符号字符*/) && *s1++)s2++;
	return ret;
}
int main()
{
	char *s1 = "12345\0 12345";
	char *s2 = "12345012345";
	printf("%d", my_strcmp1(s1, s2));
	return 0;
}

char*my_strstr(const char*dest, const char*src)
{
	assert(dest&&src);
	const char*temp_dest = dest;
	const char*temp_src = src;
	while (*temp_dest)
	{
		dest = temp_dest;
		src = temp_src;
		while (*dest==*src&&*src)
		{
			dest++;
			src++;
		}
		if (*src == 0)//必须先判断
			return temp_dest;
		if (*dest == 0)//后判断
		temp_dest++;
	}
}
int main()
{
	char*s1 = "12343456";
	char*s2 = "3456";
	printf("%p", my_strstr(s1, s2));
	return 0 ;
}

void*my_memcopy(void*dest, const void*src, size_t n)
{
	assert(dest&&src);
	void*ret = dest;
	while (n--)
	{
		*((char*)dest)++ = *((char*)src)++;
	}
	return ret;
}
int main()
{
	char c[20] = "123456789";
	char*pc = "9876543210";
	printf("%s", (char*)my_memcopy(c, pc, 5));
	return 0;
}

void* my_memmove(void* dest, const void* src, size_t n)
{
	assert(dest&&src);
	void*ret = dest;
	if (dest <= src)
	{
		while (n--)
		{
			*((char*)dest)++ = *((char*)src)++;
		}
	}
	else
	{

		while(n--)
		{
			*((char*)dest + n) = *((char*)src + n);
		}
	}
	return ret;
}
int main()
{
	char c[20] = "123456789";
	printf("%s", (char*)my_memmove(c+3, c,4));
	return 0;
}

struct STU
{
	int old;
	int number;
};
void swp(char*pc1, char*pc2, size_t size)
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		char temp = pc1[i];
	    pc1[i] = pc2[i];
		pc2[i] = temp;
	}
}

int comper(void*p1, void*p2)
{
	return ((struct STU*)p1)->old - ((struct STU*)p2)->old;
}


void qsort(void* base, size_t n, size_t size, int comper(void*, void *))
{
	int i = 0, j = 0;
	int flag = 0;
	for (i = 0; i < n - 1; i++)
	{
		if (flag == 1)
			return;
		flag = 1;
		for (j = 0; j < n - 1 - i; j++)
		{
			if (comper((char*)base + j*size, (char*)base + (j + 1)*size)>0)
			{
				flag = 0;
				swp((char*)base + j*size, (char*)base + (j + 1)*size, size);
			}
		}
	}
}
int main()
{
	struct STU stu1[9] = { { 1, 2 }, { 3, 4 }, { 5, 6 }, { 7, 8 }, { 9, 10 }, { 2, 1 }, { 4, 3 }, { 6, 5 }, { 8, 7 } };
	struct STU stu[9] = { { 9, 2 }, { 1, 4 }, { 2, 6 }, { 3, 8 }, { 4, 10 }, { 5, 1 }, { 6, 3 }, { 7, 5 }, { 8, 7 } };
	qsort(stu, 9, sizeof(struct STU), comper);
	return 0;
}
#endif
#include"list.h"
//链表的逆序打印和链表的逆序
void test1()
{
	pList list = NULL;
	pushfront(&list, 1);
	pushfront(&list, 2);
	pushfront(&list, 3);
	pushfront(&list, 4);
	display(list);
	////逆序打印
	//Invert_display(list);
	printf("\n");
	//链表元素的逆置
	Invert_list1(list);
	display(list);
	printf("\n");
	Invert_list2(&list);
	display(list);
	Destroylist(&list);
}
void test2()
{
	pList list1 = NULL;
	pList list2 = NULL;
	pList New_list = NULL;
	//第一链表list1
	pushfront(&list1, 0);
	pushfront(&list1, 2);
	pushfront(&list1, 4);
	pushfront(&list1, 6);
	pushfront(&list1, 8);
	pushfront(&list1, 10);
	//第二条链表
	pushfront(&list2, 1);
	pushfront(&list2, 3);
	pushfront(&list2, 5);
	pushfront(&list2, 7);
	New_list = _Merge(&list1, &list2);
	display(list1);
	printf("\n");
	display(list2);
	printf("\n");
	display(New_list);
	Destroylist(&New_list);

}
//删除一个非尾节点
void test3()
{
	pList list = NULL;
	pushfront(&list, 1);
	pushfront(&list, 2);
	pushfront(&list, 3);
	pushfront(&list, 4);
	display(list);
	DelNotTail(find(list, 4));
	printf("\n");
	display(list);
	Destroylist(&list);

}
//在一个位置前插入一个节点
void test4()
{
	pList list = NULL;
	pushfront(&list, 1);
	pushfront(&list, 2);
	pushfront(&list, 3);
	pushfront(&list, 4);
	display(list);
	printf("\n");
	InsertFrontNode(find(list, 3), 5);
	display(list);
	Destroylist(&list);
}
//约瑟夫环
void test5()
{
	pList list = NULL;
	pushfront(&list, 5);
	pushfront(&list, 4);
	pushfront(&list, 3);
	pushfront(&list, 2);
	pushfront(&list, 1);
	display(list);
	printf("\n");
	find(list, 5)->next = list;
	JosephCycle(&list, 3);
}
//寻找一个链表的中间节点，只能遍历一次
void test6()
{
	pList list = NULL;
	pushfront(&list, 1);
	pushfront(&list, 2);
	pushfront(&list, 3);
	pushfront(&list, 4);
	pushfront(&list, 5);
//	pushfront(&list, 6);
	printf("%d\n", FindMidNode(list)->data);
	Destroylist(&list);
}
//对链表的冒泡排序
void test7()
{
	pList list = NULL;
	pushfront(&list, 1);
	pushfront(&list, 3);
	pushfront(&list, 5);
	pushfront(&list, 2);
	pushfront(&list, 4);
	pushfront(&list, 6);
	pushfront(&list, 2);
	pushfront(&list, 5);
	pushfront(&list, 7);
	Bubblesort(list);
	display(list);
	Destroylist(&list);
}
//删除倒数第k个元素
void test8()
{
	pList list = NULL;
	pushfront(&list, 1);
	pushfront(&list, 2);
	pushfront(&list, 3);
	pushfront(&list, 4);
	display(list);
	DelKNode(&list,1);
	DelKNode(&list, 4);
	printf("\n");
	display(list);
	Destroylist(&list);
}
int main()
{
	test8();
	return 0;
}