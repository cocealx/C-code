#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
typedef struct RandomListNode {
	int label;
	struct RandomListNode *next, *random;
	RandomListNode(int x) :
		label(x), next(NULL), random(NULL) {
	}
}*pNode;

class Solution {
public:
	RandomListNode* Clone(RandomListNode* pHead)
	{
		if (pHead == 0)
			return 0;
		RandomListNode*head = GetNewList(pHead);
		head = CopyRandom(head);
		head = SeparateRandom(head);
		return head;
	}
	RandomListNode*GetNewList(RandomListNode*phead)
	{
		RandomListNode*next = 0;
		RandomListNode*pcur = phead;
		while (pcur)
		{
			RandomListNode*NewNode = new RandomListNode(pcur->label);
			next = pcur->next;
			pcur->next = NewNode;
			NewNode->next = next;
			pcur = next;
		}
		return phead;
	}
	RandomListNode*CopyRandom(RandomListNode*head)
	{
		RandomListNode*next = head;
		RandomListNode*pcur = 0;
		while (next)
		{
			pcur = next->next;
			if (next->random)
				pcur->random = next->random->next;
			else
				pcur->random = NULL;
			next = pcur->next;
		}
		return head;
	}
	RandomListNode*SeparateRandom(RandomListNode*head)
	{
		RandomListNode*srclist = head;
		RandomListNode*destlist = head->next;
		RandomListNode*pcur = destlist->next;
		head->next = 0;
		destlist->next = 0;
		RandomListNode*tail1 = head;
		RandomListNode*tail2 = destlist;
		while (pcur)
		{
			tail1->next = pcur;
			tail1 = tail1->next;
			pcur = pcur->next;
			tail2->next = pcur;
			tail2 = tail2->next;
			pcur = pcur->next;
		}
		tail1->next = 0;
		tail2->next = 0;
		return destlist;
	}
};

void test1()
{
	pNode NEW_LIS = NULL;
	pNode pndode1 = new RandomListNode(1);
	pNode pndode2 = new RandomListNode(2);
	pNode pndode3 = new RandomListNode(3);
	pNode pndode4 = new RandomListNode(4);
	pNode pndode5 = new RandomListNode(5);
	//生成链表
	pndode1->next = pndode2;
	pndode2->next = pndode3;
	pndode3->next = pndode4;
	pndode4->next = pndode5;
	pndode5->next = NULL;
	//random赋值
	pndode1->random = pndode3;
	pndode2->random = pndode4;
	pndode3->random = pndode1;
	pndode4->random = pndode3;
	pndode5->random = pndode2;
	//得到一个新的链表
	Solution s1;
	NEW_LIS = s1.Clone(pndode1);

}
int main()
{
	test1();
	system("pause");
	return 0;

}