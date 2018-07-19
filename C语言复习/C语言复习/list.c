#define _CRT_SECURE_NO_WARNINGS 1
#include"list.h"
//��ӡ������Ϣ
void display(pList plist)
{
	Node*head = plist;
	while (head != NULL)
	{
		printf("%d-->", head->data);
		head = head->next;
	}
}
//��������
void Destroylist(pList*pplist)
{
	assert(pplist);
	Node**head = pplist;
	Node*temp = NULL;
	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
}
//����ĳ��Ԫ��
pNode find(pList plist, Datatype x)
{
	Node*node = plist;
	while (node != NULL)
	{
		if (node->data == x)
		{
			return node;
		}
		node = node->next;
	}
	return NULL;
}
//ͷ����������
void pushfront(pList*pplist, Datatype x)
{
	assert(pplist);
	Node*temp = NULL;
	Node*node = malloc(sizeof(Node));
	if (node==NULL)
		return;
	node->data = x;
	node->next = *pplist;
	*pplist = node;
}
//�����ӡ��������
void Invert_display(pList plist)
{
	Node*node = plist;
	if (node == NULL)
		return;
	if (node->next != NULL)
		Invert_display(node->next);
	printf("%d<--", node->data);
	return;
}
//���������(�ݹ�汾)
void Invert_list1(pList plist)
{
	Node*node = plist;
	Datatype data = 0;
	Node*temp = NULL;
	if (node == NULL || node->next == NULL)
		return ;
	while (node != NULL && node->next != NULL&&node->next->next != NULL)
	{
		node = node->next;
	}
	data = node->next->data;
	node->next->data = plist->data;
	plist->data = data; 
	temp = node->next;
	node->next = NULL;
	if (plist->next!= NULL)
		Invert_list1(plist->next);
	node->next= temp;
}
//���������(�ǵݹ�)
void Invert_list2(pList* pplist)
{
	Node*head = *pplist;
	Node*next =NULL;
	Node*temp = NULL;
	if (head == NULL || head->next == NULL)
		return;
	while (head!=NULL)
	{
		next = head->next;
		head->next = temp;
		temp = head;
		head = next;
	}
	*pplist = temp;
}
//����ĺϲ�
pList Merge(pList*ls1, pList*ls2)
{
	assert(ls1&&ls2);
	Node*ret = NULL;
	Node*head1 = *ls1;
	Node*head2 = *ls2;
	pList list = NULL;
	if (*ls1 == NULL)
		return *ls2;
	if (*ls2 == NULL)
		return *ls2;
	if (head1->data < head2->data)
	{
		ret = head1;
		head1 = head1->next;
	}
	else
	{
		ret = head2;
		head2 = head2->next;
	}
	list = ret;
	list->next = NULL;
	while (head1&&head2)
	{
		if (head1->data < head2->data)
		{
			list->next = head1;
			head1 = head1->next;
		}
		else
		{
			list->next = head2;
			head2 = head2->next;
		}
		list = list->next;
		list->next = NULL;
	}
	if (head1 == NULL)
		list->next = head2;
	if (head2 == NULL)
		list->next = head1;
	*ls1 = NULL;
	*ls2 = NULL;
	return ret;
}
//����ĺϲ��ݹ�汾
pList _Merge(pList*ls1, pList*ls2)
{
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
}
//ɾ����β�ڵ�
void DelNotTail(pNode pos)
{
	Node*node = NULL;
	if (pos==NULL||pos->next == NULL)
		return ;
	pos->data = pos->next->data;
	node = pos->next;
	pos->next = pos->next->next;
	free(node);
}
//��һ��λ��ǰ����һ���ڵ�
void InsertFrontNode(pNode pos, Datatype x)
{
	Node*node = malloc(sizeof(Node));
	if (node == NULL)
		return;
	node->data = pos->data;
	pos->data = x;
	node->next = pos->next;
	pos->next = node;
}
//Լɪ��
void JosephCycle(pList *plist, int k)
{
	Node*node = *plist;
	Node*temp=NULL;
	int i = 1;
	if (plist == NULL)
		return;
	while (node != node->next)
	{
		
		if (i == k-1)
		{
			temp = node->next;
			node->next = node->next->next;
			i = 1;
			printf("%d--", temp->data);
			free(temp);
			node = node->next;
		}
		i++;
		node = node->next;
	}
	*plist = node;
}
//Ѱ��һ��������м�ڵ㣬ֻ�ܱ���һ��
pNode FindMidNode(pList plist)
{
	Node*fast = plist;
	Node*slow = plist;
	while (fast != NULL&&fast->next != NULL)
	{
		fast = fast->next->next;
		slow = slow->next;
	}
	return slow;
}
//�������ð������
void Bubblesort(pList plist)
{
	Node*node1 = plist;
	Node* node2 = NULL;
	Node* flag = NULL;
	Datatype temp = 0;
	if (plist == NULL || plist->next == NULL)
		return;
	node2 = plist->next;
	while (node2 != flag)
	{
		while (node2 != flag)
		{
			if (node1->data < node2->data)
			{
				temp = node1->data;
				node1->data = node2->data;
				node2->data = temp;
			}
			node1 = node2;
			node2 = node1->next;
		}
		flag = (Node*)node1;
		node2 = plist->next;
		node1 = plist;
	}	
}
//ɾ��������k��Ԫ��
void DelKNode(pList *plist, int k)
{
	Node*node = *plist;
	Node*first = *plist;
	Node*slow = *plist;
	if (*plist == NULL)
		return;
	if (k <= 0)
		return;
	if (k == 1)
	{
		while (node->next != NULL&&node->next->next != NULL)
		{
			node = node->next;
		}
		if ((*plist)->next == NULL)
		{
			free(*plist);
			*plist = NULL;
			return;
		}
		free(node->next);
		node->next = NULL;
		return;
	}
	while (first!=NULL)
	{
		while (first!=NULL&&k-->1)
		{
			first = first->next;
		}
		if (k == 1)
		{
			node = (*plist)->next;
			free(*plist);
			*plist = node;
			return;
		}
		if (k > 1)
		{
			return;
		}
		if (first != NULL)
		{
			first = first->next;
			slow = slow->next;
		}
	}
    slow->data = slow->next->data;
	Node*temp = slow->next;
	slow->next = slow->next->next;
	free(temp);
}
//�ж�һ���������Ƿ��л�
pNode CheckCycle(pList plist);
//��һ�������������ĳ���
int GetCircleLength(pNode meet);
//��һ����һ����������������ڵ�
pNode GetCircleEntreNode(pNode meet, pList plist);
//��������һ����������������ڵ�
pNode _GetCircleEntreNode2(pList plist, int Length);
//�ж������������������Ƿ��ཻ
pNode  CheckCross(pList plist1, pList plist2);
//�������ཻ������������Ľ���
pNode GetCrossNode(pList plist1, pList plist2);

