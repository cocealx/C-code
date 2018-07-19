#include"copy_list.h"
//����һ��������a1->b1->a2->b2->a3->b3->NULL;
void new_list(pList head)
{
	assert(head);
	pNode temp = NULL;
	while (head != NULL)
	{
		pNode node = (pNode)malloc(sizeof(Node));
		if (node == NULL)
		{
			perror("malloc");
			exit(EXIT_FAILURE);
		}
		node->data = head->data;
		node->next = head->next;
		head->next = node;
		head = node->next;
	}
}
//������b1�����ָ�븳ֵ
void copy_prand(pList head)
{
	assert(head);
	pNode dest_list = head->next;
	pNode src_list = head;
	while (1)
	{
		if (src_list->prand)
			dest_list->prand = src_list->prand->next;
		else
			dest_list->prand = NULL;
		src_list = dest_list->next;
		if (dest_list->next == NULL)
			break;
		dest_list = src_list->next;
	}
}
//��������
pNode sever_list(pList head)
{
	assert(head);
	//���������
	pList src_list = head;
	//����������
	pList dest_list = head->next;
	//������������β�ڵ�
	pNode dest_tail = dest_list;
	src_list->next = dest_tail->next;
	src_list = src_list->next;
	//ÿ�δ���һ���ڵ�
	while (1)
	{
		dest_tail->next = src_list->next;
		dest_tail = dest_tail->next;
		//����ѽ�������ԭ��������һ���ڵ㣬�ͽ���ѭ��
		if (dest_tail->next == NULL)
		{
			src_list->next = NULL;
			return dest_list;
		}
		src_list->next = dest_tail->next;
		src_list = src_list->next;
	}
	return dest_list;
}

//��ӡ������Ϣ
void display(pList plist)
{
	while (plist != NULL)
	{
		printf("[%d]-->(%d)-->", plist->data, plist->prand->data);
		plist = plist->next;
	}
	printf("over\n");
}