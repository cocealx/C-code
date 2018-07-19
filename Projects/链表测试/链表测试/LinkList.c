#include"linklis.h"
void display(list* plist)
{
	assert(plist);
	while (plist != NULL)
	{
		printf("%d ", plist->data);
		plist = plist->next;
	}
	printf("\n");
}

void InitLinkList(list** pplist)
{
	assert(pplist);
	*pplist = NULL;
}
void Destroylist(list**pplist)
{
	assert(pplist);
	while (*pplist != NULL)
	{
		pNode temp = (*pplist)->next;
		free(*pplist);
		*pplist = temp;
	}
}
//β��
void pushback(list**pplist,DateType x)
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
	if (head == NULL)//��������
	{
		*pplist = temp;
		return;
	}
	while (head->next != NULL)//�ǿ�������
	{
		head = head->next;
	}
	head->next = temp;
}
//βɾ
void popback(list**pplist)
{
	assert(pplist);
	pNode head = *pplist;
	pNode ptemp = NULL;
	if (*pplist == NULL)//��������
		return;
	if ((*pplist)->next == NULL)//һ���ڵ�Ĵ���
	{
		free(*pplist);
		*pplist = NULL;
		return;
	}
	while (head->next != NULL)//��ڵ㴦��
	{
		ptemp = head;
		head = head->next;
	}
	free(ptemp->next);
	ptemp->next = NULL;
}
//ͷ��
void pushfront(list**pplist,DateType x)
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
	//if (*pplist == NULL)//��������
	//{
	//	*pplist = node;
	//	return;
	//}
	////�ǿմ���
	node->next = *pplist;
	*pplist = node;
}
void popfront(list**pplist)
{
	assert(pplist);
	pNode temp=NULL;
	if ((*pplist)->next == NULL)
	{
		*pplist = NULL;
		return;
	}
	temp = *pplist;
	*pplist = (*pplist)->next;
	free(temp);
}
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
	if (head == NULL)
	{
		*pplist = temp;
		return;
	}
	if (pos <= 1)
	{
		temp->next = *pplist;
		*pplist = temp;
		return;
	}
	while( (i < pos-1)&&(head->next != NULL))
	{
		head = head->next;
		i++;
	}
	temp->next = head->next;
	head->next = temp;
}
void erase(list**pplist, int pos)
{
	assert(pplist);
	pNode head = *pplist;
	pNode temp = *pplist;
	int i = 1;
	if (head == NULL)
		return;
	if (head->next == NULL)
	{
		free(head);
		*pplist = NULL;
		return;
	}
	if (pos <= 1)
	{
		temp = (*pplist)->next;
		free(*pplist);
		*pplist = temp;
		return;
	}
	while (i < pos && head->next!= NULL)
	{
		temp = head;
		head = head->next;
		i++;
	}
	head = temp->next->next;
	free(temp->next);
	temp->next = head;
}
void Remove(list**pplist, DateType x)
{
	assert(pplist);
	pNode head = *pplist;
	pNode temp = NULL;
	if (head == NULL)
		return;
	if ((*pplist)->data == x)
	{
		*pplist = (*pplist)->next;
		return;
	}
	while (head!= NULL)
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
void Removeall(list**pplist, DateType x)
{
	assert(pplist);
	pNode head = *pplist;
	pNode temp = NULL;
	if (head == NULL)
		return;	
	while (head!= NULL)
	{
		if ((*pplist)->data == x)
		{
			*pplist = (*pplist)->next;
			head = *pplist;
			continue;
		}
		if (head->data == x)
		{
			head = head->next;
			free(temp->next);
			temp->next = head;
			continue;
		}
		temp = head;
		head = head->next;
	}
}