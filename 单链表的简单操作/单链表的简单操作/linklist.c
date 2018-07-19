
#include"linklist.h"
void display(list* plist)
{
	while (plist != NULL)
	{
		printf("%d ", plist->data);
		plist = plist->next;
	}
	printf("\n");
}
int Size(list* plist)
{
	int size = 0;
	if (!plist)
		return 0;
	while (plist != NULL)
	{
		++size;
		plist = plist->next;
	}
	return size;
}
void InitLinkList(list** pplist)
{
	assert(pplist);
	*pplist = NULL;
}
//void Destroylist(list**pplist)
//{
//	assert(pplist);
//	while (*pplist != NULL)
//	{
//		pNode temp = (*pplist)->next;
//		free(*pplist);
//		*pplist = temp;
//	}
//}
void Destroylist(list**pplist)
{
	Node*temp = *pplist;
	if (temp == NULL)
		return;
	if (temp->next!=NULL&&temp->next->next != NULL)
		Destroylist(&temp->next);
	free(temp->next);
	(*pplist)->next = NULL;
	if (temp->next == NULL)
	{
		free(temp);
		*pplist = NULL;
	}
}
//尾插
void pushback(list**pplist, DateType x)
{
	assert(pplist);
	pNode head = *pplist;
	pNode temp = (pNode)malloc(sizeof(Node));
	if (!temp)
	{
		perror("malloc");
		exit(EXIT_FAILURE);
	}
	temp->data = x;
	temp->next = NULL;
	if (head == NULL)//空链表处理
	{
		*pplist = temp;
		return;
	}
	while (head->next != NULL)//非空链表处理
	{
		head = head->next;
	}
	head->next = temp;
}
//尾删
void popback(list**pplist)
{
	assert(pplist);
	pNode head = *pplist;
	pNode ptemp = NULL;
	if (*pplist == NULL)//空链表处理
		return;
	if ((*pplist)->next == NULL)//一个节点的处理
	{
		free(*pplist);
		*pplist = NULL;
		return;
	}
	while (head->next != NULL)//多节点处理
	{
		ptemp = head;
		head = head->next;
	}
	free(ptemp->next);
	ptemp->next = NULL;
}
//头插
void pushfront(list**pplist, DateType x)
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
//头删
void popfront(list**pplist)
{
	assert(pplist);
	pNode temp = NULL;
	if (*pplist == NULL)
		return;
	temp = *pplist;
	*pplist = (*pplist)->next;
	free(temp);
}
//查找
pNode find(list *plist, DateType x)
{
	assert(plist);
	pNode head = plist;
	while (head != NULL)
	{
		if (head->data == x)
			return head;
		head = head->next;
	}
	return NULL;
}
//指定位置插入，头节点位置为1
void insert(list **pplist, int pos, DateType x)
{
	assert(pplist);
	int i = 1;
	pNode head = *pplist;
	pNode temp = (pNode)malloc(sizeof(Node));
	if (temp == NULL)
	{
		perror("malloc");
		exit(EXIT_FAILURE);
	}
	temp->data = x;
	temp->next = NULL;
	if (head == NULL)//空链表处理
	{
		*pplist = temp;
		return;
	}
	if (pos <= 1)//插入位置为1或小于1处理
	{
		temp->next = *pplist;
		*pplist = temp;
		return;
	}
	while ((i < pos - 1) && (head->next != NULL))//插入位置大于1处理
	{
		head = head->next;
		i++;
	}
	temp->next = head->next;
	head->next = temp;
}
//删除指定位置，头节点位置为1
void erase(list**pplist, int pos)
{
	assert(pplist);
	pNode head = *pplist;
	pNode temp = *pplist;
	int i = 1;
	//空链表处理
	if (head == NULL)
		return;
	//一个节点处理
	if (head->next == NULL)
	{
		free(head);
		*pplist = NULL;
		return;
	}
	//删除位置小于等于1时处理
	if (pos <= 1)
	{
		temp = (*pplist)->next;
		free(*pplist);
		*pplist = temp;
		return;
	}
	//删除位置大于1时处理
	while (i < pos && head->next != NULL)
	{
		temp = head;
		head = head->next;
		i++;
	}
	head = temp->next->next;
	free(temp->next);
	temp->next = head;
}
//删除指定元素
void Remove(list**pplist, DateType x)
{
	assert(pplist);
	pNode head = *pplist;
	pNode temp = NULL;
	//空链表时处理
	if (head == NULL)
		return;
	//当指定元素为头节点时处理
	if ((*pplist)->data == x)
	{
		*pplist = (*pplist)->next;
		return;
	}
	//当指定元素为非头节点时处理
	while (head != NULL)
	{
		if (head->data == x)
		{
			head = head->next;
			free(temp->next);
			temp->next = head;
			return;
		}
		temp = head;
		head = head->next;
	}
}
//删除指定所有元素
void Removeall(list**pplist, DateType x)
{
	assert(pplist);
	pNode head = *pplist;
	pNode temp = NULL;
	//空链表时处理
	if (head == NULL)
		return;
	//删除指定所有元素，只要遍历该链表，然后删除指定元素
	while (head != NULL)
	{
		//删除的指定元素为头节点处理
		if ((*pplist)->data == x)
		{
			*pplist = (*pplist)->next;
			head = *pplist;
			//结束本次循环
			continue;
		}
		if (head->data == x)
		{
			//head的指向本节点的下一个节点
			head = head->next;
			//删除指定元素
			free(temp->next);
			//保存下一个节点的位置
			temp->next = head;
			continue;
		}
		//其他情况时
		//使temp保存当前节点的位置
		temp = head;
		//使head指向下一个节点
		head = head->next;
	}
}
