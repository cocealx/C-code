#define _CRT_SECURE_NO_WARNINGS 1
#include"linklist.h"
void meau()
{
	printf("*************************\n");
	printf("******  1.插入元素  *****\n");
	printf("******  2.删除元素  *****\n");
	printf("******  3.查找元素  *****\n");
	printf("******  4.统计元素  *****\n");
	printf("******  5.查看链表  *****\n");
	printf("******  0.退出操作  *****\n");
	printf("*************************\n");
}
void test()
{
	list*List;
	InitLinkList(&List);
	int data;
	int input;
	do
	{
		printf("请选择>\n");
		meau();
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			Destroylist(&List);
			break;
		case 1:
		{
			printf("插入前链表内容为：\n");
			display(List);
			printf("输入插入的数据\n");
			scanf("%d", &data);
			pushback(&List, data);
			printf("插入后链表内容为：\n");
			display(List);
			break;
		}
		case 2:
		{
				  printf("删除前链表内容为：\n");
				  display(List);
				  popback(&List);
				  printf("删除后链表内容为：\n");
				  display(List);
				  break;
		}
		case 3:
		{
				  printf("输入要查找的元素>\n");
				  scanf("%d", &data);
				  if (find(List, data))
					  printf("查找到了\n");
				  else
					  printf("没有此元素\n");
				  break;
		}
		case 4:
			printf("链表长度为：%d\n",Size(List));
			break;
		case 5:
			printf("链表内容为：\n");
			display(List);
			break;
		default:
			printf("没有此项操作\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}



