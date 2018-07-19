#include"address_list.h"
static int sum_number = MAX;
void Jduage(address_list* address)
{
	if (address->count == sum_number)
	{
		PEOPLE*temp = (PEOPLE*)realloc(address->people, (sum_number + MAX)*sizeof(PEOPLE));
		if (temp == NULL)
		{
			perror("realloc");
			exit(EXIT_FAILURE);
		}
		address->people = temp;
		sum_number = address->count + MAX;
	}
}
void Read_people(address_list*address)
{
	FILE*in;
	if ((in = fopen(FILENAME, "rb")) == NULL)
	{
		return;
	}
	PEOPLE tmp = { 0 };
	while (fread(&tmp, sizeof(tmp), 1, in))
	{
		address->people[address->count++] = tmp;
		Jduage(address);
	}
	fclose(in);
}
void Save_people(address_list*address)
{
	FILE*out;
	if ((out = fopen(FILENAME, "wb")) == NULL)
	{
		fprintf(stdout, "Can't open");
		return;
	}
	fwrite(address->people, sizeof(address->people[0]), address->count, out);
	fclose(out);
}
void Add_people(address_list* address)
{
	int in;
	do
	{
		Jduage(address);
		printf("输入联系人姓名:\n");
		scanf("%s", address->people[address->count].name);
		printf("输入联系人性别:\n");
		scanf("%s", address->people[address->count].sex);
		printf("输入联系人年龄:\n");
		scanf("%d", &address->people[address->count].old);
		printf("输入联系人住址:\n");
		scanf("%s", address->people[address->count].adress);
		printf("输入联系人电话:\n");
		scanf("%s", address->people[address->count].phone_code);
		address->count++;
		printf("添加成功\n");
		while (1)
		{
			printf("1：继续添加    0：返回主菜单\n");
			scanf("%d", &in);
			if (in == 1 || in == 0)
			{
				break;
			}
			else
			{
				printf("选择错误，请重新选择：\n");
			}
		}
	} while (in);
}
void Show_people(address_list*address)
{
	int i;
	if (address->count == 0)
	{
		printf("目前没有联系人\n");
	}
	printf("姓名      性别 年龄  住址           电话              \n");
	for (i = 0; i < address->count; i++)
	{
		printf("%-10s%-5s%-6d%-15s%-15s\n", address->people[i].name, address->people[i].sex, address->people[i].old, address->people[i].adress, address->people[i].phone_code);
	}
}
int search(address_list*address)
{
	int i = 0;
	char name[20] = { 0 };
	scanf("%s", name);
	for (i = 0; i < address->count; i++)
	{
		if (!strcmp(name, address->people[i].name))
		{
			return i;
		}
	}
	return -1;
}
void Search_people(address_list*address)
{
	printf("输入查找的联系人的姓名：\n");
	int i = search(address);
	if (i != -1)
	{
		printf("姓名      性别 年龄  住址           电话              \n");
		printf("%-10s%-5s%-6d%-15s%-15s\n", address->people[i].name, address->people[i].sex, address->people[i].old, address->people[i].adress, address->people[i].phone_code);
		return;
	}
	printf("查找不到联系人\n");
}
void Delete_people(address_list*address)
{
	printf("输入删除的联系人的姓名：\n");
	int i = search(address);
	int j;
	if (i != -1)
	{
		for (j = i; j < address->count - 1; j++)
		{
			memmove(&address->people[j], &address->people[j + 1], sizeof(address->people[0]));
		}
		address->count--;
		printf("删除成功\n");
		return;
	}
	printf("没有此联系人\n");
}
void Revise_people(address_list*address)
{
	printf("输入修改的联系人的姓名：\n");
	int i = search(address);
	if (i != -1)
	{
		printf("输入修改后联系人姓名:\n");
		scanf("%s", address->people[i].name);
		printf("输入修改后联系人性别:\n");
		scanf("%s", address->people[i].sex);
		printf("输入修改后联系人年龄:\n");
		scanf("%d", &address->people[i].old);
		printf("输入修改后联系人住址:\n");
		scanf("%s", address->people[i].adress);
		printf("输入修改后联系人电话:\n");
		scanf("%s", address->people[i].phone_code);
		printf("修改成功\n");
		return;
	}
	printf("没有找到你要修改的联系人的姓名\n");
}
int comper1(const void*p1, const void*p2)
{
	return strcmp(((PEOPLE*)p1)->name, ((PEOPLE*)p2)->name);
}
int comper2(const void*p1, const void*p2)
{
	return((PEOPLE*)p1)->old - ((PEOPLE*)p2)->old;
}
void Sort_people(address_list*address)
{
	int i;
	printf(" 1.按名字排序      2.按年龄排序 \n");
	while (1)
	{
		printf("请选择:\n");
		scanf("%d", &i);
		if (i == 1 || i == 2)
			break;
		else
			printf("选择错误，请重新选择\n");
	}
	int(*comper[2])(const void*, const void*) = { comper1, comper2 };
	qsort(address->people, address->count, sizeof(address->people[0]), comper[i - 1]);
}
void Init_people(address_list*address)
{
	int i;
	while (1)
	{
		printf("是否要清空联系人：1.是  0.退出 \n");
		scanf("%d", &i);
		if (i == 1 || i == 0)
			break;
		else
			printf("选择错误，重新选择\n");
	}
	if (i)
	{
		address->count = 0;
		memset(address->people, 0, address->count*sizeof(address->people[0]));
	}
	else
		return;
}
