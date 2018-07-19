#include"head.h"
void Add_people(NODE* tail)
{
	//创建静态变量，用于每次记录当前链表尾节点
	static NODE *temp_head = NULL;
	temp_head = tail;
	int in;
	do
	{
		//保存新节点的位置。
		temp_head->next= malloc(sizeof(NODE));
		if (temp_head->next == NULL)
       {
			perror("malloc");
			exit(EXIT_FAILURE);
		}
		temp_head->next->next = NULL;//对新节点的next置空
		printf("输入联系人姓名:\n");
		scanf("%s", temp_head->next->people.name);
		printf("输入联系人性别:\n");
		scanf("%s", temp_head->next->people.sex);
		printf("输入联系人年龄:\n");
		scanf("%d", &temp_head->next->people.old);
		printf("输入联系人住址:\n");
		scanf("%s", temp_head->next->people.adress);
		printf("输入联系人电话:\n");
		scanf("%s", temp_head->next->people.phone_code);
		printf("添加成功\n");
		temp_head = temp_head->next;
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
void Show_people(NODE* head)//打印链表内容
{
	head = head->next;
	if (head== NULL)//判断链表是否为空
	{
		printf("目前没有联系人\n");
		return;
	}
	
	printf("姓名      性别 年龄  住址           电话              \n");
	while (head!=NULL)
	{
		printf("%-10s%-5s%-6d%-15s%-15s\n", head->people.name, head->people.sex,
			head->people.old, head->people.adress, head->people.phone_code);
		head = head->next;//使head指向下一个节点的位置
	}
}
NODE* search(NODE*head)//在链表中查找某个人的联系信息
{
	head = head->next;
	char name[20] = { 0 };
	scanf("%s", name);
	while(head!=NULL)
	{
		if (!strcmp(name, head->people.name))
		{
			return head;
		}
		head = head->next;//找到了返回节点的位置
	}
	return NULL;//找不到返回空指针
}
void Search_people(NODE*head)
{
	printf("输入查找的联系人的姓名：\n");
	NODE*ret = search(head);
	if (ret != NULL)
	{
		printf("姓名      性别 年龄  住址           电话              \n");
		printf("%-10s%-5s%-6d%-15s%-15s\n", ret->people.name, ret->people.sex,
			ret->people.old, ret->people.adress, ret->people.phone_code);
		return;
	}
	printf("查找不到联系人\n");
}
void Delete_people(NODE*head)//删除链表中某个节点
{
	NODE* const head_temp = head;//用于比较是不是删除的第一个节点
	NODE*temp = head;
	head = head->next;
	char name[20] = { 0 };
	printf("输入删除的联系人的姓名：\n");
	scanf("%s", name);
	while (head != NULL)
	{
		if (!strcmp(name, head->people.name))
		{
			printf("删除成功\n");
			if (head_temp->next == head)//删除的是第一个节点
			{
				if (head->next == NULL)//第一个节点后面没有节点
					head_temp->next = NULL;
				else//第一个节点后面还有节点
					head_temp->next = head->next;
			 }
	    	else if (head->next == NULL)//删除的如果是最后一个节点
			{
				temp->next = NULL;
			}
		    else//删除的是中间节点
			{
				temp->next = head->next;
			}
			free(head);
			head = NULL;
			return;
		}
		temp = head;
		head = head->next;	
	}
	printf("没有此联系人\n");
}
void Revise_people(NODE*head)//修改链表中某个节点信息
{
	printf("输入修改的联系人的姓名：\n");
	NODE*ret = search(head);
	if (ret != NULL)
	{
		printf("输入修改后联系人姓名:\n");
		scanf("%s", ret->people.name);
		printf("输入修改后联系人性别:\n");
		scanf("%s", ret->people.sex);
		printf("输入修改后联系人年龄:\n");
		scanf("%d", &ret->people.old);
		printf("输入修改后联系人住址:\n");
		scanf("%s", ret->people.adress);
		printf("输入修改后联系人电话:\n");
		scanf("%s", ret->people.phone_code);
		printf("修改成功\n");
		return;
	}
	printf("没有找到你要修改的联系人的姓名\n");
}
int comper1(const NODE*p1, const NODE*p2)
{
	return strcmp(p1->people.name, p2->people.name);
}
int comper2(const NODE*p1, const NODE*p2)
{
	return p1->people.old - p2->people.old;
}
void my_qsort(NODE*next, NODE*next1, int comper(NODE*, NODE*))
{
	char tmp[sizeof(next->people)] = { 0 };
	if (comper(next,next1) > 0)//交换链表节点中的数据
	{
		memmove(tmp, &next->people, sizeof(next->people));
		memmove(&next->people, &next1->people, sizeof(next->people));
		memmove(&next1->people, tmp, sizeof(next->people));
	}
}
void Sort_people(NODE*head)//对链表数据进行排序
{
	int i;
	head = head->next;
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
	i--;
	int(*comper[2])(const NODE*, const NODE*) = { comper1, comper2 };
	while (head->next != NULL)
	{
		my_qsort(head, head->next, comper[i]);
		head = head->next;
	}
	printf("排序成功\n");
}
void Init_people(NODE*head)//清空链表
{
	int i;
	NODE*head_tmp = head;
	NODE*temp = NULL;
	head = head->next;
	while (1)
	{
		printf("是否要清空联系人：\n********1.是  ********0.退出******** \n");
		scanf("%d", &i);
		if (i == 1 || i == 0)
			break;
		else
			printf("选择错误，重新选择!!!\n");
	}
	if (i)
	{
		while (head != NULL)
		{
			temp = head->next;//保存第当个节点中存储的下一个节点的位置。
			free(head);
			head = temp;
		}
		head_tmp->next = NULL;
	}
	else
		return;
}
void Read_people(NODE**head)//从一个文件读取信息存入链表
{
	FILE*in;
	int i = 0;
	char pc[sizeof((*head)->people)] = { 0 };
	if ((in = fopen(FILENAME, "rb")) == NULL)
	{
		return;
	}
	while (fread(pc, sizeof(pc), 1, in))//fread()从文件读取信息到临时数组pc里面
	{
		*head = malloc(sizeof(NODE));//为节点申请空间
		if (*head == NULL)
		{
			perror("malloc");
			exit(EXIT_FAILURE);
		}
		memmove(&(*head)->people, pc, sizeof(pc));
		head = &(*head)->next;//取出当前节点存放下一个节点的位置的指针变量的地址取出来
	}
	*head = NULL;//把最后一个节点的next的置空
	fclose(in);
}
void Save_people(NODE*head)//把链表中的信息保存成二进制文本
{
	NODE*temp = head->next;
	FILE*out;
	if ((out = fopen(FILENAME, "wb")) == NULL)
	{
		fprintf(stdout, "Can't open");
		return;
	}
	while (temp != NULL)//遍历整个链表存到指定文件
	{
		fwrite(&temp->people, sizeof(temp->people), 1, out);
		temp = temp->next;
	}
	fclose(out);
}
