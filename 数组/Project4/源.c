//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//int main()
//{
//	int count = 0;
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch == '{')
//		{
//			count++;
//		}
//		else if (ch == '}')
//		{
//			if (count > 0)
//				count--;
//			else if (count == 0)
//			{
//				printf("��ƥ��\n");
//				return 0;
//			}
//		}
//	}
////}
//int main()
//{
//	extern int Add(int, int);//����
//	extern int g_val;
//	int a = 10;
//	int b = 20;
//	int ret = Add(a, b);
//	printf("%d\n", ret);
//	printf("%d\n", g_val);
//	/*printf("%d\n", num);*/
//	return 0;
//}
////
//int main()
//{
//	int arr[10];
//	arr[0] = 1;
//	int arr[10];
//	int i = 0;
//	for (i = 0; i<10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	char arr[3] = { 'a', 98, 'c' };
//	char arr1[] = { 'a', 'b', 'c' };
//	char arr2[] = "abc";
//	printf("%d\n", sizeof(arr1));//3
//	printf("%d\n", sizeof(arr2));//4
//
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	/*char *p = "abcdef";
//	char arr[] = "abcdef";
//	char arr2[] = {'a','b','c','d','e','f'};*/
//
//	printf("%s\n", p);//
//	printf("%s\n", arr);//
//	printf("%d\n", sizeof(p));//4 1 7 
//	printf("%d\n", sizeof(arr));//7 
//	printf("%d\n", sizeof(arr2));//6
//
//	printf("%d\n", strlen(p));//6
//	printf("%d\n", strlen(arr));//6
//	printf("%d\n", strlen(arr2));//6,X
//	char arr[] = "abc\0def";
//	printf("%s\n", arr);
//	printf("%d\n", sizeof(arr));
//	return 0;
//}
//
//#include "stdio.h"
//int main()
//{
//	char ch1[]= { 'a','b','c','\0' };
//
//	int i=0;
//	/*while (ch1 != '\n')*/
//  /*  {*/
//	for (i = 0; i < 3; i++)
//		printf("%c\n", ch1[i]);
//
//	/*}*/
//	
//
//	system("pause");
//	return 0;
//}
//#include"stdio.h"
//int main()
//{
	///*int arr[3][4] = { 0 };
	//int*p = arr;
	//int i=0;
	//for (p = arr; p < arr[0] + 12; p++)
	//	*p = i++;*/
	//double a[] = { 1.0, 2.0, 3.0, 4.0 };
	//printf("%d\n", sizeof(a + 0));//��ʾ����a[0]�ĵ�ַ
	//printf("%d\n", sizeof(a));//�������������
	//printf("%d\n", sizeof(*a));//Ԫ��a[1]
	//printf("%d\n", sizeof(a[1]));//Ԫ��
	//printf("%d\n", sizeof(&a + 1));//&a+1��ʾ��ַ
	//printf("%d\n", sizeof(&a[0]));//��ʾ��ַ
	//printf("%d\n", sizeof(&a[0] + 1));//��ַ
	//printf("%d\n", sizeof(&a[0]));//��ַ
	//char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	//printf("%d\n", sizeof(arr));//��������
	//printf("%d\n", sizeof(arr + 0));//a[0]�ĵ�ַ
	//printf("%d\n", sizeof(*arr));//Ԫ��a[1]
	//printf("%d\n", sizeof(arr[1]));//1
	//printf("%d\n", sizeof(&arr));//4
	//printf("%d\n", sizeof(&arr + 1));//4
	//printf("%d\n", sizeof(&arr[0] + 1));//4
	//char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	//printf("%d\n", strlen(arr));//�����������һ��Ԫ�صĵ�ַ ���ֵ����������'\0'���ܽ���
	//printf("%d\n", strlen(arr + 0)); // a[0]�ĵ�ַ ���ֵ����������'\0'���ܽ���
	//printf("%d\n", strlen(*arr)); //��������Ϊ��ַ
    //printf("%d\n", strlen(arr[1]));//��������Ϊ��ַ
	//printf("%d\n", strlen(&arr)); //ȡ������������ĵ�ַ
	//printf("%d\n", strlen(&arr + 1));//���������������һ����ַ
	//printf("%d\n", strlen(&arr[0] + 1));//b�ĵ�ַ
	//char *p = "abcdef";
	//printf("%p\n%p\n", p, &p);//ֵ��һ����һ����a�ĵ�ַ��һ����ָ������ĵ�ַ��ע������������ȡ�������ĵ�ַ
	//printf("%p\n%p", p, &p+1);//p��a�ĵ�ַ&p��ָ�����p�ĵ�ַ
	//printf("%d\n", sizeof(p));//4
	//printf("%d\n", sizeof(p + 1));//4
	//printf("%d\n", sizeof(*p)); //1
	//printf("%d\n", sizeof(p[0]));//1
	//printf("%d\n", sizeof(&p));//4
	//printf("%d\n", sizeof(&p + 1));//4
	//printf("%d\n", sizeof(&p[0] + 1));//4
	//printf("%d\n", strlen(p));//6
	//printf("%d\n", strlen(p + 1));//5
	////printf("%d\n", strlen(*p));//
	////printf("%d\n", strlen(p[0]));//
	//printf("%d\n", strlen(&p));//��ȷ��
	//printf("%d\n", strlen(&p + 1));//��ȷ��
	//printf("%d\n", strlen(&p[0] + 1));//5
	//int a[3][4] = { 0 };
	//int b[3] = { 1, 2 };
	//printf("%d\n", sizeof(a)); //48
	//printf("%d\n", sizeof(&a)); //4��ȡ���Ƕ�ά����ĵ�ַ����Ҳ�ǵ�ַ������32λƽ̨����32
	//printf("%d\n", sizeof(b)); //12
	//printf("%d\n", sizeof(&b)); //4��ȡ����һά����ĵ�ַ����Ҳ�ǵ�ַ������32λƽ̨����32
	//printf("%d\n", sizeof(a[0][0])); //4
	//printf("%d\n", sizeof(a[0]));//16��һά������������������������飬��ͼƬcsdn�ļ������
	//printf("%d\n", sizeof(a[0] + 1));//4
	//printf("%d\n", sizeof(a + 1));//4��a���ڲ��ǵ�������������Խ���Ϊһά���飬
	//                            //��ʾ��0�еĵ�ַ����һ��ʾ�ڶ���Ԫ�صĵ�ַ��
	//printf("%d\n", sizeof(&a[0] + 1));//4
	//printf("%d\n", sizeof(*a));//16����ά����û�е�������������Խ���Ϊһά���飬
	//                         //��ʾ��0�еĵ�ַ���Ե�0�еĵ�ַ���н����ÿ��Է�����������
	//printf("%d\n", sizeof(a[3]));//16��һά������������������������飬��ͼƬcsdn�ļ������
	//	system("pause");
	//	return 0;
	//}
//#include"stdio.h"
//int main()
//{
//	int A, B, C, D, E;
//	for (A = 1; A <= 5; A++)
//	for (B = 1; B <= 5; B++)
//	for (C = 1; C <= 5; C++)
//		for (D = 1; D <= 5; D++)
//		for (E = 1; E <= 5; E++)
//		{
//		if ((A == 3 && B != 1) || (A == 1 && E != 4))
//		if ((B == 2 && E != 4) || (B == 1 && A != 3))
//		if ((C == 1 && D != 2) || (C == 5 && D != 3))
//		if ((D == 2 && C != 1) || (D == 3 && C != 5))
//		if ((E == 4 && A != 1) || (E == 4 && B != 2))
//			printf("%d%d%d%d%d\n", A, B, C, D, E);
//		}
//
//	system("pause");
//	return 0;
//}
//#include"stdio.h"
//int main()
//{
//	int A, B, C, D;
//	for (A = 0; A <= 1; A++)
//	{
//		if (A == 1)
//		{
//			for (B = 0; B <= 1; B++)
//			{
//				if (B == 1)
//				{
//					C = 0;
//					D = 1;
//					printf("A˵�������\n");
//					printf("B˵�������\n");
//					printf("C˵���Ǽٵ�\n");
//					printf("D˵�������\n");
//				
//				}
//				else if (B==0)
//				{
//					C = 1;
//					D = 0;
//				}
//			}
//			
//		}
//		else if(A==0)
//		{
//			B = 1;
//			C = 0;
//			D = 1;
//		}
//	}
//
//	char killer;//�����ַ����������ַ�����ASC���ֵ���м�1
//	for (killer = 'A'; killer <='D';killer++)//killerÿ�μ�1������һ����ĸ����ٷ�
//	if (((killer != 'A')+ (killer == 'C') + (killer == 'D') +( killer != 'D')) == 3)//��֤������˵�������
//		printf("killter=%c\n",killer);
//
//	
//	system("pause");
//	return 0;
//	
//}
#include"stdio.h"
int main()
{
	int A, B, C, D, E;
	for (A = 1; A <= 5;A++)
	for (B = 1; B <=5;B++)
	for (C = 1; C <= 5;C++)
	for (D = 1; D <= 5;D++)
	for (E = 1; E <= 5; E++)
	{
		if (((B == 1) + (A == 3) == 1) && ((B == 2) + (E == 4) == 1) && ((C == 1) + (D == 2) == 1)
			&& ((C == 5) + (D == 3) == 1) && ((E == 4) + (A == 1) == 1))
			printf("%d %d %d %d %d\n", A, B, C, D, E);
	}
	system("pause");
	return 0;
}