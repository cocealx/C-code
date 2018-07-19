#define _CRT_SECURE_NO_WARNINGS 1
#include "address.h"
void Add_people()
{
	int input = 1;
	if (head == NULL)
	{
		address_list.next = malloc(sizeof(struct ADDRESS_LIST));
		if (address_list.next == NULL)
		{
			printf("存储失败\n");
			return;
		}
		head = address_list.next;
	}
	while (input)
	{
			printf("输入你要存储联系人的名字》：");
			scanf("%s", head->name);
			printf("输入你要存储联系人的年龄》：");
			scanf("%d", &head->age);
			printf("输入你要存储的联系人的电话号码》：");
			scanf("%s", head->ph_code);
			printf("存储完成\n");
			printf("继续存储：1   退出： 0   \n");
			head->next = (struct ADDRESS_LIST*)malloc(sizeof(address_list));//开辟新的空间，并让此节点的next指向它。
			if (head->next == NULL)//申请失败，结束程序。
			{
				printf("存储失败\n");
				exit(0);
			}
		   while (1)//检查用户输入的合法性。
		   {
			  scanf("%d", &input);
			  if (input == 1 || input == 0)
				     break;
			  else
				      printf("选择错误，请重新选择》：\n");
		    }
			head = head->next;//使头指针指向下一个节点。
			if (input == 0)//如果不继续存储，使最后一个节点的next指向空指针。
			head->next = NULL; 
	}
}
void delete_people()
{
	struct ADDRESS_LIST *temp = address_list.next;
	struct ADDRESS_LIST **pc = NULL;//保存上一个节点next的地址。
	char name[20] = { 0 };
	printf("输入你要删除人的姓名》：");
	scanf("%s", name);
	while (temp->next != NULL)
	{
		if ((strcmp(name, temp->name) == 0) && (address_list.next != temp))
		{
			 *pc = temp->next;
			free(temp);
			printf("已删除联系人\n");
			return;
		}
		else if ((strcmp(name, temp->name) == 0) && (address_list.next == temp))
		{
			address_list.next = temp->next;
			free(temp);
			printf("已删除联系人\n");
			return;
		}
		pc = &((*temp).next);
		temp = temp->next;
	}
	printf("没有找到你要删除的联系人\n");
	return;
}
void display()
{
    struct ADDRESS_LIST *temp = address_list.next;//创建一个临时结构体指针变量，用于遍历该单向链表。
	
	if (temp == NULL)
	{
		printf("已经没有联系人了\n");
		return;
	}
	while (temp->next != NULL)//如果这个节点指向空指针，跳出循环，停止打印。（最后一个节点没有存储用户信息）
	{
		printf("姓名 %s ", temp->name);
		if (temp->age)
		printf("年龄 %d ", temp->age);
		printf("电话号码 %s\n", temp->ph_code);
		temp = temp->next;//使temp指向下一个节点。
	}
}
void search_people()
{
	struct ADDRESS_LIST *temp = address_list.next;
	char name[20] = { 0 };
	printf("输入你要查找人的姓名》：");
	scanf("%s", name);
	while (temp->next != NULL)
	{
		if (strcmp(name, temp->name) == 0)
		{
			printf("姓名 %s ", temp->name);
			printf("年龄 %d ", temp->age);
			printf("电话号码 %s\n", temp->ph_code);
			return;
		}
		temp = temp->next;//使temp指向下一个节点。
	}
	printf("查无此人\n");
	return;
}
void init()
{
	int i = 0;
	printf("是否确认清空联系人，如果是输入1》：");
	scanf("%d", &i);
	if (i != 1)
	{
		return;
	}
	head = NULL;
	struct ADDRESS_LIST *temp = address_list.next;//创建一个临时结构体指针变量，用于遍历该单向链表。
	address_list.next = NULL;
	while(1)//释放第二个及以后的节点。
	{
		if (temp == NULL)
		{
			return;
		}
		struct ADDRESS_LIST *pc = temp->next;
		free(temp);
		temp = pc;
	}
}