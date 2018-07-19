#include"list.h"
//��ӡ
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
//�����ض�Ԫ��
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
//����
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
//ͷ��
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
//�����ӡ
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
//���������
void Invert_list(pList*pplist)
{
	assert(pplist);
	//���浱ǰҪ����Ľڵ����һ���ڵ��λ��
	pNode temp = NULL;
	//��ǰҪ����Ľڵ�λ��
	pNode cur1 = *pplist;
	//���浱ǰҪ����Ľڵ��ָ��
	pNode cur2 = NULL;
	if (*pplist == NULL || (*pplist)->next == NULL)
		return;
	//��Ҫ����Ľڵ�Ϊ��ʱ��˵�����������Ѿ�������ɡ�
	while (cur1 != NULL)
	{
		//���浱ǰ�ڵ��ָ��
		cur2 = cur1->next;
		//�ѵ�ǰ�ڵ��ָ���Ϊ��һ�ڵ�
		cur1->next = temp;
		//��ǰ�ڵ�ͳ�Ϊ��һ���ڵ�ĵ�ָ��������ǰ��������
		temp = cur1;
		//ʹ�´�ѭ��Ҫ����Ľڵ�ָ����һ���ڵ�
		cur1 = cur2;
	}
	*pplist = temp;
}
//�ϲ�������������ǵݹ�
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
//�ݹ�ϲ��������������ϲ���Ȼ�������
//����������������һ��Ԫ�أ��������ĵ�ַ����ȥ�����һ��һ��Ԫ�ش��������γ�һ��������
pList _Merge(pList*ls1, pList*ls2)
{
	assert(ls1&&ls2);
	pNode cur1 = *ls1;
	pNode cur2 = *ls2;
	pNode head = NULL;
	static int i = 1;
	//�����ĸ�if���������⴦��
	if (*ls1 == NULL&&*ls2 == NULL)
		return NULL;
	if (*ls1 == *ls2)
		return*ls1;
	if (*ls1 == NULL)
		return *ls2;
	if (*ls2 == NULL)
		return *ls1;
	//���if�������������������һ��Ԫ�أ������ĵ�ַ��ֵ��head
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
	//�����������û�д����꣬�͵ݹ���д���
	if (cur1 != NULL||cur2!=NULL)
		//�ñ��ε�head->next������һ�δ���õĽڵ��λ��
		head->next = _Merge(&cur1, &cur2);
	//����������֮�󷵻ش����λ��
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
//ɾ��һ����β�ڵ�
void DelNotTail(pNode pos)
{
	pNode temp = NULL;
	pNode head = pos;
	if (head == NULL || head->next == NULL)
		return;
	//�Ѹýڵ����Ľڵ����ݸ��ǵ��ýڵ㣬Ȼ��ɾ������һ���ڵ�
	temp = head->next;
	head->data = head->next->data;
	head->next = head->next->next;
	free(temp);
}
//��һ��λ��ǰ����һ���ڵ�
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
	//�ڸýڵ��������һ���ڵ㣬���������ڵ����ݣ����൱���ڸýڵ�ǰ�濪��һ���ڵ�һ��
	temp->next = pos->next;
	pos->next = temp;
	temp->data = pos->data;
	pos->data = x;
}
//Լɪ��
void JosephCycle(pList plist, int k)
{
	pNode temp = NULL;
	pNode head = plist;
	int count = k;
	if (plist == NULL)
		return;
/*	//ɾ������ڵ㷨
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
	//ɾ����ǰ�ڵ�
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
//Ѱ��һ��������м�ڵ㣬ֻ�ܱ���һ��
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
//�������ð������
void Bubblesort(pList  plist)
{
	pNode cur1 = plist;
	pNode cur2 = NULL;
	//ÿ��ѭ���ı��
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
//ɾ��������k��Ԫ��
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
//�ж�һ���������Ƿ��л�
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
//��һ�������������ĳ���
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
//��һ����һ����������������ڵ�
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
//��������һ����������������ڵ�
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
//�ж������������ĵ������Ƿ��ཻ
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
//�������ཻ������������Ľ���
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
	//��һ�������ͷ���ӵ�����β�ϣ��γ�һ��������������󻷵���ڵ�����
	tail->next = head1;
	meet = CheckCycle(head2);
	EntryCross =  GetCircleEntreNode(meet, head2);
	tail->next = NULL;
	return EntryCross;
}