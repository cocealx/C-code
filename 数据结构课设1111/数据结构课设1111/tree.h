#define _CRT_SECURE_NO_WARNINGS 1
#include"stack.h"
typedef char Type;
typedef struct TreeNode
{
	Type data;
	struct TreeNode*left;
	struct TreeNode*right;
}Node,Tree;
void Creat(Node**root)
{
	char ch = getchar();
	if (ch == '.')
		*root = NULL;
	else
	{
		Node*newnode = (Node*)malloc(sizeof(Node));
		newnode->data = ch;
		*root = newnode;
		Creat(&newnode->left);
		Creat(&newnode->right);
	}
}
void perorder(Tree*root)
{
	Stack stack;
	Node*pcur = root;
	InitStack(&stack);
	while (!empty(&stack) || pcur)
	{
		while (pcur)
		{
			printf("%c->", pcur->data);
			if (pcur)
			Push(&stack, pcur);
			pcur = pcur->left;
		}
		pcur = Top(&stack);
		pcur = pcur->right;
		Pop(&stack);
	}
	printf("\n");
}
void Inorder(Tree*root)
{
	Stack stack;
	Node*pcur = root;
	InitStack(&stack);
	while (!empty(&stack) || pcur)
	{
		while (pcur)
		{
			Push(&stack, pcur);
			pcur = pcur->left;
		}
		pcur = Top(&stack);
		printf("%c->", pcur->data);
		pcur = pcur->right;
		Pop(&stack);
	}
	printf("\n");
}
void PosOrder(Tree *root)
{
	Stack stack;
	Node*pcur = root;
	InitStack(&stack);
	Node*prev = NULL;
	while (!empty(&stack)||pcur)
	{
		while (pcur)
		{
			Push(&stack, pcur);
			pcur = pcur->left;
		}
		pcur = Top(&stack);
		if (pcur&& (pcur->right == NULL || pcur->right == prev))
		{
			printf("%c->", pcur->data);
			prev = pcur;
			Pop(&stack);
			pcur = NULL;
		}
		else
		{
			pcur = pcur->right;
		}
	}
	printf("\n");
}