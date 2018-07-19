#include"copy_list.h"
//复制一个新的链表
pNode copy_list(pList head)
{
	pNode New_list = NULL;
	//利用原来链表生成一个新链表
	new_list(head);
	//给新链表的随机指针域赋值
	copy_prand(head);
	//分离链表得到一个一样的链表
	New_list = sever_list(head);
	return New_list;
}
//开辟节点
pNode MALL(Datatype x)
{
	pNode ret = NULL;
	ret = malloc(sizeof(Node));
	if (ret == NULL)
	{
		perror("malloc");
		exit(EXIT_FAILURE);
	}
	memset(ret, 0, sizeof(Node));
	ret->data = x;
	return ret;
}




void test()
{
	pNode NEW_LIS = NULL;
	pNode pndode1 = MALL(1);
	pNode pndode2 = MALL(2);
	pNode pndode3 = MALL(3);
	pNode pndode4 = MALL(4);
	pNode pndode5 = MALL(5);
	//生成链表
	pndode1->next = pndode2;
	pndode2->next = pndode3;
	pndode3->next = pndode4;
	pndode4->next = pndode5;
	pndode5->next = NULL;
	//prand赋值
	pndode1->prand = pndode3;
	pndode2->prand = pndode4;
	pndode3->prand = pndode1;
	pndode4->prand = pndode3;
	pndode5->prand = pndode2;
	//得到一个新的链表
	NEW_LIS = copy_list(pndode1);
	//对比两个链表内容
	display(pndode1);
	display(NEW_LIS);
}

//int main()
//{
//	test();
//	system("pause");
//	return 0;
//
//}
