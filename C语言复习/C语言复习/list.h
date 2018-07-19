#ifndef __LIST_H__
#define __LIST_H__
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
typedef  int   Datatype;
typedef struct Node
{
	Datatype data;
	struct Node*next;
}Node, *pNode, *pList;
//打印链表信息
void display(pList plist);
//销毁链表
void Destroylist(pList*pplist);
//查找某个元素
pNode find(pList plist, Datatype x);
//头部插入数据
void pushfront(pList*pplist, Datatype x);
//逆序打印链表内容
void Invert_display(pList plist);
//链表的逆序(递归版本)
void Invert_list1(pList plist);
//链表的逆序(非递归)
void Invert_list2(pList* pplist);
//链表的合并
pList Merge(pList*ls1, pList*ls2);
//链表的合并递归版本
pList _Merge(pList*ls1, pList*ls2);
//删除非尾节点
void DelNotTail(pNode pos);
//在一个位置前插入一个节点
void InsertFrontNode(pNode pos, Datatype x);
//约瑟夫环
void JosephCycle(pList *plist, int k);
//寻找一个链表的中间节点，只能遍历一次
pNode FindMidNode(pList plist);
//对链表的冒泡排序
void Bubblesort(pList plist);
//删除倒数第k个元素
void DelKNode(pList *plist, int k);
//判断一个单链表是否有环
pNode CheckCycle(pList plist);
//求一个带环单链表环的长度
int GetCircleLength(pNode meet);
//法一：求一个带环单链表环的入口点
pNode GetCircleEntreNode(pNode meet, pList plist);
//法二：求一个带环单链表环的入口点
pNode _GetCircleEntreNode2(pList plist, int Length);
//判断两个不带环单链表是否相交
pNode  CheckCross(pList plist1, pList plist2);
//求两个相交不带环单链表的交点
pNode GetCrossNode(pList plist1, pList plist2);
#endif //__LIST_H__