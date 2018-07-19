#define _CRT_SECURE_NO_WARNINGS 1
#include"test.h"
void Add_people()
{
	int input = 1;
	while (input)
	{
		if (addpeople.length == 50)
		{
			addpeople.base = (struct People*)realloc(addpeople.base, addpeople.length + 50);
			if (!addpeople.base)
			{
				printf("存储失败\n");
				exit(0);
			}
		}
		printf("输入你要存储联系人的名字》：");
		scanf("%s", addpeople.base[addpeople.length].name);
		printf("输入你要存储联系人的年龄》：");
		scanf("%d", &addpeople.base[addpeople.length].old);
		printf("输入你要存储的联系人的电话号码》：");
		scanf("%s", addpeople.base[addpeople.length].phone_code);
		addpeople.length++;
		printf("存储完成\n");
		printf("继续存储：1   退出： 0   \n");
		scanf("%d", &input);
	}
}
void delete_people()
{
	int i = 0;
	char name[20] = { 0 };
	printf("输入你要删除人的姓名》：");
	scanf("%s", name);
	while (i < addpeople.length)
	{
		if (strcmp(addpeople.base[i].name, name) == 0)
		{
			while (i < addpeople.length-1)
			{
				strcpy(addpeople.base[i].name, addpeople.base[i + 1].name);
				strcpy(addpeople.base[i].phone_code, addpeople.base[i + 1].phone_code);
				addpeople.base[i].old = addpeople.base[i+1].old;
				i++;
			}
			printf("已删除联系人\n");
			addpeople.length--;
			return;
		}
		i++;
	}
	printf("没有找到你要删除的联系人\n");
	return;
}
void search_people()
{
	int i = 0;
	char name[20] = { 0 };
	printf("输入你要查找联系人的姓名》：");
	scanf("%s", name);
	while (i < addpeople.length)
	{
		if (strcmp(addpeople.base[i].name, name) == 0)
		{
			printf("%s  ", addpeople.base[i].name);
			printf("%s ", addpeople.base[i].phone_code);
			printf("%s ", addpeople.base[i].old);
			return;
		}
		i++;
	}
	printf("查无此人\n");
	return;
}
void display()
{
	int i = 0;
	while (i < addpeople.length)
	{
			printf("%s  ", addpeople.base[i].name);
			printf("%s ", addpeople.base[i].phone_code);
			printf("%d ", addpeople.base[i].old);
		i++;
		printf("\n");
	}
}