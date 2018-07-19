#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include"list.h"
//��ӡ������Ϣ
void display(pList plist)
{
	Node*next = plist;
	while (plist)
	{
		printf("%d-->", plist->data);
		plist = plist->next;
	}

}
//��������
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
//����ĳ��Ԫ��
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
//ͷ����������
void pushfront(pList*pplist, Datatype x)
{
	Node*node = (Node*)malloc(sizeof(Node));
	node->data = x;
	node->next = *pplist;
	*pplist = node;
}
//�����ӡ��������
void Invert_display(pList plist)
{
	if (plist->next)
		Invert_display(plist->next);
	printf("-->%d", plist->data);
}
//���������(�ݹ�汾)
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
//���������(�ǵݹ�)
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
//����ĺϲ�
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
//����ĺϲ��ݹ�汾
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
//ɾ����β�ڵ�
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
//��һ��λ��ǰ����һ���ڵ�	
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
//Լɪ��
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
		printf("\n���һ����%d", head->data);
		free(head);
		*plist = NULL;
	}
}
//Ѱ��һ��������м�ڵ㣬ֻ�ܱ���һ��
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
//�������ð������
void Bubblesort(pList plist);
//ɾ��������k��Ԫ��
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
//�ж�һ���������Ƿ��л�
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
//��һ�������������ĳ���
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
//��һ����һ����������������ڵ�
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
//��������һ����������������ڵ�
pNode _GetCircleEntreNode2(pList plist, int Length)
{

}
//�ж������������������Ƿ��ཻ
pNode  CheckCross(pList plist1, pList plist2);
//�������ཻ������������Ľ���
pNode GetCrossNode(pList plist1, pList plist2);

