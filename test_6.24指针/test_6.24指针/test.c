#define _crt_secure_no_warnings 1
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] =  &arr ;//(*p)是一个指针，名为p，去掉指针名字就是类型int [10],说明它有能力指向一个有10个
//	                     //元素的数组，每个元素为int型。
//	// 不能用arr赋值，它在这里只代表一个int元素，不是数组，但是该指针指向数组，所以会类型不匹配，应该是&arr。         
//	int(*arr1[10])[10] = { p };//arr1先跟[10]结合，说明是一个有10个元素数组，去掉这个数组的名字和大小
//	                         //就是数组元素的类型为int(*)[10],说明该数组的10个元素，每个元素是一个指针，
//	                         //该指针有能力指向一个含有10个int元素的数组。
//	int(*(* p2)[10])[10] = &arr1;//(*p2)是一个指针，名为p2，去掉指针的名字，就是指针的类型int(*[10])[10]
//	//(*[10])，[10]的优先级高，说明该指针指向含有10个元素的数组，每个元素又是一个指针，这个指针又有能力
//	//指向一个有10个元素数组，该数组的每个元素又是int型。
//	int(**p4[10])[10] = { &p };//p4是一个数组，名为p4，去掉这个数组的名字和大小，就是数组元素的类型
//	//int(**)[10] 元素类型是一个二级指针，二级指针有能力指向一个一级指针，这个一级指针有能力指向
//	//含有10个元素的数组，每个元素又是int型。
//	int(*(**p3)[10])[10] = &p2;//p3是一个二级指针，名为p3，去掉这个指针的名字，就是指针的类型
//	//int(*[10])[10] 该类型就是说明这个指针能指向一个有10元素数组，每个元素又是一个指针变量，
//	//这个指针变量又能指向一个含有10元素的数组，每个元素是int型。
//}
//#include<stdio.h>
//extern char*arr3;//对“辅助.c"文件引用声明，对数组arr3这块空间以char*的形式访问。
//               //相当于把数组arr的前四个字节的内容当成char*的地址。
//extern char pc[];//对“辅助.c"文件引用声明，对指针变量pc这块空间以char型数组进行访问。
//                //相当于把指针变量四个字节中存储的字符地址当成char字符数组处理。
//int main()
//{
//	/*void p1(int, int);
//	void p2(int, int);
//	void p3(int, int);
//	void p4(int, int);
//	void p5(int, int);*/
//	void(*arr[5])(int, int);//= { p1, p2, p3, p4, p5 };
//	void(*(*p)[5])(int, int) = &arr;
//	void(*(*arr1[10])[5])(int, int) = { p };//p是一级指针。
//	void(*(**arr2[10])[5])(int, int) = { &p };//&p是二级指针。
//	printf("%p\n", arr3);//ox64636261;因为它的前四个字节内容为abcd
//	printf("%s\n", &arr3);
//	printf("\n%s\n", (char*)(*(int*)pc));//char*pc = "abcdef";pc[]={12 53 56 35}（12535635是表示字符a的地址。
//    //pc是数组名，代表首元素的地址，（12这个元素的地址（类型是char*)),把它的类型强制类型转换为int*
//	//对他解引用时可以访问四个字节的内容，也就是12535635，然后把整型数字12535635强制类型转换为char*指针
//	//然后可以输出整个字符串。
//	printf("\n%s\n",(*(char**)pc));//pc是数组名，它代表数组首元素地址,（12这个元素的地址（类型是char*)),
//	//然后把它强制类型转换二级字符指针，因为二级指针存放的是地址，所以解引用一次可以访问四个字节的内容
//	//也就是12535635，解引用一次之后变成一级的字符指针，然后可以输出整个字符串。
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
//	(*((void(*)(void))0))();//把0强制类型转换成一个函数地址，该函数的参数为（void），返回类型是void。
//	int(*pfun(const int, int(*)(int，int)))(int, int);
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
//	printf("输入两个操作数：");
//	int x, y;
//	scanf("%d%d", &x, &y);
//	int ret = arr(x, y);
//	printf("运行结果为：%d\n", ret);
//}
//int main()
//{
//	int(*arr[5])(int, int) = { NULL,add, sub, mul, div };
//	int input = 0;
//	do
//	{
//		mean();
//		printf("请选择：");
//		scanf("%d", &input);
//		if ((input > 4) || (input < 0))
//		{
//			printf("选择错误\n");
//		}
//		else if (!input)
//			exit(0);
//		else
//			pfun(arr[input]);
//	} while (input);
//	system("pause");
//	return 0;
//}
