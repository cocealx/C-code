#include"list.h"
//打印
void display(pList plist)
{
	pNode head = plist;
	while (head != NULL)
	{
		printf("%d-->", head->data);
		head = head->next;
	}
	printf("over\n");
}
//查找特定元素
pNode find(pList plist, Datatype x)
{
	pNode head = plist;
	while (plist != NULL)
	{
		if (plist->data == x)
			return plist;
		plist = plist->next;
	}
	return NULL;
}
//销毁
void Destroylist(pList*pplist)
{
	pNode temp = NULL;
	assert(pplist);
	while (*pplist != NULL)
	{
		temp = (*pplist)->next;
		free(*pplist);
		*pplist = temp;
	}
}
//头插
void pushfront(pList*pplist, Datatype x)
{
	assert(pplist);
	pNode node = (pNode)malloc(sizeof(Node));
	if (node == NULL)
	{
		perror("malloc");
		exit(EXIT_FAILURE);
	}
	node->data = x;
	node->next = NULL;
	node->next = *pplist;
	*pplist = node;
}
//逆序打印
void Invert_display(pList pplist)
{
	if (pplist == NULL)
	{
		return;
	}
	if (pplist!= NULL)
	{
		Invert_display(pplist->next);
	}
	printf("%d-->", pplist->data);
}
//链表的逆序
void Invert_list(pList*pplist)
{
	assert(pplist);
	//保存当前要处理的节点的上一个节点的位置
	pNode temp = NULL;
	//当前要处理的节点位置
	pNode cur1 = *pplist;
	//保存当前要处理的节点的指向
	pNode cur2 = NULL;
	if (*pplist == NULL || (*pplist)->next == NULL)
		return;
	//当要处理的节点为空时，说明整个链表已经逆序完成。
	while (cur1 != NULL)
	{
		//保存当前节点的指向
		cur2 = cur1->next;
		//把当前节点的指向改为上一节点
		cur1->next = temp;
		//当前节点就成为下一个节点的的指向，所以提前保存起来
		temp = cur1;
		//使下次循环要处理的节点指向下一个节点
		cur1 = cur2;
	}
	*pplist = temp;
}
//合并两个有序链表非递归
pList Merge(pList*ls1, pList*ls2)
{
	assert(ls1&&ls2);
	pList New_list = NULL;
	pNode cur1 = *ls1;
	pNode cur2 = *ls2;
	pNode temp = NULL;
	pNode head = NULL;
	pNode tail = NULL;
	if (*ls1 == NULL&&*ls2 == NULL)
		return NULL;
	if (*ls1 == *ls2)
		return*ls1;
	if (*ls1 == NULL)
		return *ls2;
	if (*ls2 == NULL)
		return *ls1;
	if (cur1->data < cur2->data)
	{
		head = cur2;
		cur2 = cur2->next;
	}
	else
	{
		head = cur1;
		cur1 = cur1->next;
	}
	tail = head;
	tail->next = NULL;
	while (cur1 != NULL&&cur2 != NULL)
	{
		if (cur1->data < cur2->data)
		{
			tail->next = cur2;
			cur2 = cur2->next;
		}
		else
		{
			tail->next = cur1;
			cur1 = cur1->next;
		}
		tail = tail->next;
		tail->next=NULL;
	}
	if (cur1 == NULL)
		tail->next = cur2;
	else 
		tail->next = cur1;
	New_list = head;
	*ls1 = NULL;
	*ls2 = NULL;
	return New_list;
}
//递归合并两个有序链表，合并仍然是有序的
//从两个链表里挑出一个元素，并把他的地址返回去，最后一个一个元素串起来，形成一条新链表
pList _Merge(pList*ls1, pList*ls2)
{
	assert(ls1&&ls2);
	pNode cur1 = *ls1;
	pNode cur2 = *ls2;
	pNode head = NULL;
	static int i = 1;
	//以下四个if语句进行特殊处理
	if (*ls1 == NULL&&*ls2 == NULL)
		return NULL;
	if (*ls1 == *ls2)
		return*ls1;
	if (*ls1 == NULL)
		return *ls2;
	if (*ls2 == NULL)
		return *ls1;
	//这个if语句在两个链表中跳出一个元素，把他的地址赋值给head
	if (cur1->data < cur2->data)
	{
		head = cur2;
		cur2 = cur2->next;
	}
	else
	{
		head = cur1;
		cur1 = cur1->next;
	}
	head->next = NULL;
	if (i == 1)
	{
		*ls1 = NULL;
		*ls2 = NULL;
		i++;
	}
	//如果两个链表没有处理完，就递归进行处理
	if (cur1 != NULL||cur2!=NULL)
		//用本次的head->next接受下一次处理好的节点的位置
		head->next = _Merge(&cur1, &cur2);
	//正常处理完之后返回处理的位置
	return head;
	/*
	static i = 0;
	i++;
	Node*tail = NULL;
	if (*ls1 == NULL)
	return*ls2;
	if (*ls2 == NULL)
	return *ls1;
	if ((*ls1)->data > (*ls2)->data)
	{
	tail = *ls1;
	tail->next = _Merge(&((*ls1)->next), ls2);
	}
	else
	{
	tail = *ls2;
	tail->next = _Merge(ls1, &((*ls2)->next));
	}
	i--;
	if (i == 1)
	{
	*ls1 = NULL;
	*ls2 = NULL;
	}
	return tail;
	*/
}
//删除一个非尾节点
void DelNotTail(pNode pos)
{
	pNode temp = NULL;
	pNode head = pos;
	if (head == NULL || head->next == NULL)
		return;
	//把该节点后面的节点内容覆盖到该节点，然后删除后面一个节点
	temp = head->next;
	head->data = head->next->data;
	head->next = head->next->next;
	free(temp);
}
//在一个位置前插入一个节点
void InsertFrontNode(pNode pos, Datatype x)
{
	pNode temp = (pNode)malloc(sizeof(Node));
	if (pos == NULL)
		return;
	if (temp == NULL)
	{
		perror("malloc");
		return;
	}
	//在该节点后面增加一个节点，交换两个节点数据，就相当于在该节点前面开辟一个节点一样
	temp->next = pos->next;
	pos->next = temp;
	temp->data = pos->data;
	pos->data = x;
}
//约瑟夫环
void JosephCycle(pList plist, int k)
{
	pNode temp = NULL;
	pNode head = plist;
	int count = k;
	if (plist == NULL)
		return;
/*	//删除后面节点法
	while (head!=head->next)
	{
		count = k;
		while (count- 1 > 0)
		{
			head = head->next;
			count--;
		}
		printf("%d ", head->data);
		temp = head->next;
		head->data = head->next->data;
		head->next = head->next->next;
		free(temp);	
	}*/
	//删除当前节点
	while (head != head->next)
	{
		count = k;
		while (count - 2 > 0)
		{
			head = head->next;
			count--;
		}
		printf("%d ", head->next->data);
		temp = head->next;
		head->next = head->next->next;
		free(temp);
		head = head->next;
	}
}
//寻找一个链表的中间节点，只能遍历一次
pNode FindMidNode(pList plist)
{
	pNode fast = plist;
	pNode slow = plist;
	if (fast == NULL)
		return NULL;
	while (fast!=NULL&&fast->next != NULL)
	{
		fast = fast->next->next;
		slow = slow->next;
	}
	return slow;
}
//对链表的冒泡排序
void Bubblesort(pList  plist)
{
	pNode cur1 = plist;
	pNode cur2 = NULL;
	//每次循环的标记
	pNode flag = NULL;
	Datatype Datmp = 0;
	if (plist == NULL||plist->next == NULL)
		return;
	while (cur1->next != flag)
	{
		
		while (cur1->next!= flag)
		{
			if (cur1->data < cur1->next->data)
			{
				Datmp = cur1->data;
				cur1->data = cur1->next->data;
				cur1->next->data = Datmp;
			}
			cur1 = cur1->next;
		}
		flag = cur1;
		cur1 = plist;
	}
}
//删除倒数第k个元素
void DelKNode(pList plist, int k)
{
	pNode First = plist;
	pNode second = plist;
	pNode temp = NULL;
	if (plist == NULL)
		return;
	if (k == 1)
	{
		while (plist->next != NULL)
		{
			temp = plist;
			plist = plist->next;
		}
		free(plist);
		temp->next = NULL;
		return;
	}
	while (First->next != NULL)
	{
		First = First->next;
		if (k <= 1)
		{
			second = second->next;
		}
		k--;
	}
	if (k <= 1&&second->next!=NULL)
	{
		second->data = second->next->data;
		temp = second->next;
		second->next = second->next->next;
		free(temp);
	}
}
//判断一个单链表是否有环
pNode CheckCycle(pList plist)
{
	pNode Fast = plist;
	pNode Slow = plist;
	while (Fast != NULL&&Fast->next!=NULL)
	{
		Fast = Fast->next->next;
		Slow = Slow->next; 
		if (Slow == Fast)
		{
			return Fast;
		}
	}
	return NULL;
}
//求一个带环单链表环的长度
int GetCircleLength(pNode meet)
{
	pNode Fast = meet;
	pNode Slow = meet;
	int count = 1;
	while (1)
	{
		Fast = Fast->next->next;
		Slow = Slow->next;
		if (Fast == Slow)
		{
			return count;
		}
		count++;
	}
	return count;
}
//法一：求一个带环单链表环的入口点
pNode GetCircleEntreNode(pNode meet, pList plist)
{
	assert(meet&&plist);
	pNode First = plist;
	pNode second = meet;
	while (First != second)
	{
		First = First->next;
		second = second->next;
	}
	return First;
}
//法二：求一个带环单链表环的入口点
pNode _GetCircleEntreNode2(pList plist, int Length)
{
	assert(plist);
	pNode First = plist;
	pNode second = plist;
	while (1)
	{
		if (Length <= 0)
			second = second->next;
		First = First->next;
		if (First == second)
			break;
		Length--;
	}
	return First;
}
//判断两个不带环的单链表是否相交
pNode CheckCross(pList plist1, pList plist2)
{
	pNode head1 = plist1;
	pNode head2 = plist2;
	if (plist1 == NULL || plist2 == NULL)
		return NULL;
	while (head1->next != NULL)
	{
		head1 = head1->next;
	}
	while (head2->next != NULL)
	{
		head2 = head2->next;
	}
	if (head1 == head2)
		return head1;
	return NULL;
}
//求两个相交不带环单链表的交点
pNode GetCrossNode(pList plist1, pList plist2)
{
	pNode head1 = plist1;
	pNode head2 = plist2;
	pNode meet = NULL;
	pNode EntryCross = NULL;
	pNode tail = NULL;
	tail = CheckCross(head1,head2);
	if (tail == NULL)
		return NULL;
	//把一个链表的头，接到链表尾上，形成一个带环链表，变成求环的入口点问题
	tail->next = head1;
	meet = CheckCycle(head2);
	EntryCross =  GetCircleEntreNode(meet, head2);
	tail->next = NULL;
	return EntryCross;
}