#include"copy_list.h"
//����һ���µ�����
pNode copy_list(pList head)
{
	pNode New_list = NULL;
	//����ԭ����������һ��������
	new_list(head);
	//������������ָ����ֵ
	copy_prand(head);
	//��������õ�һ��һ��������
	New_list = sever_list(head);
	return New_list;
}
//���ٽڵ�
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
	//��������
	pndode1->next = pndode2;
	pndode2->next = pndode3;
	pndode3->next = pndode4;
	pndode4->next = pndode5;
	pndode5->next = NULL;
	//prand��ֵ
	pndode1->prand = pndode3;
	pndode2->prand = pndode4;
	pndode3->prand = pndode1;
	pndode4->prand = pndode3;
	pndode5->prand = pndode2;
	//�õ�һ���µ�����
	NEW_LIS = copy_list(pndode1);
	//�Ա�������������
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
