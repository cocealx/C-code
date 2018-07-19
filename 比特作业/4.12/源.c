//#define _CRT_SECURE_NO_WARNINGS 1
//#include"stdio.h"
//#include"stdlib.h"
//#include"windows.h"
//#include"string.h"
//void dis_play(char arr[10][10], int x, int y)
//{
//	int i = 0, j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			printf("      %c   ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void move(char arr[10][10], int x)
//	{
//	    char temp;
//	    temp = arr[x][5];
//		arr[x + 1][5] = temp;
//		arr[x][5] = ' ';
//
//	}
//void Init_board(char arr[10][10], int x, int y)
//{
//	memset(arr, ' ', x*y*sizeof(arr[0][0]));
//}
//int main()
//{
//	int x = 0;
//	char arr[10][10] = { 0 };
//	Init_board(arr, 10, 10);
//	arr[0][5] = '*';
//	dis_play(arr, 10, 10);
//	do
//	{ 
//			
//			move(arr, x);
//			/*system("cls");*/
//			Sleep(10000);
//			dis_play(arr, 10, 10);
//			x++;
//
//	} while (x<10);
//	system("pause");
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int arr[10] = {3,1,2,4,5,6,7,8,9,10};
//	int i = 0;
//	int j = 0;
//	int  tmp = 0;
//	for (i = 0; i < 9; i++)
//	{
//		int x = 0;
//		for (j = 0; j < 9 - i; j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//			else
//			{
//				x++;
//			}
//			if (x == (9 - i))
//			{
//				//goto flag1;
//				break;
//			}
//		}
//		if (x == (9 - i))
//			break;
//	}
////flag1:
//
//	for (i = 0; i <= 9; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	system("pause");
//	return 0;
//}
//
//
//#include<stdio.h>
//void * init(void*arr[], int sz)
//{
//	int*p = arr;
//
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	init(arr, sz);
//
//
//
//
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	const int **pp2;
//	 int *p1;	
//	 int *p2;
//	const int *p3;
//	const int n = 123;//定义一个只读变量n	
//	 //p2 = &n;
//	 p3 = &n;
//	pp2 = &p1;//取指针变量p1的地址
//	*pp2 = &n;//pp2的一级解引用得到n的地址，相当于指针变量p1存的是n的地址
//	*p1 = 10;//对p1解引用，相当于对const int n重新赋值
//	//*p2 = 11;
//	p2 = p3;
//	*p2 = 11;
//	printf("%d", n);
//	system("pause");
//	return 0;
//
//}	
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int arr[2] = { 0 };
//	//int *p;
//	scanf("%d", &arr);
//	printf("%d", arr);
//	system("pause");
//	return 0;
//}
/*判断二进制位中第一个一在第几位*/
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int n,count = 0;
//	scanf("%d", &n);
//	while (!(n & 1))
//	{
//		count++;
//		n = n >> 1;
//	}
//	printf("%d", count);
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n%s\n%s\n%s\n",__LINE__,__FILE__,__DATE__,__TIME__);
//	}
//	system("pause");
//	return 0;
//}
/*二进制位奇偶位的交换*/
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#define SWAP(N) (((N & 0x55555555)<<1)|((0xAAAAAAAA&N)>>1))
///*0x55555555=01010101010101010101010101010101*/
///*0xAAAAAAAA=10101010101010101010101010101010*/
//void MY_printf(int n)
//{
//	int i = 32;
//	while (i--)
//	{
//		printf("%d", n % 2);
//		n = n >> 1;
//	}
//	printf("\n");
//
//}
//int main()
//{
//	int n;
//	printf("please n>:");
//	scanf("%d", &n);
//	MY_printf(n);
//	MY_printf(SWAP(n));
//	system("pause");
//	return 0;
//}
///*判断两个数二进制位不同的个数*/
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()     
//{
//	int n1, n2;
//	printf("please two number>:");
//	scanf("%d%d", &n1, &n2);
//	int count = 0;
//	int temp = n1^n2;
//	while (temp)//整个循环用来计算temp二进制中1的个数
//	{
////		if (temp & 1)//判断第一位是否为1
////		{
//         temp =temp&(temp-1)
//			count++;
////		}
////		temp = temp >> 1;
//	}
//	printf("%d\n", count);
//	system("pause");
//	return 0;
//}
/*二进制位的逆置*/
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//size_t reverse(size_t value)
//{
//	size_t n = 0 ;
//	int j ;
//	for (j=1; j <= 32;j++)
//	{
//		n = ((value & 1)/*每次取出value的第一位*/ | (n<< 1)/*保证刚开始的第一位逐渐移到第32位，实现二进制的逆置*/);
//		value = value >> 1;//顶掉已经保存过的二进制的位*/
//	}
//	return n;
//}
//int main()
//{
//	size_t n;
//	scanf("%u", &n);
//	printf("%u",  reverse(n));
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[19] = { 0 };
//	void *p=arr;
//	(char*)p++;
//	(char*)p+=1;
//}
//#include<stdio.h>
//char *Inver(char *dest)
//{
//	char *ret = dest;
//	char *tm_val = dest;
//	char * value1;
//	char *value2;
//	while (*dest)//整个循环用来调换空格之间的内容
//	{
//		value1 = dest;
//		while (((*dest) != ' ') && ((*dest) !=0))
//		{
//			dest++;
//		}
//		value2 = dest - 1;
//		while (value1 <value2)
//		{
//			*value1 = *value1^*value2;
//			*value2 = *value1^*value2;
//			*value1 = *value1^*value2;
//			value1++;
//			value2--;
//		}
//		if (*dest == ' ')
//			dest++;
//	}
//	while (tm_val<(--dest))
//	{
//		 *tm_val = *tm_val^*dest;
//		 *dest   = *tm_val^*dest;
//		 *tm_val = *tm_val^*dest;
//		 tm_val++;
//	}
//	return ret ;
//}
//#include<stdio.h>
//int main()
//{
//	char arr[30] = "student a am i"/*"i ma a tneduts"*/;
//		printf("%s\n", Inver(arr));
//		system("pause");
//		return 0;
//}
//void Inver(char *left,char *right)
//{
//	while (left < right)
//	{
//		*left = *left^*right;
//		*right = *left^*right;
//		*left = *left^*right;
//		left++;
//		right--;
//	}
//}
//int MY_strlen(char *dest)
//{
//	int count = 0;
//		while (*dest)
//		{
//		  count++;
//		  dest++;
//		}
//		return count-1;
//}
//int main()
//{
//	char arr[30] = "student a am i";
//		Inver(arr,arr+MY_strlen(arr));
//		char*left;
//		char *right = arr;
//		while (*right)
//		{
//			left = right;
//			while ((' ' != *right) && ('\0' != *right))
//			{
//				right++;
//			}
//			Inver(left, right - 1);
//			if (' ' == *right)
//			{
//				right++;
//			}
//		}
//		printf("%s\n", arr/*Inver(arr)*/);
//		system("pause");
//		return 0;
//}
//int main()
//{
//	char ch1 = 'a';
//	char ch2 = 'a';
//	ch1 = ch1^ch2;//a
//	ch2 = ch2^ch1;//a
//	ch1 = ch1^ch2;//b
//	printf("%c %c\n", ch1,ch2);
//	system("pause");
//	return 0;
//	
//}
//#include<stdio.h>
//int main()
//{
//	int n1 = -9;
//	int n2 = 1;
//	printf("AVERAGE=%d", (n1 + n2) >> 1);
//	system("pause");
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//void my_inver(int *p, int n)
//{
//	int *temp = p + n - 1;
//	while (p<temp)
//	{
//		while((p < temp)&&(0 != *p % 2))//p < temp这一句是因为存在特殊情况全是奇数或偶数就会越界访问。
//		{
//			p++;
//		}
//		while ((p < temp) && (0== *temp % 2))//p < temp这一句是因为存在特殊情况全是奇数或偶数就会越界访问。
//		{
//			temp--;
//		}
//		if (p < temp)
//		{
//			*(p) = *(temp) ^ *(p);
//			*(temp) = *(p) ^ *(temp);
//			*(p) = *(p) ^ *(temp);
//		}
//	}
//}
//int main()
//{
//	int n;
//	int *p;
//	printf("输入数组长度n：》");
//	scanf("%d", &n);
//	p=(int*)malloc(n*sizeof(int));
//	assert(NULL != p);
//	int i = 0;
//	while (i<n)
//	{
//		scanf("%d", p+i);
//		i++;
//	}
//	my_inver(p, n);
//	i = 0;
//	while (i<n)
//	{
//		printf("%d ", *(p + i++));
//	}
//	free(p);
//	system("pause");
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//void search(int arr[][3], int *row, int *list,int num)
//{
//	int i = *row - 1;
//	int j = 0;
//	while ((i >= 0) && (j < *list))
//	{
//		
//			if (num == arr[i][j])
//			{
//               *row = i;
//              *list = j;//利用这两个指针变量带回信息给主函数，如果找到把坐标带到主函数。
//				return;
//			}
//			else if(num < arr[i][j])
//			{
//				i--;
//			}
//			else 
//			{
//				j++;
//			}
//     }
//        *row = -1;
//       *list = -1;//如果找不到带回-1到主函数。
//}
//int main()
//{
//   int n = 0;
//   int arr[][3] = { { 1,3,4 }, { 2,4,5}, { 4,5,6 } };
//   int i = sizeof(arr) / sizeof(arr[0]);
//   int j = sizeof(arr[0]) / sizeof(arr[0][0]);
//   scanf("%d", &n);
//   search(arr,&i ,&j ,n);
//   printf("%d %d",i,j);
//   system("pause");
//   return 0;
//}
//#include<stdio.h>
//int main()
//{
//	union
//	{
//		int i;
//		char ch[2];
//	}c;
//	c.i = 1;
//	printf("%d", c.ch[0]);
//	system("pause");
//	return 0;
//}

//char *my_revolve1(char *src, int k)
//{
//	char *ret = src;
//	char *temp ;
//	int i = 0;
//	while(i<k)
//	{
//		temp = src;
//		while (*(temp+1))
//		{
//			*temp = *temp^*(temp + 1);
//			*(temp + 1) = *temp^*(temp + 1);
//			*temp = *temp^*(temp + 1);
//				temp++;
//		}
//		i++;
//	}
//	return ret;
//}
//void my_revolve(char*left, char*right)
//{
//	right--;
//	while (left < right)
//	{
//		*left = *left^*right;
//		*right = *left^*right;
//		*left =  *left^*right;
//		left++;
//		right--;
//	}
//}
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char ch[30] = "ABCDEF";
//	printf("%s\n", ch);
//	/*my_revolve1(ch, 3);*/
//	my_revolve(ch, ch+3);
//	my_revolve(ch + 3, ch + strlen(ch) );
//	my_revolve(ch, ch + strlen(ch));
//	printf("%s\n", ch);
//    system("pause");
//	return 0;	
//}
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char ch[30] = "ABCDEF";
//	const char *pc = "ABCDE";
//	strncat(ch, ch, strlen(ch));
//	if (NULL == strstr(ch, pc))
//	{
//		printf("不是\n");
//	}
//	else
//	{
//		printf("是\n");
//	}
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	short num = 32767;
//	short int i = num + 1;
//	char ch = 128;
//	printf("%d\n", 0xffffff80);//为ch的补码
//	printf("%d\n", ch);
//	printf("%u\n", ch);
//	printf("%u\n", 0xffffff80);
//	printf("%d\n", num);
//	printf("%d\n",i);
//	printf("%d\n", 0xffff8000);//为i的补码
//	printf("%d %d", sizeof(short),sizeof(short int));
//	system("Pause");
//	return 0;
//}
//总结%d读取二进制码的时候要对最高位进行判断，如果为1求得原码在读取，如果为0原码等于补码。
//%u读取二进制码的时候不用对最高位进行判断，直接读取。
//#include<stdio.h>
//int main()
//{
//	int a = 0x7fffffff;
//	int b = a + 1;
//	printf("%d %d", a+2,b);
//	system("pause");
//	return 0;
//}
//一个类型的最大数加1等于这个类型的最小数即0x80000000，加上一个大于1的数就等于最小数加上这个正数减去1。
//#include<stdio.h>
//int main()
//{
//	int i = 3;
//	while (i--)
//	{
//		printf("%d ", i);
//	}
//	printf("\n");
//	i = 3;
//	while (i-- > 0)
//	{
//		printf("%d ", i);
//	}
//	system("pause");
//	return 0;
//}
// while(i--)相当于while（i）{ i--......}.
//#include<stdio.h>
//int main()
//{
//	int a = 2;
//	int b = 4;
//	int ret = /*b + ((a-b) >> 1)*/(-2)>>1;
//	printf("%d", ret);
//	system("pause");
//}
//指针练习。
//#include<stdio.h>
//int main()
//{
//	/*char ch = 'a';
//	char*cp = &ch;
//	&cp;
//	*++cp ;
//	(*cp)++ ; 
//	++*cp;
//	++*++cp;
//	++*cp++ ;*/
//	int arr[5] = { 0 };
//	int *pt;
//	/*for (pt = &arr[0]; pt < &arr[5]; pt++)
//	{
//		*pt = 0;
//	}*/
//	for (pt = &arr[4]; pt >&arr[0]-1; pt--)
//	{
//		*pt = 0;
//	}
//}
//#include<stdio.h>
//int main()
//{
//	struct student
//	{
//		char *pc1;
//		char ch3;
//		char arr[7];//按一字节对齐。
//		//int m;
//		char ch1;
//		 int i;
//		short j;
//		char ch2;
//		int n;
//		
//	}stu1;
//	char *pc1 = "abcd";
//	printf("%d", sizeof(struct student));
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//static int j;
//void fun1()
//{
//	static int i = 0;
//	i++;
//}
//void fun2()
//{
//	int j = 8;
//	j++;
//	printf("%d ", j);
//}
//int main()
//{
//	for (int k = 0; k < 10; k++)
//	{
//		fun1();
//		fun2();
//	}
//	printf("\n%d", j);//9
//	system("Pause");
//}
////打印十进制的每一位。
//#include<stdio.h>
//void print(int n)
//{
//	if (n>9)
//	{
//		 print(n / 10);
//	}
//	printf("%d ", n % 10);
//	return ;
//
//}
//int main()
//{
//	int num = 1729;
//	print(num);
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//int DigitSum(size_t n)
//{
//	int m = 0;
//	if (n>0)
//	{
//		return   n % 10 + DigitSum(n / 10);
//	}
//	return 0;
//	
//}
//int main()
//{
//	int num = 1234564;
//	printf("%d ", DigitSum(num));
//	system("pause");
//	return 0;
//}
////递归写法字符串的逆置
//#include<stdio.h>
//#include<string.h>
//int i = 0;//创建静态变量，用于辅助递归的调用。
//void reverse_string(char *src)
//{
//	if (src < src + i)//当前面的指针src的地址大于等于后面的指针（src+i)的地址递归调用结束。
//	{
//		*(src) = *(src) ^ *(src + i);
//		*(src + i) = *(src) ^ *(src + i);
//		*(src) = *(src) ^ *(src + i);//以上三个就是两个字符的交换。
//		i -= 2;//***注意***因为每次左边的指针右移了一个，所以i必须减2，才相当于左边的指针右移一个。
//		reverse_string(src + 1);
//	}
//}
////void reverse(char arr[])//把整个字符串的逆序，转变成单个字符串的逆置，例如abcdef然后逆置bcde\0然后cd\0\0。
////{
////	char temp = arr[0];//保存字符串的第一个字符
////	int len = strlen(arr);//求得字符串的长度
////	arr[0] = arr[len - 1];//把最后一个字符串放到第一个字符串的位置。
////	arr[len - 1] = '\0';//把最后一个字符的位置放个\0。
////	if (strlen(arr + 1) > 1)//如果下一个字符串的长度为2个或以上，继续递归。
////		reverse(arr + 1);
////	arr[len - 1] = temp;//递归结束，把上面保存的第一个字符放到相应字符串的最后一个位置。
////}
//int main()
//{
//	char p[] = "abecdefg";
//	i = strlen(p)-1;
//	reverse_string(p);
//	//reverse(p);
//	printf("%s", p);
//	system("pause");
//	return 0;
//}
//递归实现k的n次方。
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int MY_power(int n, int k)
//{
//	if (k)
//	{
//		k--;
//		return n*MY_power(n, k);
//	}
//	return 1;
//}
//int main()
//{
//	int n, k;
//	printf("请输入数字n和次方k》》：");
//	scanf("%d%d", &n, &k);
//	printf("%d\n", MY_power(n, k));
//	system("pause");
//	return 0;
//}
////求n的阶乘。
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int factorial(size_t n)
//{
//	if (n > 1)
//		return n*factorial(n-1);//如果写成n*factorial(--n)，n先--，咧如n=3,等同于2*factorial(2).
//	return 1;
//}
//int main()
//{
//	int n;
//	int ret = 1;
//	printf("输入n>:");
//	scanf("%d", &n);
//	int i = n;
//	while (i >= 1)//循环的写法。
//	{
//		ret *= i--;
//	}
//	printf("%d\n", ret);
//	printf("%d\n",factorial(n));
//	system("pause");
//	return 0;
//}
////求第n个斐波那契数
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int search(size_t n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	size_t i;
//	for (i = 3; i <= n; i++)
//	{
//		c = a + b;
//		b = a;
//		a = c;
//	}
//	return a;
//}
//int search1(size_t n)
//{
//	if (n > 2)
//		return search1(n - 1) + search1(n - 2);
//	return 1;
//}
//int main()
//{
//	int n;
//	printf("输入你要求的n>:");
//	scanf("%d", &n);
//	printf("%d\n", search(n));
//	printf("%d\n", search1(n));
//	system("pause");
//	return 0;
//}
//*******//模拟实现printf函数。
//#include<stdio.h>
//#include<stdarg.h>
//#include<Windows.h>
//void play()
//{
//	printf("hehe\n");
//	system("Pause");
//	exit(0);
//}
//void my_printf(char*pc)
//{
//	while (*pc)
//	{
//		putchar(*pc);
//		pc++;
//	}
//}
//void display(int pc)
//{
//	if (pc > 9)
//	{
//		display(pc / 10);
//	}
//	putchar(pc % 10 + '0');
//}
//void print(char*format,...)
//{
////	int *temp = (int*)&format;
////	temp = temp-1;
////	*temp =(int*) &play;
//	va_list arg;
//	va_start(arg, format);
//	while (*format)
//	{
//		switch (*format)
//		{
//		case 's':
//			 
//			my_printf(va_arg(arg, char*));
//			break;
//		case 'c':
//			putchar(va_arg(arg, char));
//			break;
//		case 'd':
//			display(va_arg(arg,int));
//			break;
//		default:
//			putchar(*format);
//			break;
//		}
//		format++;
//	}
//	va_end(arg);
//}
//int main()
//{
//	print("s ccc d%.\n", "hello", 'b', 'i', 't', 100);
//	printf("********");
//	system("pause");
//	return 0;
//}
////对字符串的排序。
//#include<stdio.h>
//void my_sort(char*arr[], int sz)//调用库函数。
//{
//	int i, j;
//	int flag = 1;
//	for ( i = 0; i < sz-1; i++)
//	{
//		char*temp;
//		if (flag == 0)//如果某次循环一次也没有交换，说明其已经拍好序了，循环不用继续下去，直接结束掉函数。
//			return;
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			flag = 0;//假设没有交换赋值为0。
//			if (strcmp( arr[j], arr[j+1] )>0)
//			{
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				flag = 1;//如果交换一次就赋值为1。
//			}
//		}
//	}
//}
////void mysort(char*arr[], int sz)//没有调用库函数strcmp(题目没有要求的话，尽量调用库函数。
////{
////	int i, j;
////	int flag = 1;
////	for (i = 0; i < sz - 1; i++)
////	{
////		char*temp;
////		if (flag == 0)//如果某次循环一次也没有交换，说明其已经拍好序了，循环不用继续下去，直接结束掉函数。
////			return;
////		for (j = 0; j < sz - i-1; j++)
////		{
////			int n = 0;
////			flag = 0;//假设没有交换赋值为0。
////			while ((arr[j][n] == arr[j+1][n]) && arr[j][n])
////			{
////				n++;
////			}
////			if (arr[j][n] > arr[j+1][n])
////			{
////				temp = arr[j];
////				arr[j] = arr[j + 1];
////				arr[j + 1] = temp;
////				flag = 1;//如果交换一次就赋值为1。
////			}
////		}
////	}
////}
//int main()
//{
//	char *arr[] = { "abcde", "accde", "bcdef", "aaaaabcdef" };//该数组的每个元素保存的都是相应字符串的首地址。
//	my_sort(arr,sizeof(arr)/sizeof(arr[0]));
//	//mysort(arr, sizeof(arr) / sizeof(arr[0]));
//	return 0;
//}
////求几个数的平均值。
//#include<stdarg.h>
//#include<stdio.h>
//int average(int n, ...)
//{
//	int sum = 0;
//	va_list arg;
//	va_start(arg, n);
//	for (int i = 0; i < n;i++)
//	{
//		sum += va_arg(arg, int);
//	}
//	return sum / n;
//}
//int main()
//{
//	int ret;
//	ret = average(6,1, 2, 3, 4, 5, 9);
//	printf("ret = %d\n", ret);
//	ret = average(4, 7, 8, 4, 5);
//	printf("ret = %d\n", ret);
//	system("pause");
//	return 0;
//}
//求任意个数中的最大值。
//#include<stdio.h>
//#include<stdarg.h>
//int MAX(int n, ...)
//{
//	va_list arg;
//	va_start(arg, n);
//	int max = va_arg(arg, int);
//	for (int i = 1; i < n; i++)
//	{
//		int temp = va_arg(arg, int);
//		if (max < temp)
//		{
//			max = temp;
//		}
//	}
//	return max;
//}
//int main()
//{
//	int max = MAX(4,-3, -7, -8, -1);
//	printf("max = %d", max);
//	system("pause");
//	return 0;
//}
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
//    int i = 1;
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
//		ret = dv(atoi(argv[2]), atoi(argv[3]));
//		break;
//	default:
//		break;
//	}
//	printf("ret = %d", ret);
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//int drink_sum(int n)//递归
//{
//	if (n > 1)
//		return n / 2 + sum(n / 2 + n % 2);
//	return 0;
//}
//int main()
//{
//	int n = 20;
//	int ret = n + drink_sum(n);
//	printf("ret = %d", ret);
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	printf("输入你要卖多少钱的汽水》：");
//	int n;
//	scanf_s("%d", &n);
//	int sum = n;
//	int temp = n;
//	while (temp > 1)
//	{
//		 sum = sum + temp / 2;
//		 temp = temp / 2 + temp % 2;
//	}
//	printf("你可以喝%d瓶汽水\n", sum);
//	system("pause");
//	return 0;
//}
////找出数组中两个只出现一次的数字。
//#include<stdio.h>
//void divide(int arr[], int sz)
//{
//	int i;
//	int temp[3] = { arr[0] };//创建3个临时变量。
//	for (i = 1; i <sz; i++)
//	{
//		temp[0] ^= arr[i];//保存数组中两个出现一次的数字异或的结果。
//	}
//	 temp[0] = temp[0] - (temp[0]&(temp[0] - 1));//(temp[0]&(temp[0] - 1)去掉temp[0]二进制中的第一个1，然后那temp[0]减去这个结果就得到这个数二进制的第一个1。
//	for (i = 0; i <sz; i++)//利用两个出现一次数字异或的结果，找到第一个1并整个数字的每一个数按位&，达到分组。
//	{                    //这样就保证了每个数组的数字都只有一个数字是出现一次，如果还有其他数字就是成对出现。  
//		if (temp[0]&arr[i])//if else把两个只出现一次的数分为两个数组。
//		{
//			temp[1]^= arr[i];
//		}
//		else
//			temp[2] ^= arr[i];
//	}
//	printf("%d  %d",temp[1],temp[2]);
//}
//int main()
//{
//	int arr[] = { 2, 3, 4, 7, 5, 2, 3, 4, 7,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	divide(arr, sz);
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//int sort(int arr[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	int n;
//	for (i = 0; i < sz-1; i++)
//	{
//		int temp = arr[i];
//		 n = i;
//		for (j = i+1; j <sz ; j++)
//		{
//			if (arr[n]>arr[j])
//			{
//				n = j;
//			}
//		}
//		if (n != i)
//		{
//			temp = arr[n];
//			arr[n] = arr[i];
//			arr[i] = temp;
//		}
//	}
//}
//void search(int arr[],int ret[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i += 2)
//	{
//		if ((arr[i] ^ arr[i + 1]))
//		{
//			ret[0] = arr[i];
//			ret[1] = arr[i];
//			break;
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		ret[1] ^= arr[i];
//	}
//}
//int main()
//{
//	int i = 0;
//	int arr[] = { 7, 3, 1, 7, 5, 5, 3, 4, 1, 2 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	sort(arr, sz);
//	int ret[2] = {0};
//	search(arr, ret, sz);
//	for (i = 0; i < 2; i++)
//	{
//		printf("%d ",ret[i]);
//	}
//	system("pause");
//	return 0;	
//}
////对字符串的排序。
//#include<stdio.h>
//void my_sort(char*arr[], int sz)//调用库函数。
//{
//	int i, j;
//	int flag = 1;
//	for ( i = 0; i < sz-1; i++)
//	{
//		char*temp;
//		if (flag == 0)//如果某次循环一次也没有交换，说明其已经拍好序了，循环不用继续下去，直接结束掉函数。
//			return;
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			flag = 0;//假设没有交换赋值为0。
//			if (strcmp( arr[j], arr[j+1] )>0)
//			{
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				flag = 1;//如果交换一次就赋值为1。
//			}
//		}
//	}
//}
////void mysort(char*arr[], int sz)//没有调用库函数strcmp(题目没有要求的话，尽量调用库函数。
////{
////	int i, j;
////	int flag = 1;
////	for (i = 0; i < sz - 1; i++)
////	{
////		char*temp;
////		if (flag == 0)//如果某次循环一次也没有交换，说明其已经拍好序了，循环不用继续下去，直接结束掉函数。
////			return;
////		for (j = 0; j < sz - i-1; j++)
////		{
////			int n = 0;
////			flag = 0;//假设没有交换赋值为0。
////			while ((arr[j][n] == arr[j+1][n]) && arr[j][n])
////			{
////				n++;
////			}
////			if (arr[j][n] > arr[j+1][n])
////			{
////				temp = arr[j];
////				arr[j] = arr[j + 1];
////				arr[j + 1] = temp;
////				flag = 1;//如果交换一次就赋值为1。
////			}
////		}
////	}
////}
//int main()
//{
//	char *arr[] = { "abcde", "accde", "bcdef", "aaaaabcdef" };//该数组的每个元素保存的都是相应字符串的首地址。
//	my_sort(arr,sizeof(arr)/sizeof(arr[0]));
//	//mysort(arr, sizeof(arr) / sizeof(arr[0]));
//	return 0;
//}

   /*10101100
	   &
   10101011
   10101000
   10100111
   10101100*/
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//char divide(const char *pc, const int len,int k)
//{
//	char *tempc = (char*)malloc( len*sizeof(char));
//	int *number = (int*)malloc(len*sizeof(int));
//	memset(tempc, '\0', len*sizeof(char));
//	memset(number, 0, len*sizeof(int));
//	int i;
//	while (*pc)
//	{
//		i = 0;
//		while (tempc[i])
//		{
//			if (tempc[i] == *pc)
//			{
//				number[i] ++;
//				break;
//			}
//			i++;
//		}
//		if (!tempc[i])
//		{
//			tempc[i] = *pc;
//			number[i]++;
//		}
//		pc++;
//	}
//	i = 0;
//	while(tempc[i])
//	{
//		if (number[i]==k)
//		{
//			printf("%c", tempc[i]);
//			return 0;
//		}
//		i++;
//	}
//	printf("没有找到\n");
//	return 0;
//}
//size_t fond(char*pc, int k)
//{
//	char *temp = pc;
//	size_t arr[256] = { 0 };
//	while (*pc)
//	{
//		arr[*pc]++;
//		pc++;
//	}
//	while (*temp)
//	{
//		if (arr[*temp] == k)
//		{
//			return *temp;
//		}
//		temp++;
//	}
//	return -1;
//}
//int main()
//{
//	char* pc = "abacacd"; 
//	const int len = strlen(pc);
//	int k = 2;
//	int ret = fond(pc,k);
//	printf("%c", ret);
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char arr[5] = "abcde";//有\0
//	char*pc = "abcdef";
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%c", arr[i]);
//	}
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//void bit_set(unsigned char*p_ate, unsigned char posttion, int flag)
//{
//	if ((1<=posttion&&posttion<=8)&&(flag == 1))
//	{
//		*p_ate  = *p_ate | 1 << (posttion - 1);
//	}
//	else if ((1 <= posttion&&posttion <= 8) && (flag == 0))
//	{
//		*p_ate = *p_ate&~(1 << (posttion - 1));
//	}
//}
//int main()
//{
//	unsigned char p = 8;//1111
//	bit_set(&p, 4, 0);
//	printf("%d", p);
//	system("pause");
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//void move(char*p, size_t n)//法二
//{
//	int len = strlen(p);
//	n = n%len;
//	char*temp = (char*)calloc(2 * len + 1, sizeof(char));
//	strcat(strcat(temp, p),p);//strcat的使用条件，目标字符串必须有\0,所以用calloc函数申请
//	for (int i = 0; i < len; i++)
//	{
//		p[i] = temp[len - n + i];
//	}
//	free(temp);
//}
//void revise(char*left, char*right)//法一
//{
//	while (left < right)
//	{
//		char temp;
//		temp = *left;
//		*left++ = *right;
//		*right-- = temp;
//	}
//}
//void move(char*p, size_t n)//法一
//{
//	int len = strlen(p);
//	revise(p, p + len - n - 1);
//	revise(p + len - n,p+len-1);
//	revise(p, p + len - 1);
//}
//int main()
//{
//	char p[] = "abcdefghi";
//	move(p, 3);
//	printf("%s", p);
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//#include<ctype.h>
//#include<assert.h>
//_Bool tmp_flag = 0;//判断字符串转换来的数字是否合法 0表示不合法，1表示合法
//int my_atoi(const char*src)
//{
//	long long ret = 0;
//	int flag = 1;//判断这个字符串转为的数字的正负性。1表示整数，-1表示复数
//	assert(src != NULL);//断言src是否为空指针
//	while (isspace(*src))//跳过前面的空格
//	{
//		src++;
//	}
//	if (*src == '-' || *src == '+')
//	{
//		if (*src == '-')
//			flag = -1;
//		src++;//判断完之后一定要向后偏移一个字节。
//	}
//	while ((*src) && isdigit(*src))//判断字符是不是数字字符
//	{
//		tmp_flag = 1;//如果是数字字符，把tmp_flag赋值为真
//		if (INT_MAX<ret || INT_MIN>ret)//如果转化的结果大于整型最大值或小于整型最新值，就不在往后继续判断，跳出循环
//		{
//			break;
//		}
//		ret = ret * 10 + flag*(*src - '0');//把字符串数字转化为整型
//		src++;//计算完之后，向后偏移一个字节
//	}
//	if (*src)//判断字符串是是否还有非数字字符
//	{
//		tmp_flag = 0;//如果还有非数字字符，把tem_flag赋值为假。
//	}
//	return (int)ret;
//}
//int main()
//{
//	printf("请输入数字字符串：");
//	char pc[20] = { 0 };
//	scanf("%s", pc);
//	int ret = my_atoi(pc);
//	printf("atoi()= %d\n", atoi(pc));
//	if (tmp_flag)//当字符串为合法字符串时，则输出转化后的结果。
//		printf("my_atoi()= %d\n", ret);
//	system("pause");
//	return 0;
//}
////输入一个整数数组，实现一个函数，来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
////所有偶数位于数组的后半部分
//#include<stdio.h>
//#include<assert.h>
//void my_sort(int *left, int*right)
//{
//	assert(left != NULL&&right != NULL);
//	while (left < right)
//	{
//		while (*left % 2 != 0 && left < right)left++;
//		while (*right % 2 == 0 && left < right)right--;
//		int temp = *left;
//		*left = *right;
//		*right = temp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10};
//	int len = sizeof(arr)/sizeof(arr[0])-1;
//	my_sort(arr, arr + len);
//	for (i = 0; i <= len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	system("pause");
//	return 0;
//}
////5.编写函数判断当前的机器大端小端
//#include<stdio.h>
//union  judge
//{
//	int i;
//	char c;
//} temp;
//int JUDGE(union judge *temp)
//{
//	temp->i = 1;
//	return temp->c;
//}
//int main()
//{
//	int ret = JUDGE(&temp);
//	if (ret == 1)
//		printf("Litlle\n");
//	else
//	    printf("Big\n");
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<assert.h>
//#include<string.h>
//#include<windows.h>
//void my_Sort(char**arr, int len)
//{
//	assert(arr != NULL);
//	int i, j;
//	int flag = 1;
//	for (i = 0; i < len; i++)
//	{
//		if (flag == 0)
//			break;
//		flag = 0;
//		for (j = 0; j < len - i; j++)
//		{
//			if (strcmp(arr[j], arr[j + 1])>0)
//			{
//				char*temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				flag = 1;
//			}
//		}
//	}
//}
//int main()
//{
//	char*arr[6] = { "abc", "ade", "efg", "hello", "world", "C++" };
//	//char*arr[5] = { "abc", "Abc", "abc", "abc", "abc" };
//	int len = sizeof(arr) / sizeof(arr[0]) - 1;
//	my_Sort(arr, len);
//	int i;
//	for (i = 0; i <= len; i++)
//	{
//		printf("%s\n", arr[i]);
//	}
//	system("pause");
//	return 0;
//}
////请实现一个函数，把字符串中的每个空格替换成“％20”。例如输入“we are happy.”，则输出“we%20are%20happy.”。 
//#include<stdio.h>
//#include<windows.h>
//void replace(char*arr)
//{
//	while (*arr)
//	{
//		if (*arr == ' ')
//		{
//			printf("%%20");
//			arr++;
//		}
//		printf("%c", *arr);
//		arr++;
//	}
//}
//int main()
//{
//	char arr[20];
//	scanf("%[^\n]", arr);
//	replace(arr);
//	system("pause");
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
////#include<unistd.h>/*#包含<unistd.h>*/
//#include<sys/types.h>/*#包含<sys/types.h>*/
//int main(void)
//{
//	int i;
//	for (i = 0; i<2; i++){
//		fork();
//		printf("-");
//	}
//	return 0;
//}
//#include<stdio.h>
//typedef struct STUDENT
//{
//	int i;
//}stu,*student;
//void*search()
//{
//	int**next;
//	int**next1;
//	if (*next == *next1)
//	{
//		return *next;
//	}
//}
//#include<stdio.h>
//#include<Windows.h>
//
//#define TEMP(x) x*x
//int add()
//{
//	int i = 1 + 2;
//	return;
//}
//int main()
//{
//	/*stu a;
//	const student p = &a;
//	stu b;*/
//	int i = -20;     // 11111111 11111111 11111111  11101100
//	unsigned j = 10; // 00000000 00000000 00000000  00001010
//	//printf("%0x\n", i + j);//数据类型不同得混合运算，总是向能表示最大数据的类型转换
//	//printf("%d\n", 2 / (-2));
//	//printf("%d\n", 2 % (-2));
//	//printf("%d\n", ret);
//	//int*p=&i;
//	////((char*)p)++;
//	//printf("%p\n", &p);
//	//j++;
//	//(++i)++;
//	//(int)j++;
//	//void*pc;
//	//(char*)pc++;
//	//printf("%p\n", &/*((char*)p*/));
//	const volatile bc = 10;
//	int ret = 0;
//	ret = add();
//	printf("%d\n", ret);
//	system("pause");
//}
//#include<stdio.h>
//#define a int[10]
//#define PCHAR char*
//void fun(int num)
//{
//	if (num==0)
//	printf("hehe\n");
//}
//int main()
//{
	/*typedef int* INT[10];
	INT p, p1;
	int *c;
	p[0] = c;
	p1[0] = c;
	char f;
	PCHAR d, g;
	d = &f;
	g = 'c';
	d = "abdef    //hijkl";*/
		//is it a\
//valid comendt
	/*int i = 0;*/
	//printf("%d\n", (++i) + (++i) + (++i));
	//int ret = (++i)+++i+++i;//运算优先级，从右到左所以++i要括起来
//    
//	void(*p)(void);
//	*(int*)&p = (int)fun;
//	p();
//
//	system("pause");
//
//	 
//}
////strncmp函数的模拟实现
//#include<stdio.h>
//#include<assert.h>
//int my_strncmp(const char* str1, const char*str2,int n)
//{
//	assert(str1 != NULL&&str2 != NULL);
//	while (*str1 == *str2&&*str1&&n-- -1 > 0)
//	{
//		str1++;
//		str2++;
//	}
//	return *str1 - *str2;
//	//while (--n)
//	//{
//	//	if (*str1 == *str2&&*str1)
//	//		str1++, str2++;
//	//	else
//	//		return *str1 - *str2;
//	//}
//	//return *str1 - *str2;
//}
//int main()
//{
//	char str1[] = "abcd";
//	char str2[] = "abcdf";
//	printf("%d", my_strncmp(str1, str2, 5));
//	getchar();
//}
////模拟实现strncat 
//#include<stdio.h>
//#include<assert.h>
//#include<string.h>
//char*my_strncat(char*dest, const char*src, int n)
//{
//	assert(dest!=NULL && src != NULL);
//	char*ret = dest;
//	while (*dest)dest++;
//	while (n)
//	{
//		if (!(*dest++ = *src++))
//			return ret;
//		n--;
//	}
//    *dest = '\0';
//	return ret;
//}
//int main()
//{
//	char pc[20] = "abcd";
//	char *pc1 = "efg";
//	strncat(pc, pc1, 2);
//	return 0;
//
//}
////strncmp
//#include<stdio.h>
//#include<assert.h>
//char* my_strncpy(char*dest, const char*src,int n)
//{
//	assert(dest != NULL&&src != NULL);
//	char *ret = dest;
//	while (n--&&(*dest++ = *src++))
//	{
//		;
//	}
//	if (n)
//	while (n--)*dest++ = '\0';
//	return ret;
//}
//int main()
//{
//	char pc[] = "abcd\0???????????";
//	char *str = "efgh\0ab";
//	strncpy(pc, str, 14);
//}
////strstr模拟实现
//#include<stdio.h>
//#include<assert.h>
//char*my_strstr(const char*dest, const char*src)
//{
//	assert(dest != NULL&&src != NULL);
//	const char*dest_temp = NULL;
//	const char*src_temp = NULL;
//	while (*dest)
//	{
//		dest_temp = dest;
//		src_temp = src;
//		while (*src_temp&&*dest_temp&&*src_temp == *dest_temp)
//		{
//			dest_temp++;
//			src_temp++;
//		}
//		if (!*src_temp)
//			return (char*)dest;
//		if (!*dest_temp)
//		{
//			return NULL;
//		}
//		dest++;
//	}
//	return NULL;
//}
//int main()
//{
//	char pcarr[] = "ababcdefgh";
//	char *pc = "gh";
//	printf("%s\n", my_strstr(pcarr, pc));
//	getchar();
//	return 0;
//}
////strrstr
//#include<stdio.h>
//#include<assert.h>
//char*strrstr(const char*dest, const char*src)
//{
//		assert(dest != NULL&&src != NULL);
//		const char*dest_temp = NULL;
//		const char*src_temp = NULL;
//	    char*ret = NULL;
//		while (*dest)
//		{
//			dest_temp = dest;
//			src_temp = src;
//			while (*src_temp&&*dest_temp&&*src_temp == *dest_temp)
//			{
//				dest_temp++;
//				src_temp++;
//			}
//			if (!*src_temp)
//				ret = dest;
//			if (!*dest_temp)
//			{
//				return ret;
//			}
//			dest++;
//		}
//		return ret;
//}
//int main()
//{
//	char pcarr[] = "ababghcdefgbh";
//	char *pc = "gh";
//	printf("%s\n", strrstr(pcarr, pc));
//	getchar();
//	return 0;
//}
//#include<stdio.h>
//void expend(char*s1, char*s2)
//{
//	int i = 0,j = 0;
//	char pc_temp;
//	while (pc_temp = s1[i++])
//	{
//		if (s1[i] == '-')
//		{
//			i++;
//			if (pc_temp < s1[i])
//			{
//				while (pc_temp < s1[i])
//				{
//					s2[j++] = pc_temp++;
//				}
//			}
//			else
//			{
//				s2[j++] = pc_temp;
//				s2[j++] = '-';
//			}
//		}
//		else
//			s2[j++] = pc_temp;
//	}
//}
//int main()
//{
//	char *str1 = "z-d0-9";
//	char s2[20] = { 0 };
//	expend(str1, s2);
//	printf("%s\n", s2);
//	getchar();
//	return 0;
//}