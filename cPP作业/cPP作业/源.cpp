//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a = 1; 
//	int b = 1;
//	int c ;
//	c = a + b;
//	cout << "a+b=" <<a + b<<endl;
//	system("pause");
//    return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	int add(int, int);
//	int a = 1;
//	int b = 2;
//	int c = add(a,b); 
//	cout << "a + b = " << c << endl;
//	system("pause");
//	return 0;
//}
//int add(int x, int y)
//{
//	int z;
//	z = x + y;
//	return(z);
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	char c1 = 'C', c2 = '+',c3 = '+'; 
//	cout << "I say:\"" << c1 << c2 << c3 << '\"';
//	cout << "\t\t" << "He says:\"C++ is very interesting! \"" << '\n';
//	system("pause");
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	int i, j, m, n;
//	i = 8; 
//	j = 10;
//	m = ++i+j++;
//	n = (++i) + (++j) + m;
//	cout << i << '\t' << m << '\t' << n << endl;
//	system("pause");
//	return 0;
//}
//ʵ���
//#include<iostream>
//using namespace std;
//int main()
//{
//	int number,i = 0;
//	int arr[5] = {0};
//	cout << "����һ����������λ������";
//	cin >> number;
//	cout << "����Ϊ��";
//	while (number)
//	{
//		arr[i] = number % 10;
//		cout << arr[i]<<' ';
//		number = number / 10;
//		i++;
//	}
//	cout <<endl<< "����" << i<<"λ��"<<endl;
//	cout << "����Ϊ��";
//	while (--i>=0)
//	{
//		cout << arr[i]<<' ';
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}
//#include<iostream>
//using namespace std;
//void dit(int n)
//{
//	int i;
//	int sum = 0;
//	for (i = 1; i<=n/2; i++)
//	{
//		if (0 == n%i)
//		{
//			sum += i;
//		}
//	}
//	if (sum == n)
//	{
//		cout << n << ",its factors are " ;
//		for (i = 1; i <=n/2; i++)
//		{
//			if (0 == n%i)
//			{
//				cout << i << ",";
//			}
//		}
//		cout << endl;
//	}
//}
//int main()
//{
//	int n = 1;
//	while (n < 1000)
//	{
//		dit(n);
//		n++;
//	}
//	system("pause");
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	int day, x1, x2;
//	day = 9;
//	x2 = 1;
//	while (day > 0)
//	{
//		x1 = (x2 + 1) * 2;
//		x2 = x1;
//		day--;
//	}
//	cout << "һ����" << x1 << "����" << endl;
//	system("pause");
//	return 0;
//}
//#include<iostream>
//#include<math.h>
//using namespace std;
//float x1, x2, disc, p, q;
//float a, b, c;
//int main()
//{
//	void get(void);
//	cout << "������a,b,c:";
//	cin >> a >> b >> c;
//	disc = b*b - 4 * a*c;
//	if (disc >= 0)
//	{
//		get();
//		cout<<"��Ϊ��" << "x1=" << x1 << " x2=" << x2 << endl;
//	}
//	else
//		cout << "�޽�" << endl;
//	system("pause");
//	return 0;
//}
//void get(void)
//{
//	x1 = (-b + sqrt(disc)) / (2 * a);
//	x2 = (-b - sqrt(disc)) / (2 * a);
//}
//#include<iostream>
//using namespace std;
//void move(char x, char y)
//{
//	cout << x << "->" << y << endl;
//}
//void hannuo(int n, char one, char two, char three)
//{
//	if (n == 1) move(one, three);
//	else
//	{
//		hannuo(n - 1, one, two, three);
//		move(one, three);
//		hannuo(n - 1, two, one, three);
//	}
//}
//
//int main()
//{
//	int m;
//	cout << "�������Ӹ�����";
//	cin >> m;
//	cout << "�ƶ�" << m << "�����ӵ� ˳��" << endl;
//	hannuo(m, 'A', 'B', 'C');
//	system("pause");
//	return 0;
//}


//#include<iostream>
//using namespace std;
//int main()
//{
//	int i;
//	int arr[5] = { 1,3,5,7,9 };
//	int temp = 0;
//	for (i = 0; i <= sizeof(arr) / sizeof(arr[0]) / 2; i++)
//	{
//		temp = arr[i];
//		arr[i] = arr[sizeof(arr)/sizeof(arr[0])-i - 1];
//		arr[sizeof(arr)/sizeof(arr[0])-i - 1] = temp;
//	}
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		cout << arr[i]<<' ';
//	}
//	system("pause");
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	char ch;
//	int count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0;
//	while ((ch = getchar()) != '\n')
//	{
//		if ('A' <= ch&&ch <= 'Z')
//		{
//			count1++;
//		}
//		else if ('a' <= ch&&ch <= 'z')
//		{
//			count2++;
//		}
//		else if (' ' == ch)
//		{
//			count3++;
//		}
//		else if ('0' <= ch&&ch <= '9')
//		{
//			count4++;
//		}
//		else
//		{
//			count5++;
//		}
//	}
//	cout << "��д��ĸ����=" << count1<<endl;
//	cout << "Сд��ĸ����=" << count2 << endl;
//	cout << "�ո����=" << count3 << endl;
//	cout << "���ָ���=" << count4 << endl;
//	cout << "�����ַ�����=" << count5<< endl;
//	system("pause");
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<string.h>
//#include<string>
//using namespace std;
//char *my_strcat(char*dest, const char*src)
//{
//	char *temp = dest;
//	while (*temp)
//	{
//		temp++;
//	}
//	while (*temp++ = *src++)
//	{
//		;
//	}
//	return dest;
//}
//int main()
//{
//	char str1[20] = "hello";
//	char str2[20] = " word";
//	//string str1 = "str";
//	//string str2 = "cat";
//	//my_strcat(str1, str2);
//	 strcat(str1, str2);
//	//string str;
//	//str = str1 + str2;
//	cout << str1 << endl;
//	system("pause");
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	char str[3][50];
//	int i;
//	cout << "���������ַ���:" << endl;
//	for (i = 0; i < 3;i++)
//		cin >> str[i];
//	char*str1[3] = { str[0], str[1], str[2] };
//	for (i = 0; i < 2;i++)
//	{
//		char *temp = str1[i];
//		for (int j = i + 1; j < 3; j++)
//		{
//			if (strcmp(str1[i], str1[j])>=0)
//			{
//				temp = str1[j];
//				str1[j] = str1[i];
//				str1[i] = temp;
//			}
//		}
//	}
//	cout << "�������ַ���Ϊ��"<<endl;
//	for (i = 0; i < 3; i++)
//	{
//		cout << str1[i] << endl;
//	}
//	system("pause");
//	return 0;
//}
//#include<iostream>
//using namespace std;
//void my_cin(int arr[],int j)
//{
//	int i;
//	cout << "������10����:" << endl;
//	for (i = 0; i < j; i++)
//	{
//		cin >> arr[i];
//	}
//}
//void swap(int arr[], int n)
//{
//	int j = n - 1;
//  int i;
//	int min = 0;
//	int max = 0;
//	for ( i = 0; i < n; i++)
//	{
//		if (arr[i] <arr[min])
//		{
//			min = i;
//		}
//		if (arr[i]>arr[max])
//		{
//			max = i;
//		}
//	}
//	int temp;
//	temp = arr[min];
//	arr[min] = arr[0];
//	arr[0] = temp;
//	temp = arr[max];
//	arr[max] = arr[j];
//	arr[j] = temp;
//}
//void my_cout(int arr[], int j)
//{
//	for (int i  = 0; i < j; i++)
//	{
//		cout<<' ' << arr[i];
//	}
//	cout << endl;
//}
//int main()
//{
//	int num[10] = { 0 };
//	my_cin(num,10);
//	swap(num, 10);
//	my_cout(num, 10);
//	system("pause");
//	return 0;
//}
//#include<iostream>
//using namespace std;
//struct STUDENT
//{
//	int num;
//	char name[20];
//	float score[3];
//}stu[5];
//void print(  STUDENT *student, int i)
//{
//	for (int j = 0; j < i; j++)
//	{
//		cout << "ѧ�ţ�" << student[j].num ;
//		cout << "������" << student[j].name;
//		cout << "�ɼ���";
//		for (int n = 0; n < 3; n++)
//		{
//			cout << student[j].score[n]<<',';
//		}
//		cout << endl;
//	}
//}
//int main()
//{
//	int i;
//	for (i = 0; i < 5; i++)
//	{
//		cout << "����ѧ�š�" << endl;
//		cin >> stu[i].num;
//		cout << "����ѧ��������" << endl;
//		cin >> stu[i].name;
//		cout << "�������ųɼ�" << endl;
//		for (int j = 0; j < 3; j++)
//		{
//			cin >> stu[i].score[j];
//		}
//	}
//	print(stu,5);
//	system("pause");
//	return 0;
//}
//#include<iostream>
//using namespace std;
//struct STUDENT
//{
//	int num;
//	char name[10];
//	float score[3];
//}stu[10];
//void average_score(STUDENT *stu, int j)
//{
//	int i;
//	float sum[3] = { 0 };
//	for (i = 0; i < j; i++)
//	{
//		sum[0] += stu[i].score[0];
//		sum[1] += stu[i].score[1];
//		sum[2] += stu[i].score[2];
//	}
//	cout << "������ƽ���ɼ��ֱ�Ϊ��" << sum[0] / 3 << ' '<<sum[1] / 3 <<' ' << sum[2] / 3 << endl;
//}
//void find(STUDENT *stu, int k)
//{
//	float max[3] = { 0 };
//	int temp[3] ;
//	int i,j,n;
//	for (i = 0; i < k; i++)
//	{
//		if (max[0] < stu[i].score[0])
//		{
//			max[0] = stu[i].score[0];
//			temp[0] = i;
//		}
//		if (max[1] < stu[i].score[1])
//		{
//			max[1] = stu[i].score[1];
//			temp[1] = i;
//		}
//		if (max[2] < stu[i].score[2])
//		{
//			max[2] = stu[i].score[2];
//			temp[2] = i;
//		}
//	}
//	float sum;
//	for ( j = 0; j < 3; j++)
//	{
//		sum = 0;
//		cout << "ѧ�ţ�" << stu[temp[j]].num;
//		cout << "������" << stu[temp[j]].name;
//		cout << "�ɼ���";
//		for (n = 0; n < 3; n++)
//		{
//			cout << stu[temp[j]].score[n] << ',';
//			sum += stu[temp[j]].score[n];
//		}
//		cout << "����ƽ���ɼ�:" << sum / 3 << endl;
//	}
//}
//int main()
//{
//	int i,j;
//	for (i = 0; i < 10; i++)
//	{
//		cout << "����ѧ�š�" << endl;
//		cin >> stu[i].num;
//		cout << "����ѧ��������" << endl;
//		cin >> stu[i].name;
//		cout << "�������ųɼ�" << endl;
//		for (j = 0; j < 3; j++)
//		{
//			cin >> stu[i].score[j];
//		}
//	}
//	average_score(stu,10);
//	find(stu, 10);
//	system("pause");
//	return 0;
//}
//#include<iostream>
//using namespace std;
//class Time
//{
//public:
//	void set_time(void)
//	{
//		cin >> hour >> minute >> sec;
//	}
//	void show_time(void)
//	{
//		cout << hour << ":" << minute << ":" << sec << endl;
//	}
//private:
//	int hour;
//	int minute;
//	int sec;
//
//};
//int main()
//{
//	Time c1;
//	 c1.set_time();
//	 c1.show_time();
//	 system("pause");
//	 return 0;
//}
//#include<iostream>
//using namespace std;
//class cuboid
//{
//private:
//	float length;
//	float width;
//	float height;
//public:
//	void import(void)
//	{
//		cout << "�ֱ����볤�����ߡ�" << endl;
//		cin >> length >> width >> height;
//	}
//	void reckon(void)
//	{
//		cout << "����������Ϊ��" << length*width*height << endl;
//	}
//};
//int main()
//{
//	int i;
//	cuboid cub[3];
//	for (i = 0; i < 3; i++)
//	{
//		cub[i].import();
//		cub[i].reckon();
//	}
//	system("pause");
//	return 0;
//}
//
//#include<iostream>
//using namespace std;
//class student
//{
//public:
//	char name[10];
//	int number;
//	float score;
//};
//int main()
//{
//	student stu[5] = { { "a", 1, 99 }, { "b", 2, 42 }, { "c", 3, 53 }, { "d", 4, 96 }, { "e", 5, 67 } };
//	int i;
//	for (i = 0; i < 5; i+=2)
//	{
//		cout << "������" << (*(stu + i)).name << "ѧ�ţ�" << (*(stu + i)).number << "������" << (*(stu + i)).score << endl;
//	}
//	system("pause");
//	return 0;
//}
//#include<iostream>
//using namespace std;
//class Student
//{
//public:
//	Student(int n, float s) :num(n), score(s){}
//	void change(int n, float s){ num; score = s; }
//	void display(){ cout << num << " " << score << endl; }
//
//private:
//	int num;
//	float score;
//}; 
//int main()
//{
//	Student stud(101, 78.5);
//	stud.display();
//	stud.change(101, 80.5);
//	stud.display();
//	system("pause");
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	cout << "������ݣ�" << endl;
//	int year;
//	cin >> year;
//	if ((year % 100 != 0) && (year % 4 == 0) || (year % 400 == 0))
//		cout << "������" << endl;
//	else
//		cout << "��������" << endl;
//	system("pause");
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	int i, j;
//	for (i =100; i < 200; i++)
//	{
//		for (j = 2; j <= i / 2; j++)
//		{
//			if (i%j == 0)
//				break;
//		}
//		if (j>i / 2)
//			cout << i << " ";
//	}
//	system("pause");
//	return 0;
//}
//#include<iostream>
//#include<math.h>
//using namespace std;
//int main()
//{
//	int i;
//	int arr[3] = { 0 };
//	for (i = 100; i < 1000; i++)
//	{
//		arr[0] = i % 10;
//		arr[1] = i / 10%10;
//		arr[2] = i/100 % 10;
//		if (i == (pow(arr[0], 3) + pow(arr[1], 3) + pow(arr[2], 3)))
//			cout << i << " ";
//	}
//	system("pause");
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
	
	//int arr[] = { 3, 5, 9, 11, 33, 4, -9, -76, 100, 23 };
	//int sz = sizeof(arr) / sizeof(arr[0])-1;//9
	//int i, j;
	//for (i = 0; i < sz - 1; i++)
	//{
	//	for (j = 0; j < sz - i; j++)
	//	{
	//		int temp;
	//		if (arr[j] < arr[j + 1])
	//		{
	//			temp = arr[j];
	//			arr[j] = arr[j + 1];
	//			arr[j +1] = temp;
	//		}
	//	}
	//}
	//for (i = 0; i <= sz; i++)
	//{
	//	cout << arr[i] << " ";
	//}
//	system("pause");
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	int arr[10] = { 3, 5, 9, 11, 33, 4, -9, -76, 100, 23 };
//	int i, j;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = i+1; j < 10 ; j++)
//		{
//			if (arr[i] > arr[j])
//			{
//				int temp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = temp;
//			}
//		}
//	}
//	for (i = 0; i <10; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	system("pause");
//	return 0;
//}
//#include<iostream>//����ͷ�ļ�
//using namespace std;
//int main()//������
//{
//	void sort(int *arr, int k);//����һ��û�з������ͣ�һ������Ϊָ�����ͣ�һ������Ϊ��������ð�ݵĺ�����
//	int arr[9] = { 3, 5, 9, 11, 33, 4, -9, -76, 100 };//����һ����СΪ9�����飬�����г�ʼ����
//	int i;
//	sort(arr, 9);//������ĵ�һԪ�صĵ�ַ���������Ĵ�С����������
//	for (i = 0; i <9; i++)//����forѭ���������������ݴ�ӡ������
//	{
//		cout << arr[i] << " ";
//	}
//	system("pause");
//	return 0;
//}
//void sort(int *arr, int k)
//{
//	int j, i;//����������ʱ��������forѭ����
//		for (i = 0; i < k-1; i++)//ȷ��������ٸ�Ԫ��ð�ݣ�ð�ݵĴ�����������Ԫ�صĸ�����1.
//		{
//			for (j = 0; j < k-1-i; j++)//ÿһ��Ԫ��ð�ݵĴ���
//			{
//				if (*(arr+j) >*(arr+j+1))//���ǰ���Ԫ��С�ں����Ԫ�أ���������Ԫ�ص����ݡ�
//				{
//					int temp = *(arr+j+1);
//                	*(arr+j+1) = *(arr+j);
//					*(arr+j) = temp;
//				}
//			}
//		}
//}

//#include<iostream>
//using namespace std;
//class STUDENT
//{
//public:
//	char name[20];
//	float yu;
//	float su;
//};
//void input(STUDENT stu[],int k)
//{
//	int i;
//	for (i = 0; i < k; i++)
//	{
//		cout << "����������" << endl;
//		cin >> stu[i].name;
//		cout << "�������ĳɼ���";
//		cin >> stu[i].yu;
//		cout << "������ѧ�ɼ���";
//		cin >> stu[i].su;
//	}
//}
//void output(STUDENT stu[], int k)
//{
//	int i;
//	for (i = 0; i < k; i++)
//	{
//		cout << stu[i].name << "��ƽ���ɼ�:" << (stu[i].yu + stu[i].su) / 2.0 << endl;
//	}
//}
//int main()
//{
//	STUDENT stu[3];
//	input(stu,3);
//	output(stu,3);
//	system("pause");
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	int num;
//	cout << "����һ������1������";
//	cin >> num;
//	int i;
//	for (i = 2; i <= num / 2; i++)
//	{
//		if (num%i == 0)
//		{
//			cout << "��������" << endl;
//			system("pause");
//			return 0;
//		}
//	}
//	cout << "������" << endl;
//	system("pause");
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	int x, y;
//	int head, feet;
//	cout << "����ͷ����";
//	cin >> head;
//	cout << "����ŵĸ�����";
//	cin >> feet;
//	y = (feet - 2 * head) / 2;
//	x = head - y;
//	cout << "�õĸ���Ϊ��" << y << "���ĸ���Ϊ��" << x << endl;
//	system("pause");
//	return 0;
//
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	/*int x, y, z;
//	cout << "��ĸ ���� ����Ϊ��" << endl;
//	for (x = 0; x <= 20; x++)
//	{
//		for (y = 0; y <= 33; y++)
//		{
//			z = 100 - x - y;
//			if ((5 * x + 3 * y + z / 3.0) == 100)
//				cout << x << " " << y << " " << z << endl;
//		}
//	}*/
//	system("pause");
//	return 0;
//}
//#include<iostream>
//using namespace std;
//void select(int*arr, int k)
//{
//	int i, j;
//	for (i = 0; i < k-1; i++)
//	{
//		for (j = i + 1; j < k; j++)
//		{
//			if (*(arr+i) > *(arr+j))
//			{
//				int temp = *(arr+i);
//				*(arr + i) = *(arr + j);
//				*(arr + j) = temp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 3, 5, 9, 11,0, 4, -9, -76, 100, 23 };
//	int i;
//	select(arr, 10);
//	for (i = 0; i <10; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	system("pause");
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>
//int i=2;

enum A
{
	AAA,
	BBB,
	CCC
}a;

static float ADD()
{

	//printf("%d\n", i);
	static int a;
	return 1;
}
/*static*/  float   ADD();
int  main()
{
	//char ch='??��';
	a = BBB;
	//printf("%s\n", a);//����ö�ٱ��������������洢�ģ������%s��������a��ֵ������ַ����ͻ�����ڴ���ʳ���

	{
		static int i = 3;
	}
	/*extern int i;
	printf("%d\n", i);*/
	ADD();
	system("pause");
}
//extern int i;
