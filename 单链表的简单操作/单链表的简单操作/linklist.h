#ifndef  __LINK_LIST__
#define  __LINK_LIST__
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
typedef int DateType;
typedef struct Node
{
	DateType data;
	struct Node* next;
}Node, *pNode, list;
//��ʼ���������������
void InitLinkList(list** pplist);
void Destroylist(list**pplist);
//β�������ɾ��Ԫ��
void pushback(list**pplist, DateType x);
void popback(list**pplist);
//ͷ�������ɾ��Ԫ��
void pushfront(list**pplist, DateType x);
void popfront(list**pplist);
//����
pNode find(list *plist, DateType x);
//ָ��λ�ò����ɾ��
void insert(list **pplist, int pos, DateType x);
void erase(list**pplist, int pos);
//ɾ��ָ��Ԫ��
void Remove(list**pplist, DateType x);
//ɾ��ָ������Ԫ��
void Removeall(list**pplist, DateType x);
//��������
void display(list* plist);
//�������С
int Size(list* plist);
#endif
