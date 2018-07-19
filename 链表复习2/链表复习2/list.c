#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include"list.h"
//打印链表信息
void display(pList plist)
{
	Node*next = plist;
	while (plist)
	{
		printf("%d-->", plist->data);
		plist = plist->next;
	}

}
//销毁链表
void Destroylist(pList*pplist)
{
	Node*next = *pplist;
	while (next)
	{
		Node*temp = next->next;
		free(next);
		next = temp;
	}
}
//查找某个元素
pNode find(pList plist, Datatype x)
{
	Node*next = plist;
	while (next)
	{
		if (next->data == x)
			return next;
		next = next->next;
	}
	return NULL;
}
//头部插入数据
void pushfront(pList*pplist, Datatype x)
{
	Node*node = (Node*)malloc(sizeof(Node));
	node->data = x;
	node->next = *pplist;
	*pplist = node;
}
//逆序打印链表内容
void Invert_display(pList plist)
{
	if (plist->next)
		Invert_display(plist->next);
	printf("-->%d", plist->data);
}
//链表的逆序(递归版本)
void Invert_list1(pList plist)
{
	Node*node = plist;
	if (!plist || plist->next == NULL)
	{
		return;
	}
	Node*head = plist;
	while (node&&node->next&&node->next->next)
	{
		node = node->next;
	}
	Node*next = node->next;
	int data = head->data;
	head->data = next->data;
	next->data = data;
	node->next = NULL;
	Invert_list1(head->next);
	node->next = next;
	//Node*next = plist;
	//Node*Nodetemp = NULL;
	//Node*head = plist;
	//if (plist == NULL || plist->next == NULL)
	//	return;
	//if (next&&next->next != NULL)
	//{
	//	Datatype temp = head->data;
	//	while (next->next != NULL&&next->next->next != NULL)
	//	{
	//		next = next->next;
	//	}
	//	Nodetemp = next->next;
	//	head->data = next->next->data;
	//	next->next->data = temp;
	//	next->next = NULL;
	//	Invert_list1(plist->next);
	//}
	//next->next = Nodetemp;
}
//链表的逆序(非递归)
void Invert_list2(pList* pplist)
{
	Node*head = *pplist;
	Node*tail = NULL;
	if (head == NULL || head->next == NULL)
		return;
	while (head)
	{
		Node*next =head->next;
		head->next = tail;
		tail = head;
		head = next;
	}
	*pplist = tail;
}
//链表的合并
pList Merge(pList*ls1, pList*ls2)
{
	Node*head = NULL;
	Node*pls1 = *ls1;
	Node*pls2 = *ls2;
	Node*tail = NULL;
	if (*ls1 == NULL)
		return *ls2;
	if (*ls2 == NULL)
		return *ls1;
	if (pls1->data > pls2->data)
	{
		head = pls1;
		pls1 =head->next;
	}
	else
	{
		head = pls2;
		pls2 = head->next;
	}
	tail = head;
	while (pls2&&pls1)
	{
		if (pls1->data > pls2->data)
		{
			tail->next= pls1;
			pls1 = pls1->next;
		}
		else
		{
			tail->next = pls2;
			pls2 = pls2->next;
		}
		tail = tail->next;
	}
	if (pls1)
	{
		tail->next = pls1;
	}
	else
		tail->next = pls2;
	*ls1 = NULL;
	*ls2 = NULL;
	return head;
}
//链表的合并递归版本
pList _Merge(pList*ls1, pList*ls2)
{
	Node*pls1 = *ls1;
	Node*pls2 = *ls2;
	Node*tail = NULL;
	if (pls1 == NULL)
		return pls2;
	if (pls2 == NULL)
		return pls1;
	if (pls1->data > pls2->data)
	{
		tail = pls1;
		tail->next = _Merge(&pls1->next, &pls2);
	}
	else
	{
		tail = pls2;
	    tail->next = _Merge(&pls1, &pls2->next);
	}
	return tail;
}
//删除非尾节点
void DelNotTail(pNode pos)
{

	Node*del = NULL;
	if (pos == NULL)
		return;
	del = pos->next;
	if (pos->next == NULL)
	{
		return;
	}
	pos->data = del->data;
	pos->next = del->next;
	free(del);
}
//在一个位置前插入一个节点	
void InsertFrontNode(pNode pos, Datatype x)
{
	Node*next = NULL;
	if (pos == NULL)
		return;
	next = (Node*)malloc(sizeof(Node));
	next->data = pos->data;
	next->next = pos->next;
	pos->next = next;
	pos->data = x;
	
}
//约瑟夫环
void JosephCycle(pList *plist, int k)
{
	Node*head = *plist;
	Node*del = NULL;
	int n = k;
	if (head == NULL)
		return;
	while (head&&head != head->next)
	{
		n = k;
		while (--n>1)
		{
			head = head->next;
		}
		if (head)
		{
			del = head->next;
			if (del)
			{
				head->next = del->next;
				printf("%d   ", del->data);
				free(del);
				head = head->next;
			}
		}
	}
	if (head)
	{
		printf("\n最后一个是%d", head->data);
		free(head);
		*plist = NULL;
	}
}
//寻找一个链表的中间节点，只能遍历一次
pNode FindMidNode(pList plist)
{
	Node*fast = plist;
	Node*slow = plist;
	if (fast == NULL)
	{
		return NULL;
	}
	while (fast!=NULL&&fast->next != NULL)
	{
		fast = fast->next->next;
		slow = slow->next;
	}
	return slow;
}
//对链表的冒泡排序
void Bubblesort(pList plist);
//删除倒数第k个元素
void DelKNode(pList *plist, int k)
{
	assert(plist || k == 0);
	Node*first = *plist;
	if (k == 1 && first&&first->next == NULL)
	{
		free(*plist);
		*plist = NULL;
		return;
	}
	if (k == 1)
	{
		while (first&&first->next&&first->next->next)
		{
			first = first->next;
		}
		free(first->next);
		first->next = NULL;
		return;
	}
	size_t i = 0;
	Node*second = *plist;
	while (first&&i < k)
	{
		first = first->next;
		++i;
	}
	if (i < k)
		return;
	while (first)
	{
		first = first->next;
		second = second->next;
	}
	Node*next = second->next->next;
	second->data = second->next->data;
	free(second->next);
	second->next = next;
	/*Node*fast = *plist;
	Node*slow = *plist;
	Node*head = *plist;
	Node*del = NULL;
	if (head == NULL)
		return;
	if (k == 1)
	{
		if (head->next == NULL)
		{
			free(head);
			*plist = NULL;
			return;
		}
		while (head->next->next != NULL)
		{
			head = head->next;
		}
		free(head->next);
		head->next = NULL;
		return;
	}
	while (fast)
	{

		while (fast != NULL&&k-->1)
		{
			fast = fast->next;
		}
		if (k == 1)
		{
			del = *plist;
			*plist = del->next;
			free(del);
			return;
		}
		if (k > 1)
			return;
		if (fast)
		fast = fast->next;
		slow = slow->next;
	}
	del = slow->next;
	slow->next = del->next;
	free(del);*/
}
//判断一个单链表是否有环
pNode CheckCycle(pList plist)
{
	Node*fast = plist;
	Node*slow = plist;
	if (fast == NULL)
		return NULL;
	while(fast != NULL&&fast->next!=NULL)
	{
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow)
			return slow;
	}
	return NULL;
}
//求一个带环单链表环的长度
int GetCircleLength(pNode meet)
{
	int count = 0;
	Node*fast = meet;
	Node*slow = meet;
	if (meet == NULL)
		return 0;
	while (1)
	{
		++count;
		fast = fast->next->next;
		slow = slow->next;
		if (slow == fast)
			return count;
	}
	return count;
}
//法一：求一个带环单链表环的入口点
pNode GetCircleEntreNode(pNode meet, pList plist)
{

	Node*pmeet = meet;
	Node*pplist = plist;
	if (meet == NULL || plist == NULL)
		return NULL;
	while (pmeet != pplist)
	{
		pmeet = pmeet->next;
		pplist = pplist->next;
	}
	return  pmeet;
}
//法二：求一个带环单链表环的入口点
pNode _GetCircleEntreNode2(pList plist, int Length)
{

}
//判断两个不带环单链表是否相交
pNode  CheckCross(pList plist1, pList plist2);
//求两个相交不带环单链表的交点
pNode GetCrossNode(pList plist1, pList plist2);

