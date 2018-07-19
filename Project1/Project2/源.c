
//#include<stdio.h>
//int main()
//{
//	struct stu
//	{
//		char name[20];
//		int num;
//		float score;
//		struct stu*next;
//	}student,*head;
//	head = &student;
//
//}
//void sort(int arr[],int n )
//{
//	int temp;
//	int i,j;
//	for (i = 0; i < n; i++)
//	{
//		for (j = i + 1; j < n; j++)
//		{
//			if (arr[i]>arr[j])
//			{
//				temp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = temp;
//			}
//		}
//	}
//}
//int search(int arr[], int n)
//{
//	int i;
//	int sum = 0;
//	for (i = 0; i < n;)
//	{
//		if ((arr[i] ^ arr[i + 1]) == 0)
//		{
//			i = i + 2;
//		}
//		else
//			return arr[i];
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int ret,i;
//	int arr[] = { 1,1, 4, 6, 7,2, 4,2};
//	sort(arr, 8);
//	ret = search(arr, 8);
//	printf("%d\n", ret);
//	for (i = 0; i < 8; i++)
//	{
//		ret = ret^arr[i];
//	}
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
