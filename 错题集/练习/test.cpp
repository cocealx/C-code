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
//			if (strcmp(*(arr + j), *(arr + j + 1))>0)
//			{
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				flag = 1;//�������һ�ξ͸�ֵΪ1��
//			}
//		}
//	}
//}
//void mysort(char*arr[], int sz)//û�е��ÿ⺯��strcmp(��Ŀû��Ҫ��Ļ����������ÿ⺯����
//{
//	int i, j;
//	int flag = 1;
//	for (i = 0; i < sz - 1; i++)
//	{
//		char*temp;
//		if (flag == 0)//���ĳ��ѭ��һ��Ҳû�н�����˵�����Ѿ��ĺ����ˣ�ѭ�����ü�����ȥ��ֱ�ӽ�����������
//			return;
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			int n = 0;
//			flag = 0;//����û�н�����ֵΪ0��
//			while ((*(*(arr + j) + n) == *(*(arr + j + 1) + n)) && (*(*(arr + j) + n)))
//			{
//				n++;
//			}
//			if (*(*(arr + j) + n) > *(*(arr + j + 1) + n))
//			{
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				flag = 1;//�������һ�ξ͸�ֵΪ1��
//			}
//		}
//	}
//}
//int main()
//{
//	char *arr[] = { "abcde", "accde", "bcdef", "aaaaabcdef" };//�������ÿ��Ԫ�ر���Ķ��Ƕ����ַ������׵�ַ��
//	my_sort(arr,sizeof(arr)/sizeof(arr[0]));
//	//mysort(arr, sizeof(arr) / sizeof(arr[0]));
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	/*char *ch = " vm\x43\\\np\102qu";//\102����һ���˽����ַ���\x43��һ��ʮ�������ַ�
//	cout << strlen(ch);*/
//	int d = 3;
//	do
//	{
//
//	} while (2 <= d <= 3);//��ѭ��
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
//	s1.name[20] = "zhangssan";//����������ֵ��
//}
//#include<stdio.h>
//struct S
//{
//	int a;
//	char c;
//	struct //��c++������������ṹ���������൱��//
//	{                               //
//		char a1;                  //char a;
//		int b;                  // int b;
//	};                         //ȥ���˽ṹ�塣
//	char d;
//};
//struct S1
//{
//	int a;
//	char c;
//	struct W//��c++������£��������ṹ������������û�д�����������ռ�ÿռ䣬ȥ������ṹ��
//	{             //c������£�  ����ȥ��               
//		char a1;                  
//		int b;                  
//	};                     
//	char d;
//}A;
//int main()
//{
//	printf("%d   %d", sizeof(struct S), sizeof(struct S1));//c++����£� 20,8��c�����:20,20
//	//system("pause");
//	getchar();
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(&arr));//4//&arr����arr��������ĵ�ַ��
//	printf("%d\n", sizeof(*&arr));//40//��������������ĵ�ַ���Է���������������ݡ�
//	system("pause");
//	return 0;
//}
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
//	int(*(*p2)[10])[10] = &arr1;//(*p2)��һ��ָ�룬��Ϊp2��ȥ��ָ������֣�����ָ�������int(*[10])[10]
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
////�������� `
//#include<stdio.h>
//int main()
//{
//	
//	char c = 128;
//	char b = -3;//00000000 00000000 00000000 00000011//11111111 11111111 11111111 11111101
//	//128�Ķ�����λ�� 00000000 00000000 00000000 100000000
//	//c: 10000000 �Բ��� 10000000����ʽ11111111 11111111 11111111 100000000
//	printf("%d\n", c);
//	printf("%0x\n", ( short unsigned)c);//0xff80
//	unsigned char c1 = 128;
//	short unsigned int n;
//	int n1;
//	n = c + c1;//����ʱ������������
//	n1 = c + c1;
//	//c����Ϊ   11111111  11111111  11111111 10000000  ��char���з����ַ�����������ʱ��ǰ��ȫ��1)
//	//c1����Ϊ  00000000  00000000  00000000 10000000  ��unsigned char���޷����ַ���������������ʱǰ��ȫ��0)
//	// n:      100000000  00000000 (00000000 00000000)
//	printf("%0x\n", n1);//0x00000000
//	printf("%0x\n", n);//0x00000
//	n = c + (char)c1;
//    n1 = c + (char)c1;
//	//c����Ϊ   11111111  11111111  11111111 10000000  ��char���з����ַ�������ʱ��ǰ��ȫ��1)
//	//c1����Ϊ  11111111  11111111  11111111 10000000  ��ǿ��ת��Ϊchar���������з����ַ�����������ǰ��ȫ��1)
////**N//n:       111111111 11111111 (11111111 00000000)//N
//	printf("%0x\n", n1);//0xffffff00
//	printf("%0x\n", n);//0xff00
//	printf("%0x\n",(int)n);//**����0xff00(******���ܣ�int)n,���������n1��Ч������Ϊ�����������n)
//	//�൱���  n:11111111 00000000 ����������������Ϊ���Ȱ������Ǹ�N��һ���е���������Ķ�����λ�ŵ�n�������������
//	n = (unsigned char)c + c1;
//	n1 = (unsigned char)c + c1;
//	//c ����Ϊ  00000000  00000000  00000000 10000000  ��ǿ������ת��Ϊunsigned char���޷����ַ���������������ʱǰ��ȫ��0)
//	//c1����Ϊ  00000000  00000000  00000000 10000000  ��unsigned char���޷����ַ���������������ʱǰ��ȫ��0)
//	//n:        00000000  00000000 (00000001 00000000)
//	printf("%0x\n", n1);//0x0100
//	printf("%0x\n",  n);//0x0100
//	system("pause");
//	return 0;
//	//�ܽ��������� ����Ϊ�з�����ʱ������ʱ�������λ����λ����Ϊ�޷�����ʱ������ʱ��0
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
//}address_list,*pc;//pc��������struct ADDRESS_LIST*�ı�����
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
//};//λ�β����ڶ���,λ�ξ���Ϊ�˽�ʡ�ռ䣬���Բ����ڶ��롣��С������ֻ���ڴ���һ�ֽڵ�ʱ�������
//#include<stdio.h>
//int main()
//{
//	char str[10] = "china";
//	//���⣺����Ԫ�ظ���λ��
//	//10�����ܳ�ʼ������������Ԫ�صĸ�������������±ꡣ
//}
//int main()
//{
//	long i;
//	long a[16];
//	for (i = 0; i <= 18; i++)//��ѭ����ͼƬ
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
//	printf("%s\n", cpp[-2]+3);//��ȷ��
//	printf("%s\n", cpp[-1][-1]+1);//EW
//	system("pause");
//	//�ܽ᣺++cpp,cpp++,cpp��ָ����ˣ�����cpp[-2],cpp[-1][-1]�е�cpp��ָ��û�б仯��
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
	////(++b)++;//c++������ԣ�c���������
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
	//�����ܽ�:�ж�һ�����Ƿ���������ż������һ��ż����num%2==0,������num%2!=0;
	                                 //��������ż���� num&1=0,������num&1=1;
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
//    //p = &a;//���У���Ϊconst���ε���ָ��p����Ϊtypedef�� struct STUDENT*���������������˸����ֽ� studen
//	      //��const student p = &a;��������һȥ����const���εĶ��󣬣���ʱstruct STUDENT*��һ������)
//	     //��const int p,���ε���p��
//	const stu*p1 = &a;//const ���ε���stu�����ö���
//	p1 = &b;
//	unsigned INT32 i = 10;
//	typedef int int32; 
//	//unsigned int32 j = 10;//typedefȡ�ñ�����֧��������չ��
//	//typedef static int int32 //typedef���ܺ�static�ȴ洢����ָʾ��ͬʱʹ�ã���Ϊÿ������ֻ����һ�ִ洢���͡�
//	//�洢���Ͱ�����extern ,static auto register,�ڲ�ָ���洢���͵õ�ʱ�򣬱����������Լ���Զ�ȡȱʡֵ������
//	//�洢����ָʾ����λ��Ҳ������á�
//	      
//}
//�ܽ������������ת����1���Զ�ת��������ͬ���͵����ݲ���������ʱ���ɱ���ϵͳ�Զ���ɵ�
//                      2��ǿ������ת����ǿ������ת�������һ����ʱ����������ʱ���������ʱ����������
  //                       һ��������������ʱ�����ͻᱻϵͳ�ջأ�����ǿ�����ͱ��ʽ�ǲ�����Ϊ��ֵ�ġ�
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
//	static float ADD();//ʹ���������ڲ���������
//	//char ch='??��';
//	a = BBB;
//	//printf("%s\n", a);//����ö�ٱ��������������洢�ģ������%s��������a��ֵ������ַ����ͻ�����ڴ���ʳ���
//
//	{
//		static int i = 3;//����������ã�������Ͳ��ܷ�����
//	}
//	//extern int i;//���ܷ���i
//	/*printf("%d\n", i);*/
//	ADD();
//	dul();
//	sub();
//	system("pause");
//}
////�ܽ�:static����ȫ�ֱ������ı�����������ԣ����ξֲ������ı���Ǵ洢��ʽ�������ı�����������
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
//		printf("����\n");
//	else
//		printf("����\n");
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
//	//int ret = scanf("%s %c bb", arr, brr);//������1234 aʱ����1234ÿ���ַ���ac��ֵ�ֱ����arr��ʼ����ĸ��ֽ�
//	//                                //�����������Σ���ΪҪ������Ĵ������Ƚ�
//	//                                //scnaf()�����ķ���ֵ�����ɹ���ȡ�ĸ�ʽ�����ĸ�ʽ
//	//printf("%d\n", brr[0]);
//	//printf("%d\n", ret);
//	//printf("%0x\n", arr[0]);//�����������34333231
//	//(volatile int *)0x11223344[0] = 1;//[]���ȼ����루��
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