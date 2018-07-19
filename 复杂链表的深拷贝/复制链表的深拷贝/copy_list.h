#ifndef __COPY_LIST_H__
#define __COPY_LIST_H__
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
typedef  int   Datatype;
typedef struct Node
{
	Datatype data;
	struct Node*next;
	struct Node*prand;
}Node, *pNode, *pList;
//创建一个新链表a1->b1->a2->b2->a3->b3->NULL;
void new_list(pList head);
//给链表b1的随机指针赋值
void copy_prand(pList head);
//分离链表
pNode sever_list(pList head);
//打印链表信息
void display(pList plist);
#endif