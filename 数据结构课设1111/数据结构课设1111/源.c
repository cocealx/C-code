#define _CRT_SECURE_NO_WARNINGS 1
#include"tree.h"
void test()
{
	Tree*root = NULL;
	printf("�������н�������'.'Ϊ������־\n");
	Creat(&root);
	printf("ǰ�������\n");
	perorder(root);
	printf("���������\n");
	Inorder(root);
	printf("���������\n");
	PosOrder(root);

 }
int main()
{
	test();
	
	return 0;
}