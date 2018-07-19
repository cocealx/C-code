#include"head.h"
//Ѱ��ͨѶ¼�����һ���ڵ�
NODE* Find_tail(NODE* head)
{
	NODE*temp_tail = NULL;
	//��temp_head ���г�ʼ��
	if (head->next == NULL)//Ϊ������ʱ
	{
		temp_tail = head;
	}
	else//����ȡ���ļ�֮��Ϊ������
	{
		head = head->next;
		while (head->next != NULL)
			head = head->next;
		temp_tail = head;
	}
	return temp_tail;
}
//�˵�����
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
//���Ժ���
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
	//����ʼʱ����ָ���ļ�����Ϣ���ص��ڴ�
	Read_people(&head->next);
	//Ѱ��ͨѶ¼�����һ���ڵ�
	tail = Find_tail(head);
	int input;
	do
	{
		mean();
		printf("��ѡ��\n");
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
			printf("ѡ���������ѡ��\n");
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
