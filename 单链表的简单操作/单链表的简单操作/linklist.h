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
//初始化链表和销毁链表
void InitLinkList(list** pplist);
void Destroylist(list**pplist);
//尾部插入和删除元素
void pushback(list**pplist, DateType x);
void popback(list**pplist);
//头部插入和删除元素
void pushfront(list**pplist, DateType x);
void popfront(list**pplist);
//查找
pNode find(list *plist, DateType x);
//指定位置插入和删除
void insert(list **pplist, int pos, DateType x);
void erase(list**pplist, int pos);
//删除指定元素
void Remove(list**pplist, DateType x);
//删除指定所有元素
void Removeall(list**pplist, DateType x);
//遍历链表
void display(list* plist);
//求链表大小
int Size(list* plist);
#endif
