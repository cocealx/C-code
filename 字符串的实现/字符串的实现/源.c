//#define _CRT_SECURE_NO_WARNINGS 1
////���ַ������ȡ�
//#include<stdio.h>
//#include<assert.h>
////size_t my_strlen( const char *str)
////{
////assert(str != NULL);
////int *temp=str; 
////	int count = 0;
////	while (*str++)
////	{
////		count++;
////	}
////	return count;//���߲���count��str-temp-1������ֵ;
////}
//size_t my_strlen(const char *str)
//{
//	assert(str != NULL);
//	if (*str++)
//	 return my_strlen(str)+1;//��*str��Ϊ\0ʱ�����øú�������ͳ��һ���ַ���
//	else
//		return 0;//��*strΪ��ʱ���ݹ������
//}
//int main()
//{
//	const char *str = "1234567890";
//	printf("%d\n", my_strlen(str)); 
//	system("Pause");
//	return 0;
//}
////�ַ����ıȽϡ�
//#include<stdio.h>
//int my_strcmp(const char *dest, const char *src)
//{
//	while ((*src != '\0') && (*dest == *src))
//	{
//		dest++;
//		src++;
//	}
//	return ((*dest - *src)>0 ? 1 : ((*dest - *src)<0 ? -1 : 0));
//}
//int main()
//{
//	const char *p1 = "dbcd";
//	const char *p2 = "dbc";
//	printf("%d\n", my_strcmp(p1, p2));
//	system("pause");
//	return 0;
//}
////�ж�һ���ַ����ǲ�����һ���ַ��������ַ�����
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//char *my_strstr(const char *dest, const char *src)
//{
//	const char *src_temp ;//Դ�ַ�����ָ����ʱ������
//	const char *dest_temp ;//Ŀ���ַ�����ָ����ʱ������
//	while (*dest )//�ж��Ƿ�Ŀ���ַ��������һλ��
//	{
//        dest_temp = dest;//ÿ����ѭ���������¸�ֵ��ΪĿ���ַ�����ָ����ʱ�������¸�ַ��
//		 src_temp = src;//ÿ����ѭ���������¸�ֵ��ʹԴ�ַ�����ָ����ʱ��������ָ���һ���ַ���
//		while ((*dest_temp )&&(*src_temp == *dest_temp))//����ж�Դ�ַ����ַ��Ƿ����Ŀ���ַ����ַ���
//		{
//           dest_temp++,src_temp++;
//		}
//		if (*src_temp == '\0')//�ж�Դ�ַ����ַ���ָ����ʱ�����Ƿ�ﵽ���һ���ַ���
//			return (char*)dest;//����Ǿͷ���Ŀ���ַ�����һ����ȷƥ��ʱ�ĵ�һ���ַ��ĵ�ַ��
//		if (!*dest_temp)//������if˳���ܽ������������Ŀ���ַ����ĳ��Ȳ����ˣ�ֱ������ѭ����
//			break;
//		dest++;//���������Ŀ���ַ���ָ����ʱ��������ƶ�һ���ֽڡ�
//	}
//	return NULL;//���û���ҵ����ؿ�ָ�롣
//}
//int main()
//{
//	const char *p1 = "cd";
//	const char *p2 = "cbc";
//	printf("%p\n", my_strstr(p1, p2));
//	system("pause");
//	return 0;
//}
//////�ַ�����׷��
//#include<stdio.h>
//#include<assert.h>
//char *my_strcat(char *dest,const char *src)
//{
//	assert(dest != NULL);//�ж�Ŀ���ַ���ָ����ʱ�����Ƿ�Ϊ�ա�
//	assert(src != NULL);//�ж�Դ�ַ���ָ����ʱ�����Ƿ�Ϊ�ա�
//	char *ret = dest;//����һ�����ص�ָ�����������Ŀ���ַ�������ʼ��ַ��
//	while (*dest != '\0')//ʹĿ���ַ���ָ����ʱ����ָ��'\0'��
//	{
//		dest++;
//	}
//	while (*dest++ = *src++)//��Դ�ַ�������׷�Ӹ�Ŀ���ַ�����
//	{
//		;
//	}
//	return ret;//����Ŀ���ַ�������ʼ��ַ��
//}
//int main()
//{
//	char arr[50] = "strcat use";
//	char *p = "dest src";   
//	printf("%s", my_strcat(arr, p));
//	system("pause");
//	return 0;
//}
////�ַ���������
//#include<stdio.h>
//char *Inver(char *dest)
//{
//	char *ret = dest;//����һ�����ص�ָ�����������Ŀ���ַ�������ʼ��ַ��
//	char *tm_val = dest;//Դ�ַ�����ָ����ʱ������
//	while (*dest)//ʹԴ�ַ�����ָ����ʱ����ָ��'\0'��
//	{
//	  dest++;
//	}
//	while (tm_val<(--dest))//��������
//	{
//		*tm_val = *tm_val^*dest;
//		*dest   = *dest^*tm_val;
//		*tm_val = *tm_val^*dest;
//		tm_val++;
//	}
//	return ret ;//����Ŀ���ַ�������ʼ��ַ��
//}
//int main()
//{
//	char arr[30] = "abcdefg";
//	printf("%s", Inver(arr));
//	system("pause");
//	return 0;
//}
////memcpy����������ʵ�֡�
//#include<stdio.h>
//#include<stdlib.h>
//void *MY_memcpy(void *dest, const void *src,size_t n)
//{
//	char *dest_temp = (char*)dest;//��һ���ַ���ָ�����һ��ǿ������ת�����Ŀ�����ʼ��ַ��
//	char *src_temp = (char*)src;//��һ���ַ���ָ�����һ��ǿ������ת�����Դ����ʼ��ַ��
//	while (n--)//���ƿ�������
//	{
//		*dest_temp++ = *src_temp++;//��Դ������һ���ֽ�һ���ֽڵĿ�����Ŀ�꣬Ȼ������ָ�����ͬʱ����ƶ�һ���ֽ�
//	}
//	return dest;//����Ŀ�����ʼ��ַ
//}
//int main()
//{
//	int arr[30] = { 0 };
//	int arr1[5] = { 1, 2, 3, 4, 5 };
//	int i = 0;
//	MY_memcpy(arr, arr1, sizeof(arr1));
//	/*MY_memcpy(arr+1, arr, sizeof(arr1));*///��ַ�ص�ʱ�ͻ���ֿ�������������memmove()�����ֱ����У����ս��
//	/*memmove(arr + 1, arr, sizeof(arr1));*///��֤��ַ�ص�ʱ������Ľ����
//	while (i<10)
//	printf("%d ",arr[i++] );
//	system("pause");
//	return 0;
//}
//memmove()������ʵ�֡�
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//void *MY_memmove(void *dest, const void *src, size_t n)
//{
//	if ((src < dest) && (((char*)src + n - 1) >= (char*)dest) )//���������ݳ��������ص�ʱ�����õ���ֵ��
//	{
//		while (n--)
//		{
//			*((char*)dest + n) = *((char*)src + n);
//		}
//	}
//	else
//	{
//		size_t i = 0;
//		while (i<n)
//		{
//			*((char*)dest+i) = *((char*)src+i); 
//			i++;
//		}
//	}
//	return dest;
//}
//int main()
//{
//		char arr[30] = { 1,2,3,4,5 };
//		int i = 0;
//		MY_memmove(arr+7, arr, 5);//��ַ�ص�ʱҲ������ֿ�������������memmove���н���Աȡ�
//		char arr1[30] = { 1, 2, 3, 4, 5 };
//		memmove(arr1+7, arr1, 5);//��֤��ַ�ص�ʱ������Ľ����
//		while (i < 10)
//		{
//			printf("%d ", arr[i++]);
//		}
//		printf("\n");
//		i = 0;
//		while (i < 10)
//		{
//			printf("%d ", arr1[i++]);
//		}
//		system("pause");
//		return 0;
//}
//
//#include<stdio.h>
//#include<stdlib.h>
//void*my_memove(void*dest, const void*src, size_t n)
//{
//	if ((src < dest) && ((char*)src + n >= (char*)dest))
//	{
//		while (n--)
//		{
//			*((char*)dest + n) = *((char*)src + n);
//		}
//	}
//	else
//	{
//		size_t i = 0;
//		while (i < n)
//		{
//			*((char*)dest + i) = *((char*)src + i);
//			i++;
//		}
//	}
//	return dest;
//}
//int main()
//{
//	char arr[30] = "112345";
//	printf("%s\n", (char*)my_memove(arr + 3, arr, 5));
//	//printf("%s\n", (char*)memmove(arr + 3, arr, 5));
//	system("pause");
//	return 0;
//}
//
//#define _CRT_SECURE_NO_WARNINGS 1
////strncpy
//#include<stdio.h>
//#include<string.h>
//char*my_strncpy(char* dest, const char* src,size_t n)
//{
//	//assert(dest);
//	//assert(src);
//	char*ret = dest;
//	while (n && (*dest++ = *src++))
//	{
//		n--;
//	}
//	if (n)
//	while (n--)
//		*dest++ = 0;
//	return ret;
//}
//int main()
//{
//	char p1[20] = "abcde";//{ 'p', 'l', 'k', 'j', '\0', 'l', 'k' };
//	char p2[] = "yui";
//	//my_strncpy(p1, p2, 3);
//	strncpy(p1, p2, 3);
//	printf("%s", p1);
//	system("pause");
//	return 0;
//}
//strchr()������ʵ�֡�
//#include<stdio.h>
//#include<assert.h>
//char* my_strchr(const char* dest, int pc)
//{
//	assert(dest);
//	while (*dest)
//	{
//		if (*dest == (char)pc)
//		{
//			return dest;
//		}
//		dest++;
//	}
//	return NULL;
//}
//int main()
//{
//	char *pc = "abaccdeff";
//	char *p = my_strchr(pc, 'a');
//	printf("%s", p);
//	system("pause");
//	return 0;
//}
////strrchr()������ʵ�֡�
//#include<stdio.h>
//#include<assert.h>
//char* my_strchar(const char* dest, int pc)
//{
//	assert(dest);
//	char *temp = NULL;
//	while (*dest)
//	{
//		if (*dest == (char)pc)
//		{
//			 temp = dest;
//		}
//		dest++;
//	}
//	return temp;
//}
//int main()
//{
//	char *pc = "abaccbdeff";
//	char *p = my_strchar(pc, 'b');
//	printf("%s", p);
//	system("pause");
//	return 0;
//}
//
//3.ģ��ʵ��strncmp
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h> 
//int my_strncmp(const char*s1, const char*s2, int n)
//{
//	assert(s1);
//	assert(s2);
//	while ((n--) && (*s1 == *s2))
//	{
//		if (*s1 == '\0')
//			return 0;
//		s1++;
//		s2++;
//	}
//	s1--,s2--;
//	return *s1 - *s2;
//}
//int main()
//{
//	char* arr1 = "abcdef";
//	char* arr2 = "abbjkl";
//	printf("%d\n", my_strncmp(arr1, arr2, 3));
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<assert.h>
//int my_strncmp(const char *str1, const char *str2, size_t n)
//{
//	assert(str1);
//	assert(str2);
//	while ((*str1 == *str2) && *str1 && (n-->1))//while()���������ѽ�����һ�Σ�����ѭ���ڲ���ֻ��Ҫ��ѭ��n-1��
//	{
//
//		str1++, str2++;
//	}
//	return *str1 - *str2;
//}
//int main()
//{
//	char *p1 = "abbdfadsegd";
//	char *p2 = "abbke";
//	int p = my_strncmp(p1, p2, 4);
//	printf("\n");
//	system("pause");
//	return 0;
//}
//strncat
//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//char* my_strncat(char*dest, const char* src,size_t n)
//{
//	assert(dest);
//	assert(src);
//	char*temp = dest;
//	while (*dest)dest++;
//	while ((n) && (*dest++ = *src++))n--;
//	if (!n)
//		*dest = 0;
//	return temp;
//}
//int main()
//{
//	char pc[20] = "abcd\0abcdef";
//	char *pc1 = "efg";
//	my_strncat(pc, pc1,6);
//    //strncat(pc, pc1, 5);
//	//printf("%s", my_strncat);
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//int main()
//{
//	char *temp;
//    char *p = "cdewwqqqqwqdefg";
//	char *p1 = "abcde";
//	int n = strspn(p, p1);//�����ַ���p1��ͷ�����������ַ���p�ڵ��ַ��ĸ�����������������
//	int n1 = strcspn(p, p1);//�����ַ���p1��ͷ�������������ַ���p�ڵ��ַ��ĸ�������������������
//	printf("%d  %d\n",n,n1);
//	printf("%s/n", strpbrk(p, p1));//���ص�һ��ƥ��p1�ڵ��ַ��ĵ�ַ
//	char p3[] = "HOW BIT %100 GOOD";
//	char *p4 = " %";
//	printf("%s\n", strtok(p3, p4));//strtok()�ָ������p4���ַ���Ϊ���ݽ��зָ�ָ���ַ������벻���ǳ����ַ���
//	while ( temp = strtok(NULL, p4))
//	{
//		printf("%s\n", temp);
//	}
//	system("pause");
//	return 0;
//}