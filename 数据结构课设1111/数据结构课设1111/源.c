#define _CRT_SECURE_NO_WARNINGS 1
#include"tree.h"
void test()
{
	Tree*root = NULL;
	printf("输入序列建树，以'.'为结束标志\n");
	Creat(&root);
	printf("前序遍历：\n");
	perorder(root);
	printf("中序遍历：\n");
	Inorder(root);
	printf("后序遍历：\n");
	PosOrder(root);

 }
int main()
{
	test();
	
	return 0;
}