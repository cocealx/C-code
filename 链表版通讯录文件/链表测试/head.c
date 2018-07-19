#include"head.h"
void Add_people(NODE* tail)
{
	//������̬����������ÿ�μ�¼��ǰ����β�ڵ�
	static NODE *temp_head = NULL;
	temp_head = tail;
	int in;
	do
	{
		//�����½ڵ��λ�á�
		temp_head->next= malloc(sizeof(NODE));
		if (temp_head->next == NULL)
       {
			perror("malloc");
			exit(EXIT_FAILURE);
		}
		temp_head->next->next = NULL;//���½ڵ��next�ÿ�
		printf("������ϵ������:\n");
		scanf("%s", temp_head->next->people.name);
		printf("������ϵ���Ա�:\n");
		scanf("%s", temp_head->next->people.sex);
		printf("������ϵ������:\n");
		scanf("%d", &temp_head->next->people.old);
		printf("������ϵ��סַ:\n");
		scanf("%s", temp_head->next->people.adress);
		printf("������ϵ�˵绰:\n");
		scanf("%s", temp_head->next->people.phone_code);
		printf("��ӳɹ�\n");
		temp_head = temp_head->next;
		while (1)
		{
			printf("1���������    0���������˵�\n");
			scanf("%d", &in);
			if (in == 1 || in == 0)
			{
				break;
			}
			else
			{
				printf("ѡ�����������ѡ��\n");
			}
		}
	} while (in);
}
void Show_people(NODE* head)//��ӡ��������
{
	head = head->next;
	if (head== NULL)//�ж������Ƿ�Ϊ��
	{
		printf("Ŀǰû����ϵ��\n");
		return;
	}
	
	printf("����      �Ա� ����  סַ           �绰              \n");
	while (head!=NULL)
	{
		printf("%-10s%-5s%-6d%-15s%-15s\n", head->people.name, head->people.sex,
			head->people.old, head->people.adress, head->people.phone_code);
		head = head->next;//ʹheadָ����һ���ڵ��λ��
	}
}
NODE* search(NODE*head)//�������в���ĳ���˵���ϵ��Ϣ
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
		head = head->next;//�ҵ��˷��ؽڵ��λ��
	}
	return NULL;//�Ҳ������ؿ�ָ��
}
void Search_people(NODE*head)
{
	printf("������ҵ���ϵ�˵�������\n");
	NODE*ret = search(head);
	if (ret != NULL)
	{
		printf("����      �Ա� ����  סַ           �绰              \n");
		printf("%-10s%-5s%-6d%-15s%-15s\n", ret->people.name, ret->people.sex,
			ret->people.old, ret->people.adress, ret->people.phone_code);
		return;
	}
	printf("���Ҳ�����ϵ��\n");
}
void Delete_people(NODE*head)//ɾ��������ĳ���ڵ�
{
	NODE* const head_temp = head;//���ڱȽ��ǲ���ɾ���ĵ�һ���ڵ�
	NODE*temp = head;
	head = head->next;
	char name[20] = { 0 };
	printf("����ɾ������ϵ�˵�������\n");
	scanf("%s", name);
	while (head != NULL)
	{
		if (!strcmp(name, head->people.name))
		{
			printf("ɾ���ɹ�\n");
			if (head_temp->next == head)//ɾ�����ǵ�һ���ڵ�
			{
				if (head->next == NULL)//��һ���ڵ����û�нڵ�
					head_temp->next = NULL;
				else//��һ���ڵ���滹�нڵ�
					head_temp->next = head->next;
			 }
	    	else if (head->next == NULL)//ɾ������������һ���ڵ�
			{
				temp->next = NULL;
			}
		    else//ɾ�������м�ڵ�
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
	printf("û�д���ϵ��\n");
}
void Revise_people(NODE*head)//�޸�������ĳ���ڵ���Ϣ
{
	printf("�����޸ĵ���ϵ�˵�������\n");
	NODE*ret = search(head);
	if (ret != NULL)
	{
		printf("�����޸ĺ���ϵ������:\n");
		scanf("%s", ret->people.name);
		printf("�����޸ĺ���ϵ���Ա�:\n");
		scanf("%s", ret->people.sex);
		printf("�����޸ĺ���ϵ������:\n");
		scanf("%d", &ret->people.old);
		printf("�����޸ĺ���ϵ��סַ:\n");
		scanf("%s", ret->people.adress);
		printf("�����޸ĺ���ϵ�˵绰:\n");
		scanf("%s", ret->people.phone_code);
		printf("�޸ĳɹ�\n");
		return;
	}
	printf("û���ҵ���Ҫ�޸ĵ���ϵ�˵�����\n");
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
	if (comper(next,next1) > 0)//��������ڵ��е�����
	{
		memmove(tmp, &next->people, sizeof(next->people));
		memmove(&next->people, &next1->people, sizeof(next->people));
		memmove(&next1->people, tmp, sizeof(next->people));
	}
}
void Sort_people(NODE*head)//���������ݽ�������
{
	int i;
	head = head->next;
	printf(" 1.����������      2.���������� \n");
	while (1)
	{
		printf("��ѡ��:\n");
		scanf("%d", &i);
		if (i == 1 || i == 2)
			break;
		else
			printf("ѡ�����������ѡ��\n");
	}
	i--;
	int(*comper[2])(const NODE*, const NODE*) = { comper1, comper2 };
	while (head->next != NULL)
	{
		my_qsort(head, head->next, comper[i]);
		head = head->next;
	}
	printf("����ɹ�\n");
}
void Init_people(NODE*head)//�������
{
	int i;
	NODE*head_tmp = head;
	NODE*temp = NULL;
	head = head->next;
	while (1)
	{
		printf("�Ƿ�Ҫ�����ϵ�ˣ�\n********1.��  ********0.�˳�******** \n");
		scanf("%d", &i);
		if (i == 1 || i == 0)
			break;
		else
			printf("ѡ���������ѡ��!!!\n");
	}
	if (i)
	{
		while (head != NULL)
		{
			temp = head->next;//����ڵ����ڵ��д洢����һ���ڵ��λ�á�
			free(head);
			head = temp;
		}
		head_tmp->next = NULL;
	}
	else
		return;
}
void Read_people(NODE**head)//��һ���ļ���ȡ��Ϣ��������
{
	FILE*in;
	int i = 0;
	char pc[sizeof((*head)->people)] = { 0 };
	if ((in = fopen(FILENAME, "rb")) == NULL)
	{
		return;
	}
	while (fread(pc, sizeof(pc), 1, in))//fread()���ļ���ȡ��Ϣ����ʱ����pc����
	{
		*head = malloc(sizeof(NODE));//Ϊ�ڵ�����ռ�
		if (*head == NULL)
		{
			perror("malloc");
			exit(EXIT_FAILURE);
		}
		memmove(&(*head)->people, pc, sizeof(pc));
		head = &(*head)->next;//ȡ����ǰ�ڵ�����һ���ڵ��λ�õ�ָ������ĵ�ַȡ����
	}
	*head = NULL;//�����һ���ڵ��next���ÿ�
	fclose(in);
}
void Save_people(NODE*head)//�������е���Ϣ����ɶ������ı�
{
	NODE*temp = head->next;
	FILE*out;
	if ((out = fopen(FILENAME, "wb")) == NULL)
	{
		fprintf(stdout, "Can't open");
		return;
	}
	while (temp != NULL)//������������浽ָ���ļ�
	{
		fwrite(&temp->people, sizeof(temp->people), 1, out);
		temp = temp->next;
	}
	fclose(out);
}
