#define _crt_secure_no_warnings 1
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] =  &arr ;//(*p)��һ��ָ�룬��Ϊp��ȥ��ָ�����־�������int [10],˵����������ָ��һ����10��
//	                     //Ԫ�ص����飬ÿ��Ԫ��Ϊint�͡�
//	// ������arr��ֵ����������ֻ����һ��intԪ�أ��������飬���Ǹ�ָ��ָ�����飬���Ի����Ͳ�ƥ�䣬Ӧ����&arr��         
//	int(*arr1[10])[10] = { p };//arr1�ȸ�[10]��ϣ�˵����һ����10��Ԫ�����飬ȥ�������������ֺʹ�С
//	                         //��������Ԫ�ص�����Ϊint(*)[10],˵���������10��Ԫ�أ�ÿ��Ԫ����һ��ָ�룬
//	                         //��ָ��������ָ��һ������10��intԪ�ص����顣
//	int(*(* p2)[10])[10] = &arr1;//(*p2)��һ��ָ�룬��Ϊp2��ȥ��ָ������֣�����ָ�������int(*[10])[10]
//	//(*[10])��[10]�����ȼ��ߣ�˵����ָ��ָ����10��Ԫ�ص����飬ÿ��Ԫ������һ��ָ�룬���ָ����������
//	//ָ��һ����10��Ԫ�����飬�������ÿ��Ԫ������int�͡�
//	int(**p4[10])[10] = { &p };//p4��һ�����飬��Ϊp4��ȥ�������������ֺʹ�С����������Ԫ�ص�����
//	//int(**)[10] Ԫ��������һ������ָ�룬����ָ��������ָ��һ��һ��ָ�룬���һ��ָ��������ָ��
//	//����10��Ԫ�ص����飬ÿ��Ԫ������int�͡�
//	int(*(**p3)[10])[10] = &p2;//p3��һ������ָ�룬��Ϊp3��ȥ�����ָ������֣�����ָ�������
//	//int(*[10])[10] �����;���˵�����ָ����ָ��һ����10Ԫ�����飬ÿ��Ԫ������һ��ָ�������
//	//���ָ���������ָ��һ������10Ԫ�ص����飬ÿ��Ԫ����int�͡�
//}
//#include<stdio.h>
//extern char*arr3;//�ԡ�����.c"�ļ�����������������arr3���ռ���char*����ʽ���ʡ�
//               //�൱�ڰ�����arr��ǰ�ĸ��ֽڵ����ݵ���char*�ĵ�ַ��
//extern char pc[];//�ԡ�����.c"�ļ�������������ָ�����pc���ռ���char��������з��ʡ�
//                //�൱�ڰ�ָ������ĸ��ֽ��д洢���ַ���ַ����char�ַ����鴦��
//int main()
//{
//	/*void p1(int, int);
//	void p2(int, int);
//	void p3(int, int);
//	void p4(int, int);
//	void p5(int, int);*/
//	void(*arr[5])(int, int);//= { p1, p2, p3, p4, p5 };
//	void(*(*p)[5])(int, int) = &arr;
//	void(*(*arr1[10])[5])(int, int) = { p };//p��һ��ָ�롣
//	void(*(**arr2[10])[5])(int, int) = { &p };//&p�Ƕ���ָ�롣
//	printf("%p\n", arr3);//ox64636261;��Ϊ����ǰ�ĸ��ֽ�����Ϊabcd
//	printf("%s\n", &arr3);
//	printf("\n%s\n", (char*)(*(int*)pc));//char*pc = "abcdef";pc[]={12 53 56 35}��12535635�Ǳ�ʾ�ַ�a�ĵ�ַ��
//    //pc����������������Ԫ�صĵ�ַ����12���Ԫ�صĵ�ַ��������char*)),����������ǿ������ת��Ϊint*
//	//����������ʱ���Է����ĸ��ֽڵ����ݣ�Ҳ����12535635��Ȼ�����������12535635ǿ������ת��Ϊchar*ָ��
//	//Ȼ�������������ַ�����
//	printf("\n%s\n",(*(char**)pc));//pc����������������������Ԫ�ص�ַ,��12���Ԫ�صĵ�ַ��������char*)),
//	//Ȼ�����ǿ������ת�������ַ�ָ�룬��Ϊ����ָ���ŵ��ǵ�ַ�����Խ�����һ�ο��Է����ĸ��ֽڵ�����
//	//Ҳ����12535635��������һ��֮����һ�����ַ�ָ�룬Ȼ�������������ַ�����
//	system("pause");
//}
//
//
//
//#include<stdio.h>
//typedef int*(*p1)[10];
//typedef int(*pfun1)(int, int);
//int main()
//{
//	//   int p;
//	//(int*)p;
//	//(p1)p;
//	(*((void(*)(void))0))();//��0ǿ������ת����һ��������ַ���ú����Ĳ���Ϊ��void��������������void��
//	int(*pfun(const int, int(*)(int��int)))(int, int);
//	/*pfun1 pufun(const int, pfun1);*/
//}


//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//struct studen
//{
//	char name[10];
//	int num;
//};
//int comper_struct(const void *p1, const void *p2)
//{
//	return ((struct studen *)p1)->num - ((struct studen *)p2)->num;
//}
//int comper_struct_pc(const void *p1, const void *p2)
//{
//	return (strcmp(((struct studen *)p1)->name , ((struct studen *)p2)->name));
//}
//int comper_int(const void* s1, const void* s2)
//{
//	return *(int*)s1 - *(int*)s2;
//}
//int comper_pc(const void*str1, const void*str2)
//{
//	return strcmp(*(char**)str1, *(char**)str2);
//}
//void my_sqort(void*base,size_t count, size_t widegh, int(*comper)(const void*p1, const void*p2))
//{
//	size_t i, j;
//	for (i = 0; i < count - 1; i++)
//	{
//		for (j = 0; j < count - i - 1; j++)
//		{
//			if (comper(((char*)base + j*widegh), ((char*)base + (j + 1)*widegh))>0)
//			{
//				size_t k;
//				for (k = 0; k < widegh; k++)
//				{
//					char temp;
//					temp = *((char*)base + k + j*widegh);
//					*((char*)base + k+j*widegh) = *((char*)base +(j+1)* widegh + k);
//					*((char*)base + (j + 1)* widegh + k) = temp;
//				}
//			}
//		}
//	}
//}
//int main()
//{
//	 struct studen stu[3] = { { "gbcd", 12 }, { "abcd", 78 }, { "dec", 1 } };
//	int arr3[10] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
//	char *arr[3] = { "abcdef", "gzgzef", "aaaaa" };
//	char *arr1[3] = { "abcdef", "gzgzef", "aaaaa" };
//	my_sqort(arr, 3, sizeof(arr[0]), comper_pc);
//	qsort(arr1, 3, sizeof(arr1[0]), comper_pc);
//	my_sqort(arr3, 10, sizeof(arr3[0]), comper_int);
//	//qsort(arr3, 10, sizeof(arr3[0]), comper_int);
//	//qsort(stu, 3, sizeof(stu[0]), comper_struct);
//	//my_sqort(stu, 3, sizeof(stu[0]), comper_struct);
//	my_sqort(stu, 3, sizeof(stu[0]), comper_struct_pc);
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//void mean()
//{
//	printf("******************************\n");
//	printf("*******1.add  2.sub **********\n");
//	printf("*******3.mul  4.div *********\n");
//	printf("*******    0.exit   *********\n");
//}
//void pfun(int(*arr)(int, int))
//{
//	printf("����������������");
//	int x, y;
//	scanf("%d%d", &x, &y);
//	int ret = arr(x, y);
//	printf("���н��Ϊ��%d\n", ret);
//}
//int main()
//{
//	int(*arr[5])(int, int) = { NULL,add, sub, mul, div };
//	int input = 0;
//	do
//	{
//		mean();
//		printf("��ѡ��");
//		scanf("%d", &input);
//		if ((input > 4) || (input < 0))
//		{
//			printf("ѡ�����\n");
//		}
//		else if (!input)
//			exit(0);
//		else
//			pfun(arr[input]);
//	} while (input);
//	system("pause");
//	return 0;
//}
