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
//��ӡ������Ϣ
void display(pList plist);
//��������
void Destroylist(pList*pplist);
//����ĳ��Ԫ��
pNode find(pList plist, Datatype x);
//ͷ����������
void pushfront(pList*pplist, Datatype x);
//�����ӡ��������
void Invert_display(pList plist);
//���������(�ݹ�汾)
void Invert_list1(pList plist);
//���������(�ǵݹ�)
void Invert_list2(pList* pplist);
//����ĺϲ�
pList Merge(pList*ls1, pList*ls2);
//����ĺϲ��ݹ�汾
pList _Merge(pList*ls1, pList*ls2);
//ɾ����β�ڵ�
void DelNotTail(pNode pos);
//��һ��λ��ǰ����һ���ڵ�
void InsertFrontNode(pNode pos, Datatype x);
//Լɪ��
void JosephCycle(pList *plist, int k);
//Ѱ��һ��������м�ڵ㣬ֻ�ܱ���һ��
pNode FindMidNode(pList plist);
//�������ð������
void Bubblesort(pList plist);
//ɾ��������k��Ԫ��
void DelKNode(pList *plist, int k);
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
#endif //__LIST_H__