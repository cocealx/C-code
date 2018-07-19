#include"list.h"
//����������ӡ�����������
void test1()
{
	pList list = NULL;
	pushfront(&list, 1);
	pushfront(&list, 2);
	pushfront(&list, 3);
	pushfront(&list, 4);
	display(list);
	////�����ӡ
	//Invert_display(list);
	//����Ԫ�ص�����
	Invert_list(&list);
	display(list);
	Destroylist(&list);
}
//�ϲ�������������
void test2()
{
	pList list1 = NULL;
	pList list2 = NULL;
	pList New_list = NULL;
	//��һ����list1
	pushfront(&list1, 0);
	pushfront(&list1, 2);
	pushfront(&list1, 4);
	pushfront(&list1, 6);
	pushfront(&list1, 8);
	pushfront(&list1, 10);
	//�ڶ�������
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
//ɾ��һ����β�ڵ�
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
//ָ���ڵ�ǰ�����һ���ڵ�
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
//Լɪ��
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
//Ѱ��һ��������м�ڵ㣬ֻ�ܱ���һ��
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
//�������ð������
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
//ɾ��������k��Ԫ��
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
//��������������
void test9()
{
	pList list = NULL;
	//������
	pNode meet = NULL;
	//��ڵ�
	pNode EntryCross = NULL;
	//���ĳ���
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
	printf("���ĳ���Ϊ:%d\n", Length);
	printf("���ĵ�һ��������Ϊ:%d\n", meet->data);
	//��һ�жϻ���ڵ�
	EntryCross = GetCircleEntreNode(meet, list);
	printf("����r��ڵ�Ϊ:%d\n", EntryCross->data);
	//�����ж���ڵ�
	EntryCross = _GetCircleEntreNode2(list,Length);
	printf("����r��ڵ�Ϊ:%d\n", EntryCross->data);
	/*if (meet)
	{
		printf("����\n");
	}
	else
	{
		printf("������\n");
	}*/
}
//�����������������ཻ����
void test10()
{

	pList list1 = NULL;
	pList list2 = NULL;
	//�Ƿ��ཻ�ķ���ֵ
	pNode ret = 0;
	//����Ľ���
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
		printf("�ཻ\n");
	else
		printf("���ཻ\n");*/
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
