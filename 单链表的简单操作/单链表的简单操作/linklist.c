
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
//β��
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
//ͷɾ
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
//����
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
//ָ��λ�ò��룬ͷ�ڵ�λ��Ϊ1
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
	if (head == NULL)//��������
	{
		*pplist = temp;
		return;
	}
	if (pos <= 1)//����λ��Ϊ1��С��1����
	{
		temp->next = *pplist;
		*pplist = temp;
		return;
	}
	while ((i < pos - 1) && (head->next != NULL))//����λ�ô���1����
	{
		head = head->next;
		i++;
	}
	temp->next = head->next;
	head->next = temp;
}
//ɾ��ָ��λ�ã�ͷ�ڵ�λ��Ϊ1
void erase(list**pplist, int pos)
{
	assert(pplist);
	pNode head = *pplist;
	pNode temp = *pplist;
	int i = 1;
	//��������
	if (head == NULL)
		return;
	//һ���ڵ㴦��
	if (head->next == NULL)
	{
		free(head);
		*pplist = NULL;
		return;
	}
	//ɾ��λ��С�ڵ���1ʱ����
	if (pos <= 1)
	{
		temp = (*pplist)->next;
		free(*pplist);
		*pplist = temp;
		return;
	}
	//ɾ��λ�ô���1ʱ����
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
//ɾ��ָ��Ԫ��
void Remove(list**pplist, DateType x)
{
	assert(pplist);
	pNode head = *pplist;
	pNode temp = NULL;
	//������ʱ����
	if (head == NULL)
		return;
	//��ָ��Ԫ��Ϊͷ�ڵ�ʱ����
	if ((*pplist)->data == x)
	{
		*pplist = (*pplist)->next;
		return;
	}
	//��ָ��Ԫ��Ϊ��ͷ�ڵ�ʱ����
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
//ɾ��ָ������Ԫ��
void Removeall(list**pplist, DateType x)
{
	assert(pplist);
	pNode head = *pplist;
	pNode temp = NULL;
	//������ʱ����
	if (head == NULL)
		return;
	//ɾ��ָ������Ԫ�أ�ֻҪ����������Ȼ��ɾ��ָ��Ԫ��
	while (head != NULL)
	{
		//ɾ����ָ��Ԫ��Ϊͷ�ڵ㴦��
		if ((*pplist)->data == x)
		{
			*pplist = (*pplist)->next;
			head = *pplist;
			//��������ѭ��
			continue;
		}
		if (head->data == x)
		{
			//head��ָ�򱾽ڵ����һ���ڵ�
			head = head->next;
			//ɾ��ָ��Ԫ��
			free(temp->next);
			//������һ���ڵ��λ��
			temp->next = head;
			continue;
		}
		//�������ʱ
		//ʹtemp���浱ǰ�ڵ��λ��
		temp = head;
		//ʹheadָ����һ���ڵ�
		head = head->next;
	}
}
