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
//����һ��������a1->b1->a2->b2->a3->b3->NULL;
void new_list(pList head);
//������b1�����ָ�븳ֵ
void copy_prand(pList head);
//��������
pNode sever_list(pList head);
//��ӡ������Ϣ
void display(pList plist);
#endif