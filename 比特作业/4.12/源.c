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
//	const int n = 123;//����һ��ֻ������n	
//	 //p2 = &n;
//	 p3 = &n;
//	pp2 = &p1;//ȡָ�����p1�ĵ�ַ
//	*pp2 = &n;//pp2��һ�������õõ�n�ĵ�ַ���൱��ָ�����p1�����n�ĵ�ַ
//	*p1 = 10;//��p1�����ã��൱�ڶ�const int n���¸�ֵ
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
/*�ж϶�����λ�е�һ��һ�ڵڼ�λ*/
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
/*������λ��żλ�Ľ���*/
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
///*�ж�������������λ��ͬ�ĸ���*/
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()     
//{
//	int n1, n2;
//	printf("please two number>:");
//	scanf("%d%d", &n1, &n2);
//	int count = 0;
//	int temp = n1^n2;
//	while (temp)//����ѭ����������temp��������1�ĸ���
//	{
////		if (temp & 1)//�жϵ�һλ�Ƿ�Ϊ1
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
/*������λ������*/
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//size_t reverse(size_t value)
//{
//	size_t n = 0 ;
//	int j ;
//	for (j=1; j <= 32;j++)
//	{
//		n = ((value & 1)/*ÿ��ȡ��value�ĵ�һλ*/ | (n<< 1)/*��֤�տ�ʼ�ĵ�һλ���Ƶ���32λ��ʵ�ֶ����Ƶ�����*/);
//		value = value >> 1;//�����Ѿ�������Ķ����Ƶ�λ*/
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
//	while (*dest)//����ѭ�����������ո�֮�������
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
//		while((p < temp)&&(0 != *p % 2))//p < temp��һ������Ϊ�����������ȫ��������ż���ͻ�Խ����ʡ�
//		{
//			p++;
//		}
//		while ((p < temp) && (0== *temp % 2))//p < temp��һ������Ϊ�����������ȫ��������ż���ͻ�Խ����ʡ�
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
//	printf("�������鳤��n����");
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
//              *list = j;//����������ָ�����������Ϣ��������������ҵ������������������
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
//       *list = -1;//����Ҳ�������-1����������
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
//		printf("����\n");
//	}
//	else
//	{
//		printf("��\n");
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
//	printf("%d\n", 0xffffff80);//Ϊch�Ĳ���
//	printf("%d\n", ch);
//	printf("%u\n", ch);
//	printf("%u\n", 0xffffff80);
//	printf("%d\n", num);
//	printf("%d\n",i);
//	printf("%d\n", 0xffff8000);//Ϊi�Ĳ���
//	printf("%d %d", sizeof(short),sizeof(short int));
//	system("Pause");
//	return 0;
//}
//�ܽ�%d��ȡ���������ʱ��Ҫ�����λ�����жϣ����Ϊ1���ԭ���ڶ�ȡ�����Ϊ0ԭ����ڲ��롣
//%u��ȡ���������ʱ���ö����λ�����жϣ�ֱ�Ӷ�ȡ��
//#include<stdio.h>
//int main()
//{
//	int a = 0x7fffffff;
//	int b = a + 1;
//	printf("%d %d", a+2,b);
//	system("pause");
//	return 0;
//}
//һ�����͵��������1����������͵���С����0x80000000������һ������1�����͵�����С���������������ȥ1��
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
// while(i--)�൱��while��i��{ i--......}.
//#include<stdio.h>
//int main()
//{
//	int a = 2;
//	int b = 4;
//	int ret = /*b + ((a-b) >> 1)*/(-2)>>1;
//	printf("%d", ret);
//	system("pause");
//}
//ָ����ϰ��
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
//		char arr[7];//��һ�ֽڶ��롣
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
////��ӡʮ���Ƶ�ÿһλ��
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
////�ݹ�д���ַ���������
//#include<stdio.h>
//#include<string.h>
//int i = 0;//������̬���������ڸ����ݹ�ĵ��á�
//void reverse_string(char *src)
//{
//	if (src < src + i)//��ǰ���ָ��src�ĵ�ַ���ڵ��ں����ָ�루src+i)�ĵ�ַ�ݹ���ý�����
//	{
//		*(src) = *(src) ^ *(src + i);
//		*(src + i) = *(src) ^ *(src + i);
//		*(src) = *(src) ^ *(src + i);//�����������������ַ��Ľ�����
//		i -= 2;//***ע��***��Ϊÿ����ߵ�ָ��������һ��������i�����2�����൱����ߵ�ָ������һ����
//		reverse_string(src + 1);
//	}
//}
////void reverse(char arr[])//�������ַ���������ת��ɵ����ַ��������ã�����abcdefȻ������bcde\0Ȼ��cd\0\0��
////{
////	char temp = arr[0];//�����ַ����ĵ�һ���ַ�
////	int len = strlen(arr);//����ַ����ĳ���
////	arr[0] = arr[len - 1];//�����һ���ַ����ŵ���һ���ַ�����λ�á�
////	arr[len - 1] = '\0';//�����һ���ַ���λ�÷Ÿ�\0��
////	if (strlen(arr + 1) > 1)//�����һ���ַ����ĳ���Ϊ2�������ϣ������ݹ顣
////		reverse(arr + 1);
////	arr[len - 1] = temp;//�ݹ�����������汣��ĵ�һ���ַ��ŵ���Ӧ�ַ��������һ��λ�á�
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
//�ݹ�ʵ��k��n�η���
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
//	printf("����������n�ʹη�k������");
//	scanf("%d%d", &n, &k);
//	printf("%d\n", MY_power(n, k));
//	system("pause");
//	return 0;
//}
////��n�Ľ׳ˡ�
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int factorial(size_t n)
//{
//	if (n > 1)
//		return n*factorial(n-1);//���д��n*factorial(--n)��n��--������n=3,��ͬ��2*factorial(2).
//	return 1;
//}
//int main()
//{
//	int n;
//	int ret = 1;
//	printf("����n>:");
//	scanf("%d", &n);
//	int i = n;
//	while (i >= 1)//ѭ����д����
//	{
//		ret *= i--;
//	}
//	printf("%d\n", ret);
//	printf("%d\n",factorial(n));
//	system("pause");
//	return 0;
//}
////���n��쳲�������
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
//	printf("������Ҫ���n>:");
//	scanf("%d", &n);
//	printf("%d\n", search(n));
//	printf("%d\n", search1(n));
//	system("pause");
//	return 0;
//}
//*******//ģ��ʵ��printf������
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
////���ַ���������
//#include<stdio.h>
//void my_sort(char*arr[], int sz)//���ÿ⺯����
//{
//	int i, j;
//	int flag = 1;
//	for ( i = 0; i < sz-1; i++)
//	{
//		char*temp;
//		if (flag == 0)//���ĳ��ѭ��һ��Ҳû�н�����˵�����Ѿ��ĺ����ˣ�ѭ�����ü�����ȥ��ֱ�ӽ�����������
//			return;
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			flag = 0;//����û�н�����ֵΪ0��
//			if (strcmp( arr[j], arr[j+1] )>0)
//			{
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				flag = 1;//�������һ�ξ͸�ֵΪ1��
//			}
//		}
//	}
//}
////void mysort(char*arr[], int sz)//û�е��ÿ⺯��strcmp(��Ŀû��Ҫ��Ļ����������ÿ⺯����
////{
////	int i, j;
////	int flag = 1;
////	for (i = 0; i < sz - 1; i++)
////	{
////		char*temp;
////		if (flag == 0)//���ĳ��ѭ��һ��Ҳû�н�����˵�����Ѿ��ĺ����ˣ�ѭ�����ü�����ȥ��ֱ�ӽ�����������
////			return;
////		for (j = 0; j < sz - i-1; j++)
////		{
////			int n = 0;
////			flag = 0;//����û�н�����ֵΪ0��
////			while ((arr[j][n] == arr[j+1][n]) && arr[j][n])
////			{
////				n++;
////			}
////			if (arr[j][n] > arr[j+1][n])
////			{
////				temp = arr[j];
////				arr[j] = arr[j + 1];
////				arr[j + 1] = temp;
////				flag = 1;//�������һ�ξ͸�ֵΪ1��
////			}
////		}
////	}
////}
//int main()
//{
//	char *arr[] = { "abcde", "accde", "bcdef", "aaaaabcdef" };//�������ÿ��Ԫ�ر���Ķ�����Ӧ�ַ������׵�ַ��
//	my_sort(arr,sizeof(arr)/sizeof(arr[0]));
//	//mysort(arr, sizeof(arr) / sizeof(arr[0]));
//	return 0;
//}
////�󼸸�����ƽ��ֵ��
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
//����������е����ֵ��
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
//����main����ʵ�ּ򵥼�������
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
//		printf("��������\n");
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
//int drink_sum(int n)//�ݹ�
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
//	printf("������Ҫ������Ǯ����ˮ����");
//	int n;
//	scanf_s("%d", &n);
//	int sum = n;
//	int temp = n;
//	while (temp > 1)
//	{
//		 sum = sum + temp / 2;
//		 temp = temp / 2 + temp % 2;
//	}
//	printf("����Ժ�%dƿ��ˮ\n", sum);
//	system("pause");
//	return 0;
//}
////�ҳ�����������ֻ����һ�ε����֡�
//#include<stdio.h>
//void divide(int arr[], int sz)
//{
//	int i;
//	int temp[3] = { arr[0] };//����3����ʱ������
//	for (i = 1; i <sz; i++)
//	{
//		temp[0] ^= arr[i];//������������������һ�ε��������Ľ����
//	}
//	 temp[0] = temp[0] - (temp[0]&(temp[0] - 1));//(temp[0]&(temp[0] - 1)ȥ��temp[0]�������еĵ�һ��1��Ȼ����temp[0]��ȥ�������͵õ�����������Ƶĵ�һ��1��
//	for (i = 0; i <sz; i++)//������������һ���������Ľ�����ҵ���һ��1���������ֵ�ÿһ������λ&���ﵽ���顣
//	{                    //�����ͱ�֤��ÿ����������ֶ�ֻ��һ�������ǳ���һ�Σ���������������־��ǳɶԳ��֡�  
//		if (temp[0]&arr[i])//if else������ֻ����һ�ε�����Ϊ�������顣
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
////���ַ���������
//#include<stdio.h>
//void my_sort(char*arr[], int sz)//���ÿ⺯����
//{
//	int i, j;
//	int flag = 1;
//	for ( i = 0; i < sz-1; i++)
//	{
//		char*temp;
//		if (flag == 0)//���ĳ��ѭ��һ��Ҳû�н�����˵�����Ѿ��ĺ����ˣ�ѭ�����ü�����ȥ��ֱ�ӽ�����������
//			return;
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			flag = 0;//����û�н�����ֵΪ0��
//			if (strcmp( arr[j], arr[j+1] )>0)
//			{
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				flag = 1;//�������һ�ξ͸�ֵΪ1��
//			}
//		}
//	}
//}
////void mysort(char*arr[], int sz)//û�е��ÿ⺯��strcmp(��Ŀû��Ҫ��Ļ����������ÿ⺯����
////{
////	int i, j;
////	int flag = 1;
////	for (i = 0; i < sz - 1; i++)
////	{
////		char*temp;
////		if (flag == 0)//���ĳ��ѭ��һ��Ҳû�н�����˵�����Ѿ��ĺ����ˣ�ѭ�����ü�����ȥ��ֱ�ӽ�����������
////			return;
////		for (j = 0; j < sz - i-1; j++)
////		{
////			int n = 0;
////			flag = 0;//����û�н�����ֵΪ0��
////			while ((arr[j][n] == arr[j+1][n]) && arr[j][n])
////			{
////				n++;
////			}
////			if (arr[j][n] > arr[j+1][n])
////			{
////				temp = arr[j];
////				arr[j] = arr[j + 1];
////				arr[j + 1] = temp;
////				flag = 1;//�������һ�ξ͸�ֵΪ1��
////			}
////		}
////	}
////}
//int main()
//{
//	char *arr[] = { "abcde", "accde", "bcdef", "aaaaabcdef" };//�������ÿ��Ԫ�ر���Ķ�����Ӧ�ַ������׵�ַ��
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
//	printf("û���ҵ�\n");
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
//	char arr[5] = "abcde";//��\0
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
//void move(char*p, size_t n)//����
//{
//	int len = strlen(p);
//	n = n%len;
//	char*temp = (char*)calloc(2 * len + 1, sizeof(char));
//	strcat(strcat(temp, p),p);//strcat��ʹ��������Ŀ���ַ���������\0,������calloc��������
//	for (int i = 0; i < len; i++)
//	{
//		p[i] = temp[len - n + i];
//	}
//	free(temp);
//}
//void revise(char*left, char*right)//��һ
//{
//	while (left < right)
//	{
//		char temp;
//		temp = *left;
//		*left++ = *right;
//		*right-- = temp;
//	}
//}
//void move(char*p, size_t n)//��һ
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
//_Bool tmp_flag = 0;//�ж��ַ���ת�����������Ƿ�Ϸ� 0��ʾ���Ϸ���1��ʾ�Ϸ�
//int my_atoi(const char*src)
//{
//	long long ret = 0;
//	int flag = 1;//�ж�����ַ���תΪ�����ֵ������ԡ�1��ʾ������-1��ʾ����
//	assert(src != NULL);//����src�Ƿ�Ϊ��ָ��
//	while (isspace(*src))//����ǰ��Ŀո�
//	{
//		src++;
//	}
//	if (*src == '-' || *src == '+')
//	{
//		if (*src == '-')
//			flag = -1;
//		src++;//�ж���֮��һ��Ҫ���ƫ��һ���ֽڡ�
//	}
//	while ((*src) && isdigit(*src))//�ж��ַ��ǲ��������ַ�
//	{
//		tmp_flag = 1;//����������ַ�����tmp_flag��ֵΪ��
//		if (INT_MAX<ret || INT_MIN>ret)//���ת���Ľ�������������ֵ��С����������ֵ���Ͳ�����������жϣ�����ѭ��
//		{
//			break;
//		}
//		ret = ret * 10 + flag*(*src - '0');//���ַ�������ת��Ϊ����
//		src++;//������֮�����ƫ��һ���ֽ�
//	}
//	if (*src)//�ж��ַ������Ƿ��з������ַ�
//	{
//		tmp_flag = 0;//������з������ַ�����tem_flag��ֵΪ�١�
//	}
//	return (int)ret;
//}
//int main()
//{
//	printf("�����������ַ�����");
//	char pc[20] = { 0 };
//	scanf("%s", pc);
//	int ret = my_atoi(pc);
//	printf("atoi()= %d\n", atoi(pc));
//	if (tmp_flag)//���ַ���Ϊ�Ϸ��ַ���ʱ�������ת����Ľ����
//		printf("my_atoi()= %d\n", ret);
//	system("pause");
//	return 0;
//}
////����һ���������飬ʵ��һ�������������������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
////����ż��λ������ĺ�벿��
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
////5.��д�����жϵ�ǰ�Ļ������С��
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
////��ʵ��һ�����������ַ����е�ÿ���ո��滻�ɡ���20�����������롰we are happy.�����������we%20are%20happy.���� 
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
////#include<unistd.h>/*#����<unistd.h>*/
//#include<sys/types.h>/*#����<sys/types.h>*/
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
//	//printf("%0x\n", i + j);//�������Ͳ�ͬ�û�����㣬�������ܱ�ʾ������ݵ�����ת��
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
	//int ret = (++i)+++i+++i;//�������ȼ������ҵ�������++iҪ������
//    
//	void(*p)(void);
//	*(int*)&p = (int)fun;
//	p();
//
//	system("pause");
//
//	 
//}
////strncmp������ģ��ʵ��
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
////ģ��ʵ��strncat 
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
////strstrģ��ʵ��
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