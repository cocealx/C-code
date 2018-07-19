//#define _CRT_SECURE_NO_WARNINGS 1
////求字符串长度。
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
////	return count;//或者不用count用str-temp-1做返回值;
////}
//size_t my_strlen(const char *str)
//{
//	assert(str != NULL);
//	if (*str++)
//	 return my_strlen(str)+1;//当*str不为\0时，调用该函数，并统计一个字符。
//	else
//		return 0;//当*str为零时，递归结束。
//}
//int main()
//{
//	const char *str = "1234567890";
//	printf("%d\n", my_strlen(str)); 
//	system("Pause");
//	return 0;
//}
////字符串的比较。
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
////判断一个字符串是不是另一个字符串的子字符串。
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//char *my_strstr(const char *dest, const char *src)
//{
//	const char *src_temp ;//源字符串的指针临时变量。
//	const char *dest_temp ;//目标字符串的指针临时变量。
//	while (*dest )//判断是否到目标字符串的最后一位。
//	{
//        dest_temp = dest;//每次内循环结束重新赋值，为目标字符串的指针临时变量重新赋址。
//		 src_temp = src;//每次内循环结束重新赋值，使源字符串的指针临时变量重新指向第一个字符。
//		while ((*dest_temp )&&(*src_temp == *dest_temp))//逐个判断源字符串字符是否等于目标字符串字符。
//		{
//           dest_temp++,src_temp++;
//		}
//		if (*src_temp == '\0')//判断源字符串字符的指针临时变量是否达到最后一个字符。
//			return (char*)dest;//如果是就返回目标字符串第一次正确匹配时的第一个字符的地址。
//		if (!*dest_temp)//（两个if顺序不能交换）如果后面目标字符串的长度不够了，直接跳出循环。
//			break;
//		dest++;//如果不是让目标字符串指针临时变量向后移动一个字节。
//	}
//	return NULL;//如果没有找到返回空指针。
//}
//int main()
//{
//	const char *p1 = "cd";
//	const char *p2 = "cbc";
//	printf("%p\n", my_strstr(p1, p2));
//	system("pause");
//	return 0;
//}
//////字符串的追加
//#include<stdio.h>
//#include<assert.h>
//char *my_strcat(char *dest,const char *src)
//{
//	assert(dest != NULL);//判断目标字符串指针临时变量是否为空。
//	assert(src != NULL);//判断源字符串指针临时变量是否为空。
//	char *ret = dest;//创建一个返回的指针变量，保存目标字符串的起始地址。
//	while (*dest != '\0')//使目标字符串指针临时变量指向'\0'。
//	{
//		dest++;
//	}
//	while (*dest++ = *src++)//把源字符串内容追加给目标字符串。
//	{
//		;
//	}
//	return ret;//返回目标字符串的起始地址。
//}
//int main()
//{
//	char arr[50] = "strcat use";
//	char *p = "dest src";   
//	printf("%s", my_strcat(arr, p));
//	system("pause");
//	return 0;
//}
////字符串的逆置
//#include<stdio.h>
//char *Inver(char *dest)
//{
//	char *ret = dest;//创建一个返回的指针变量，保存目标字符串的起始地址。
//	char *tm_val = dest;//源字符串的指针临时变量。
//	while (*dest)//使源字符串的指针临时变量指向'\0'。
//	{
//	  dest++;
//	}
//	while (tm_val<(--dest))//交换内容
//	{
//		*tm_val = *tm_val^*dest;
//		*dest   = *dest^*tm_val;
//		*tm_val = *tm_val^*dest;
//		tm_val++;
//	}
//	return ret ;//返回目标字符串的起始地址。
//}
//int main()
//{
//	char arr[30] = "abcdefg";
//	printf("%s", Inver(arr));
//	system("pause");
//	return 0;
//}
////memcpy（）函数的实现。
//#include<stdio.h>
//#include<stdlib.h>
//void *MY_memcpy(void *dest, const void *src,size_t n)
//{
//	char *dest_temp = (char*)dest;//用一个字符型指针接受一个强制类型转换后的目标的起始地址。
//	char *src_temp = (char*)src;//用一个字符型指针接受一个强制类型转换后的源的起始地址。
//	while (n--)//控制拷贝次数
//	{
//		*dest_temp++ = *src_temp++;//把源的内容一个字节一个字节的拷贝给目标，然后两个指针变量同时向后移动一个字节
//	}
//	return dest;//返回目标的起始地址
//}
//int main()
//{
//	int arr[30] = { 0 };
//	int arr1[5] = { 1, 2, 3, 4, 5 };
//	int i = 0;
//	MY_memcpy(arr, arr1, sizeof(arr1));
//	/*MY_memcpy(arr+1, arr, sizeof(arr1));*///地址重叠时就会出现拷贝错误，与下面memmove()函数分别运行，对照结果
//	/*memmove(arr + 1, arr, sizeof(arr1));*///验证地址重叠时拷贝后的结果。
//	while (i<10)
//	printf("%d ",arr[i++] );
//	system("pause");
//	return 0;
//}
//memmove()函数的实现。
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//void *MY_memmove(void *dest, const void *src, size_t n)
//{
//	if ((src < dest) && (((char*)src + n - 1) >= (char*)dest) )//当拷贝内容出现这种重叠时，采用倒序赋值。
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
//		MY_memmove(arr+7, arr, 5);//地址重叠时也不会出现拷贝错误，与下面memmove运行结果对比。
//		char arr1[30] = { 1, 2, 3, 4, 5 };
//		memmove(arr1+7, arr1, 5);//验证地址重叠时拷贝后的结果。
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
//strchr()函数的实现。
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
////strrchr()函数的实现。
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
//3.模拟实现strncmp
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
//	while ((*str1 == *str2) && *str1 && (n-->1))//while()括号里面已近比了一次，所以循环内部，只需要在循环n-1次
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
//	int n = strspn(p, p1);//返回字符串p1开头连续包含在字符串p内的字符的个数。（连续包含）
//	int n1 = strcspn(p, p1);//返回字符串p1开头连续不包含在字符串p内的字符的个数。（连续不包含）
//	printf("%d  %d\n",n,n1);
//	printf("%s/n", strpbrk(p, p1));//返回第一次匹配p1内的字符的地址
//	char p3[] = "HOW BIT %100 GOOD";
//	char *p4 = " %";
//	printf("%s\n", strtok(p3, p4));//strtok()分割函数，以p4的字符串为依据进行分割，分割的字符串必须不能是常量字符串
//	while ( temp = strtok(NULL, p4))
//	{
//		printf("%s\n", temp);
//	}
//	system("pause");
//	return 0;
//}