#include"head.h"
//寻找通讯录的最后一个节点
NODE* Find_tail(NODE* head)
{
	NODE*temp_tail = NULL;
	//对temp_head 进行初始化
	if (head->next == NULL)//为空链表时
	{
		temp_tail = head;
	}
	else//当读取的文件之后不为空链表
	{
		head = head->next;
		while (head->next != NULL)
			head = head->next;
		temp_tail = head;
	}
	return temp_tail;
}
//菜单界面
void mean()
{
	printf("*******************************************************\n");
	printf("********   1.Add people         2.Show people    ******\n");
	printf("********                                         ******\n");
	printf("********   3.Search people      4.Delete people  ******\n");
	printf("********                                         ******\n");
	printf("********   5.Revise people      6.Sort people    ******\n");
	printf("********                                         ******\n");
	printf("********   7.Init people        0.EXIT           ******\n");
	printf("*******************************************************\n");
}
//测试函数
void test()
{
	NODE*head = malloc(sizeof(NODE));
	NODE*tail = NULL;
	if (head == NULL)
	{
		perror("malloc");
		exit(EXIT_FAILURE);
	}
	head->next = NULL;
	//程序开始时，把指定文件里信息加载到内存
	Read_people(&head->next);
	//寻找通讯录的最后一个节点
	tail = Find_tail(head);
	int input;
	do
	{
		mean();
		printf("请选择：\n");
		scanf("%d", &input);
		switch (input)
		{
		case EXIT:
			Save_people(head);
			exit(0);
			break;
		case ADD:
			Add_people(tail);
			break;
		case SHOW:
			Show_people(head);
			break;
		case SEARCH:
			Search_people(head);
			break;
		case DELETE:
			Delete_people(head);
			break;
		case REVISE:
			Revise_people(head);
			break;
		case SORT:
			Sort_people(head);
			break;
		case INIT:
			Init_people(head);
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	} while (input);
	free(head);
}
int main()
{
	test();
	return 0;
}
