#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
extern struct TreeNode;

#define MAX 50
typedef struct Stack
{
	struct TreeNode* arr[MAX];
	int capacity;
	int size;
}Stack;
int empty(Stack*stack)
{
	return stack->size == 0;
}
void InitStack(Stack*stack)
{
	stack->capacity = MAX;
	stack->size = 0;
}
struct TreeNode* Top(Stack*stack)
{
	if (empty(stack))
		assert(0);
	return stack->arr[stack->size - 1];
}
void Push(Stack*stack, struct TreeNode* data)
{
	if (stack->size == stack->capacity)
	{
		printf("Õ»Âú\n");
		return;
	}
	stack->arr[stack->size] = data;
	++stack->size;
}
void Pop(Stack*stack)
{
	if(empty(stack))
		assert(0);
	--stack->size;
}
