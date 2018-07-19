#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//void sort(int arr[], int sz)
//{
//	int i, j;
//	int temp;
//	int flag = 1;
//	for (i = 0; i < sz; i++)
//	{
//		if (flag == 0)
//			return 0;
//		for (j = 0; j < sz-i-1; j++)
//		{
//			flag = 0;
//			if (arr[j] < arr[j+1])
//			{
//				temp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = temp;
//				flag++;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1, 3, 24, 5,6,7,8,9 };
//	sort(arr, sizeof(arr) / sizeof(arr[0]));
//	return 0;
//
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
//			if (strcmp(*(arr + j), *(arr + j + 1))>0)
//			{
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				flag = 1;//如果交换一次就赋值为1。
//			}
//		}
//	}
//}
//void mysort(char*arr[], int sz)//没有调用库函数strcmp(题目没有要求的话，尽量调用库函数。
//{
//	int i, j;
//	int flag = 1;
//	for (i = 0; i < sz - 1; i++)
//	{
//		char*temp;
//		if (flag == 0)//如果某次循环一次也没有交换，说明其已经拍好序了，循环不用继续下去，直接结束掉函数。
//			return;
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			int n = 0;
//			flag = 0;//假设没有交换赋值为0。
//			while ((*(*(arr + j) + n) == *(*(arr + j + 1) + n)) && (*(*(arr + j) + n)))
//			{
//				n++;
//			}
//			if (*(*(arr + j) + n) > *(*(arr + j + 1) + n))
//			{
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				flag = 1;//如果交换一次就赋值为1。
//			}
//		}
//	}
//}
//int main()
//{
//	char *arr[] = { "abcde", "accde", "bcdef", "aaaaabcdef" };//该数组的每个元素保存的都是对于字符串的首地址。
//	my_sort(arr,sizeof(arr)/sizeof(arr[0]));
//	//mysort(arr, sizeof(arr) / sizeof(arr[0]));
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	/*char *ch = " vm\x43\\\np\102qu";//\102代表一个八进制字符。\x43是一个十六进制字符
//	cout << strlen(ch);*/
//	int d = 3;
//	do
//	{
//
//	} while (2 <= d <= 3);//死循环
//}
//#include<stdio.h>
//struct S
//{
//	char name[20];
//	int i;
//};
//int main()
//{
//	struct S s1={ "zhangsan", 1 }, s2;
//	s1.name[20] = "zhangssan";//不能这样赋值。
//}
//#include<stdio.h>
//struct S
//{
//	int a;
//	char c;
//	struct //在c++的情况下匿名结构体放在这里，相当于//
//	{                               //
//		char a1;                  //char a;
//		int b;                  // int b;
//	};                         //去掉了结构体。
//	char d;
//};
//struct S1
//{
//	int a;
//	char c;
//	struct W//在c++的情况下，非匿名结构体放在这里，并且没有创建变量，不占用空间，去掉这个结构体
//	{             //c的情况下，  不能去掉               
//		char a1;                  
//		int b;                  
//	};                     
//	char d;
//}A;
//int main()
//{
//	printf("%d   %d", sizeof(struct S), sizeof(struct S1));//c++情况下： 20,8；c的情况:20,20
//	//system("pause");
//	getchar();
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(&arr));//4//&arr代表arr整个数组的地址。
//	printf("%d\n", sizeof(*&arr));//40//解引用整个数组的地址可以访问整个数组的内容。
//	system("pause");
//	return 0;
//}
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
//	int(*(*p2)[10])[10] = &arr1;//(*p2)是一个指针，名为p2，去掉指针的名字，就是指针的类型int(*[10])[10]
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
////整形提升 `
//#include<stdio.h>
//int main()
//{
//	
//	char c = 128;
//	char b = -3;//00000000 00000000 00000000 00000011//11111111 11111111 11111111 11111101
//	//128的二进制位是 00000000 00000000 00000000 100000000
//	//c: 10000000 以补码 10000000的形式11111111 11111111 11111111 100000000
//	printf("%d\n", c);
//	printf("%0x\n", ( short unsigned)c);//0xff80
//	unsigned char c1 = 128;
//	short unsigned int n;
//	int n1;
//	n = c + c1;//运算时存在整形提升
//	n1 = c + c1;
//	//c提升为   11111111  11111111  11111111 10000000  （char是有符号字符，所以提升时，前面全补1)
//	//c1提升为  00000000  00000000  00000000 10000000  （unsigned char是无符号字符，所以所以提升时前面全补0)
//	// n:      100000000  00000000 (00000000 00000000)
//	printf("%0x\n", n1);//0x00000000
//	printf("%0x\n", n);//0x00000
//	n = c + (char)c1;
//    n1 = c + (char)c1;
//	//c提升为   11111111  11111111  11111111 10000000  （char是有符号字符，提升时，前面全补1)
//	//c1提升为  11111111  11111111  11111111 10000000  （强制转换为char，所以是有符号字符提升，所以前面全补1)
////**N//n:       111111111 11111111 (11111111 00000000)//N
//	printf("%0x\n", n1);//0xffffff00
//	printf("%0x\n", n);//0xff00
//	printf("%0x\n",(int)n);//**还是0xff00(******不能（int)n,来尝试输出n1的效果，因为最后提升的是n)
//	//相当与对  n:11111111 00000000 进行整形提升，因为是先把上面那个N那一行中的括号里面的二进制位放到n里面后，再提升。
//	n = (unsigned char)c + c1;
//	n1 = (unsigned char)c + c1;
//	//c 提升为  00000000  00000000  00000000 10000000  （强制类型转换为unsigned char是无符号字符，所以所以提升时前面全补0)
//	//c1提升为  00000000  00000000  00000000 10000000  （unsigned char是无符号字符，所以所以提升时前面全补0)
//	//n:        00000000  00000000 (00000001 00000000)
//	printf("%0x\n", n1);//0x0100
//	printf("%0x\n",  n);//0x0100
//	system("pause");
//	return 0;
//	//总结整形提升 ：当为有符号数时，提升时，补最高位符号位，当为无符号数时，提升时补0
//}
//typedef  struct PEOPLE
//{
//	char name[20];
//	int old;
//	char sex[5];
//	char adress[20];
//	char phone_code[15];
//}PEOPLE;
//typedef struct ADDRESS_LIST
//{
//	PEOPLE *people;
//	int count;
//}address_list,*pc;//pc就是类型struct ADDRESS_LIST*的别名。
//
//struct ADDRESS_LIST* zh;
//#include<stdio.h>
//int main()
//{
//	address_list p2;
//	pc p1;
//	p1 = &p2;
//}


//struct U
//{
//	int a : 2;
//	int b : 4;
//	int c;
//	int d : 1;
//};//位段不存在对齐,位段就是为了节省空间，所以不存在对齐。大小端问题只有在大于一字节的时候才讨论
//#include<stdio.h>
//int main()
//{
//	char str[10] = "china";
//	//问题：数组元素个数位？
//	//10，不管初始化几个，数组元素的个数等于数组的下标。
//}
//int main()
//{
//	long i;
//	long a[16];
//	for (i = 0; i <= 18; i++)//死循环，图片
//	{
//		a[i] = 0;
//		printf("%d", i);
//	}
//}
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	char*c[] = { "ENTER", "NEW", "POINT", "FIRST" };
//	char**cp[] = {  c + 3, c + 2, c + 1, c };
//	char***cpp = cp;
//	printf("%s\n", **++cpp);//POINT
//	printf("%s\n", *--*++cpp+3);//er
//	printf("%s\n", cpp[-2]+3);//不确定
//	printf("%s\n", cpp[-1][-1]+1);//EW
//	system("pause");
//	//总结：++cpp,cpp++,cpp的指向变了，但是cpp[-2],cpp[-1][-1]中的cpp的指向没有变化。
//}
//#include<stdio.h>
//int main()
//{
//	char p=5;
//	int i=5;
//	printf("%d\n", (int)&p - (int)&i);
//	printf("%p\n%p\n", &p, &i);
//	system("pause");
//	return 0;
//}


//#include<Windows.h>
//#include<stdio.h>
//#include<iostream>
//using namespace std;
//int main()
//{
	//printf("%d\n", 98 & -3);
	//int n=1;
	//char str[10];
	///*
	//printf("%s", str);*/
	//scanf("% d", &n);
	//printf("%d", n);
	//system("pause");
	//char pc;
	//char*temp;
	//char arr[10];/// 
	//char str[20];//
	///*scanf("%[^\n]", str);*/
	//scanf("%s", str);
	//int i = 1;
	//scanf("%d", &i);
	//printf("%s\n", str);
	//printf("%d\n", i);
	//int a = 1;
	//int b = 2;
	////cout << ++b << b++;
	////cout << b++ << ++b;
	////(++b)++;//c++情况可以，c情况不可以
	////printf("%d %d ", ++b, b++);//4 2
	//printf("%d %d ", b++, ++b);//3 4
	//(++b)++;
	/*int b = 20;*/
	//printf("%d,%d\n", b++, ++b);//21 22
	//printf("%d,%d\n", b++, b++);//21 20
	//printf("%d,%d\n", ++b, ++b);//22 22 //http://blog.csdn.net/wmda999/article/details/13510495
	//printf("%d,%d\n", ++b, b++);//22 20
	//system("pause");
	/*printf("%d", 93 & -8);
	system("pause");*/
//}
	//课外总结:判断一个数是否是奇数或偶数方法一：偶数：num%2==0,奇数：num%2!=0;
	                                 //方法二：偶数： num&1=0,奇数：num&1=1;
//#include<stdio.h>
//#define INT32 int
//typedef struct STUDENT
//{
//	int i;
//}stu, *student;
//int main()
//{
//	stu a;
//	const student p = &a;
//	stu b;
//    //p = &a;//不行，因为const修饰得是指针p，因为typedef给 struct STUDENT*这种类型重新起了个名字叫 studen
//	      //而const student p = &a;把类型名一去就是const修饰的对象，（此时struct STUDENT*是一种类型)
//	     //如const int p,修饰得是p。
//	const stu*p1 = &a;//const 修饰得是stu创建得对象。
//	p1 = &b;
//	unsigned INT32 i = 10;
//	typedef int int32; 
//	//unsigned int32 j = 10;//typedef取得别名不支持类型扩展。
//	//typedef static int int32 //typedef不能和static等存储类型指示符同时使用，因为每个变量只能有一种存储类型。
//	//存储类型包括有extern ,static auto register,在不指定存储类型得得时候，编译器会根据约定自动取缺省值，另外
//	//存储类型指示符得位置也是任意得。
//	      
//}
//总结关于数据类型转换：1：自动转换，当不同类型的数据参与混合运算时，由编译系统自动完成的
//                      2：强制类型转换，强制类型转换会产生一个零时变量，操作时就用这个临时变量操作，
  //                       一旦操作结束，临时变量就会被系统收回，所以强制类型表达式是不能做为左值的。
//#include<stdio.h>
//extern pc[];
//extern char*arr3;
//int main()
//{
//	printf("%s\n", *(char**)pc);
//	printf("%s\n", (char*)(&arr3));
//	system("pause");
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<Windows.h>
////int i=2;
//
//enum A
//{
//	AAA,
//	BBB,
//	CCC
//}a;
//extern int m;
// float ADD()
//{
//	//printf("%d\n", i);
//	/* extern int i;*/
//	static int a;
//	return 1;
//}
//
//int  main()
//{
//	static int m=1;
//	void dul();
//	void sub();
//	static float ADD();//使函数具有内部链接属性
//	//char ch='??（';
//	a = BBB;
//	//printf("%s\n", a);//报错，枚举变量是以整型来存储的，如果以%s来输出会把a的值当做地址，这就会出现内存访问出错
//
//	{
//		static int i = 3;//具有域的作用，出了域就不能访问了
//	}
//	//extern int i;//不能访问i
//	/*printf("%d\n", i);*/
//	ADD();
//	dul();
//	sub();
//	system("pause");
//}
////总结:static修饰全局变量，改变的是链接属性，修饰局部变量改变的是存储方式，并不改变他的作用域
//extern int i;
//
//void dul()
//{
//	m = 2;
//	printf("hehe\n");
//}
//void sub()
//{
//	printf("haha\n");
//}
//#include<stdio.h>
//int judge(int*arr, int len)
//{
//	if (len == 0)
//		return 1;
//    if (arr[len] >= arr[len - 1])
//		return judge(arr, len - 1);
//	else
//		return 0;
//}
//int main()
//{
//	int arr[] = {3,2};
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int ret = judge(arr,len-1);
//	if (ret == 1)
//		printf("有序\n");
//	else
//		printf("无序\n");
//	system("pause");
//	return 0; 
//}
//#include<stdio.h>
//int add(int a, int b)
//{
//	int temp = (a&b)<<1;
//	int temp1 = (a^b);
//	int temp2 = (temp&temp1);
//	if (temp2 != 0)
//		return add(temp, temp1);
//	else
//		return (temp | temp1);
//}
//int main()
//{
//	int a = -5;
//	int b = 2;
//	int ret = add(a, b);
//	printf("%d\n", ret);
//	system("pause");
//}
//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//void census(char*pc)
//{
//	assert(pc != NULL);
//	int j = 0;
//	int count = 0;
//	char pc1[50] = { 0 };
//	char temp = 0, *p_temp1 = pc1, p_temp2 = 0;
//	while (pc[j])
//	{
//		p_temp2 = pc[j];
//		count = 0;
//		while (p_temp2 == *(pc + j))
//		{
//			count++, j++;
//		}
//		if (temp != p_temp2)
//		{
//			temp = p_temp2;
//			if (count>1)
//				*p_temp1++ = count + '0';
//			*p_temp1++ = temp;
//		}
//	}
//	strcpy(pc, pc1);
//}
// int main()
//{
//	char pc[] ="aaaddaaee  ffghddd  "/* "aaabbdbebdeddd"*/;
//	//           3a2b dbebde 3d
//	census(pc);
//	printf("%s\n", pc);
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#define add(X) printf(#X"=%d\n", X)
//#define Y 2
//struct student
//{
//	char a;//4
//	int b[3];//12
//	double c;//8
//	char d;//1
//};
//
//int main()
//{
//	/*char*p = "%abc";
//	printf(p);*/
//	/*int i = 1;
//	static int  b =1+i;*/
//	/*int i = 0;
//	int b = 1;
//	i++;
//	++i;
//	++i++;
//	b = i++;
//	b = ++i;
//	i++ = b;
//	++i = b;*/
//	int i = 1,j=1;
//	//add(5);
//	//void sub();
//	//scanf(" %d %% d", &i,&j);
//	//printf("%d\n", i);
//
//	//int arr[50];
//	//char brr[50];
//	//int ret = scanf("%s %c bb", arr, brr);//当输入1234 a时，把1234每个字符的ac码值分别存入arr开始后的四个字节
//	//                                //必须输入两次，因为要跟后面的串继续比较
//	//                                //scnaf()函数的返回值是他成功读取的格式化串的格式
//	//printf("%d\n", brr[0]);
//	//printf("%d\n", ret);
//	//printf("%0x\n", arr[0]);//所以输出的是34333231
//	//(volatile int *)0x11223344[0] = 1;//[]优先级高与（）
//	printf("%d\n", sizeof(struct student));
//	system("pause");
//	return 0;
//}
#include<stdio.h>
#include<math.h>
int main()
{
	int i = 2;
    int *  b2;
	const int*  b3;
	int const  b = pow(2.0, 22.0);
	int arr[1];
	const int b1 = 2;
	b2 = (int*)&b1;
	*b2 = 3;
	b3 = &b;
	int arr1[b1];
	//printf("%d", b2);
	printf("%d\n", b1);
	getchar();
	return 0;
}