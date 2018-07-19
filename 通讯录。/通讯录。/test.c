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
			printf("�洢ʧ��\n");
			return;
		}
		head = address_list.next;
	}
	while (input)
	{
			printf("������Ҫ�洢��ϵ�˵����֡���");
			scanf("%s", head->name);
			printf("������Ҫ�洢��ϵ�˵����䡷��");
			scanf("%d", &head->age);
			printf("������Ҫ�洢����ϵ�˵ĵ绰���롷��");
			scanf("%s", head->ph_code);
			printf("�洢���\n");
			printf("�����洢��1   �˳��� 0   \n");
			head->next = (struct ADDRESS_LIST*)malloc(sizeof(address_list));//�����µĿռ䣬���ô˽ڵ��nextָ������
			if (head->next == NULL)//����ʧ�ܣ���������
			{
				printf("�洢ʧ��\n");
				exit(0);
			}
		   while (1)//����û�����ĺϷ��ԡ�
		   {
			  scanf("%d", &input);
			  if (input == 1 || input == 0)
				     break;
			  else
				      printf("ѡ�����������ѡ�񡷣�\n");
		    }
			head = head->next;//ʹͷָ��ָ����һ���ڵ㡣
			if (input == 0)//����������洢��ʹ���һ���ڵ��nextָ���ָ�롣
			head->next = NULL; 
	}
}
void delete_people()
{
	struct ADDRESS_LIST *temp = address_list.next;
	struct ADDRESS_LIST **pc = NULL;//������һ���ڵ�next�ĵ�ַ��
	char name[20] = { 0 };
	printf("������Ҫɾ���˵���������");
	scanf("%s", name);
	while (temp->next != NULL)
	{
		if ((strcmp(name, temp->name) == 0) && (address_list.next != temp))
		{
			 *pc = temp->next;
			free(temp);
			printf("��ɾ����ϵ��\n");
			return;
		}
		else if ((strcmp(name, temp->name) == 0) && (address_list.next == temp))
		{
			address_list.next = temp->next;
			free(temp);
			printf("��ɾ����ϵ��\n");
			return;
		}
		pc = &((*temp).next);
		temp = temp->next;
	}
	printf("û���ҵ���Ҫɾ������ϵ��\n");
	return;
}
void display()
{
    struct ADDRESS_LIST *temp = address_list.next;//����һ����ʱ�ṹ��ָ����������ڱ����õ�������
	
	if (temp == NULL)
	{
		printf("�Ѿ�û����ϵ����\n");
		return;
	}
	while (temp->next != NULL)//�������ڵ�ָ���ָ�룬����ѭ����ֹͣ��ӡ�������һ���ڵ�û�д洢�û���Ϣ��
	{
		printf("���� %s ", temp->name);
		if (temp->age)
		printf("���� %d ", temp->age);
		printf("�绰���� %s\n", temp->ph_code);
		temp = temp->next;//ʹtempָ����һ���ڵ㡣
	}
}
void search_people()
{
	struct ADDRESS_LIST *temp = address_list.next;
	char name[20] = { 0 };
	printf("������Ҫ�����˵���������");
	scanf("%s", name);
	while (temp->next != NULL)
	{
		if (strcmp(name, temp->name) == 0)
		{
			printf("���� %s ", temp->name);
			printf("���� %d ", temp->age);
			printf("�绰���� %s\n", temp->ph_code);
			return;
		}
		temp = temp->next;//ʹtempָ����һ���ڵ㡣
	}
	printf("���޴���\n");
	return;
}
void init()
{
	int i = 0;
	printf("�Ƿ�ȷ�������ϵ�ˣ����������1����");
	scanf("%d", &i);
	if (i != 1)
	{
		return;
	}
	head = NULL;
	struct ADDRESS_LIST *temp = address_list.next;//����һ����ʱ�ṹ��ָ����������ڱ����õ�������
	address_list.next = NULL;
	while(1)//�ͷŵڶ������Ժ�Ľڵ㡣
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