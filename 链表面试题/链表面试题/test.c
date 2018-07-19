#include"list.h"
//链表的逆序打印和链表的逆序
void test1()
{
	pList list = NULL;
	pushfront(&list, 1);
	pushfront(&list, 2);
	pushfront(&list, 3);
	pushfront(&list, 4);
	display(list);
	////逆序打印
	//Invert_display(list);
	//链表元素的逆置
	Invert_list(&list);
	display(list);
	Destroylist(&list);
}
//合并两个有序链表
void test2()
{
	pList list1 = NULL;
	pList list2 = NULL;
	pList New_list = NULL;
	//第一链表list1
	pushfront(&list1, 0);
	pushfront(&list1, 2);
	pushfront(&list1, 4);
	pushfront(&list1, 6);
	pushfront(&list1, 8);
	pushfront(&list1, 10);
	//第二条链表
	pushfront(&list2, 1);
	pushfront(&list2, 3);
	pushfront(&list2, 5);
	pushfront(&list2, 7);
	New_list = _Merge(&list1, &list2);
	display(list1);
	printf("\n");
	display(list2);
	display(New_list);
	Destroylist(&New_list);
}
//删除一个非尾节点
void test3()
{
	pList list = NULL;
	pushfront(&list, 1);
	pushfront(&list, 2);
	pushfront(&list, 3);
	pushfront(&list, 4);
	display(list);
	DelNotTail(find(list, 3));
	display(list);
	Destroylist(&list);
}
//指定节点前面添加一个节点
void test4()
{
	pList list = NULL;
	pushfront(&list, 1);
	pushfront(&list, 2);
	pushfront(&list, 3);
	pushfront(&list, 4);
	display(list);
	InsertFrontNode(find(list,3), 5);
	display(list);
	Destroylist(&list);
}
//约瑟夫环
void test5()
{
	pList list = NULL;
	pushfront(&list, 5);
	pushfront(&list, 4);
	pushfront(&list, 3);
	pushfront(&list, 2);
	pushfront(&list, 1);
	display(list);
	find(list, 5)->next = list;
	JosephCycle(list, 3);
}
//寻找一个链表的中间节点，只能遍历一次
void test6()
{
	pList list = NULL;
	pushfront(&list, 1);
	pushfront(&list, 2);
	pushfront(&list, 3);
	pushfront(&list, 4);
	pushfront(&list, 5);
	pushfront(&list, 6);
	printf("%d\n",FindMidNode(list)->data);
	Destroylist(&list);
}
//对链表的冒泡排序
void test7()
{
	pList list = NULL;
	pushfront(&list, 1);
	pushfront(&list, 3);
	pushfront(&list, 5);
	pushfront(&list, 2);
	pushfront(&list, 4);
	pushfront(&list, 6);
	pushfront(&list, 2);
	pushfront(&list, 5);
	pushfront(&list, 7);
	Bubblesort(list);
	display(list);
	Destroylist(&list);
}
//删除倒数第k个元素
void test8()
{
	pList list = NULL;
	pushfront(&list, 1);
	pushfront(&list, 2);
	pushfront(&list, 3);
	pushfront(&list, 4); 
	display(list);
	DelKNode(list, 1);
	display(list);
	Destroylist(&list);
}
//带环单链表问题
void test9()
{
	pList list = NULL;
	//相遇点
	pNode meet = NULL;
	//入口点
	pNode EntryCross = NULL;
	//环的长度
	int Length = 0;
	pushfront(&list, 1);
	pushfront(&list, 2);
	pushfront(&list, 3);
	pushfront(&list, 4);
	pushfront(&list, 5);
	pushfront(&list, 6);
	pushfront(&list, 7);
	pushfront(&list, 8);
	pushfront(&list, 9);
	find(list, 1)->next = find(list,2);
	meet = CheckCycle(list);
	Length = GetCircleLength(meet);
	printf("环的长度为:%d\n", Length);
	printf("环的第一次相遇点为:%d\n", meet->data);
	//法一判断环入口点
	EntryCross = GetCircleEntreNode(meet, list);
	printf("环的r入口点为:%d\n", EntryCross->data);
	//法二判断入口点
	EntryCross = _GetCircleEntreNode2(list,Length);
	printf("环的r入口点为:%d\n", EntryCross->data);
	/*if (meet)
	{
		printf("带环\n");
	}
	else
	{
		printf("不带环\n");
	}*/
}
//两个不带环单链表相交问题
void test10()
{

	pList list1 = NULL;
	pList list2 = NULL;
	//是否相交的返回值
	pNode ret = 0;
	//链表的交点
	pNode CrossNode = NULL;
	pushfront(&list1, 1);
	pushfront(&list1, 2);
	pushfront(&list1, 3);
	pushfront(&list1, 4);
	pushfront(&list1, 5);
	pushfront(&list1, 6);
	pushfront(&list1, 7);
	pushfront(&list1, 8);
	pushfront(&list1, 9);
	pushfront(&list2, 10);
	pushfront(&list2, 11);
	pushfront(&list2, 12);
	find(list2, 10)->next = find(list1, 5);
	/*ret = CheckCross(list1, list2);
	if (ret != NULL)
		printf("相交\n");
	else
		printf("不相交\n");*/
	CrossNode = GetCrossNode(list1, list2);
	if (CrossNode!=NULL)
	printf("%d\n", CrossNode->data);
}
int main()
{
	test5();
	system("pause");
	return 0;
}
