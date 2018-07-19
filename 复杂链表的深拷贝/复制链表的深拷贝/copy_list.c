#include"copy_list.h"
//创建一个新链表a1->b1->a2->b2->a3->b3->NULL;
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
//给链表b1的随机指针赋值
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
//分离链表
pNode sever_list(pList head)
{
	assert(head);
	//最初的链表
	pList src_list = head;
	//分离后的链表
	pList dest_list = head->next;
	//分离后面链表的尾节点
	pNode dest_tail = dest_list;
	src_list->next = dest_tail->next;
	src_list = src_list->next;
	//每次处理一个节点
	while (1)
	{
		dest_tail->next = src_list->next;
		dest_tail = dest_tail->next;
		//如果已近处理到了原链表的最后一个节点，就结束循环
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

//打印链表信息
void display(pList plist)
{
	while (plist != NULL)
	{
		printf("[%d]-->(%d)-->", plist->data, plist->prand->data);
		plist = plist->next;
	}
	printf("over\n");
}