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
		printf("������ϵ������:\n");
		scanf("%s", address->people[address->count].name);
		printf("������ϵ���Ա�:\n");
		scanf("%s", address->people[address->count].sex);
		printf("������ϵ������:\n");
		scanf("%d", &address->people[address->count].old);
		printf("������ϵ��סַ:\n");
		scanf("%s", address->people[address->count].adress);
		printf("������ϵ�˵绰:\n");
		scanf("%s", address->people[address->count].phone_code);
		address->count++;
		printf("��ӳɹ�\n");
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
void Show_people(address_list*address)
{
	int i;
	if (address->count == 0)
	{
		printf("Ŀǰû����ϵ��\n");
	}
	printf("����      �Ա� ����  סַ           �绰              \n");
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
	printf("������ҵ���ϵ�˵�������\n");
	int i = search(address);
	if (i != -1)
	{
		printf("����      �Ա� ����  סַ           �绰              \n");
		printf("%-10s%-5s%-6d%-15s%-15s\n", address->people[i].name, address->people[i].sex, address->people[i].old, address->people[i].adress, address->people[i].phone_code);
		return;
	}
	printf("���Ҳ�����ϵ��\n");
}
void Delete_people(address_list*address)
{
	printf("����ɾ������ϵ�˵�������\n");
	int i = search(address);
	int j;
	if (i != -1)
	{
		for (j = i; j < address->count - 1; j++)
		{
			memmove(&address->people[j], &address->people[j + 1], sizeof(address->people[0]));
		}
		address->count--;
		printf("ɾ���ɹ�\n");
		return;
	}
	printf("û�д���ϵ��\n");
}
void Revise_people(address_list*address)
{
	printf("�����޸ĵ���ϵ�˵�������\n");
	int i = search(address);
	if (i != -1)
	{
		printf("�����޸ĺ���ϵ������:\n");
		scanf("%s", address->people[i].name);
		printf("�����޸ĺ���ϵ���Ա�:\n");
		scanf("%s", address->people[i].sex);
		printf("�����޸ĺ���ϵ������:\n");
		scanf("%d", &address->people[i].old);
		printf("�����޸ĺ���ϵ��סַ:\n");
		scanf("%s", address->people[i].adress);
		printf("�����޸ĺ���ϵ�˵绰:\n");
		scanf("%s", address->people[i].phone_code);
		printf("�޸ĳɹ�\n");
		return;
	}
	printf("û���ҵ���Ҫ�޸ĵ���ϵ�˵�����\n");
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
	int(*comper[2])(const void*, const void*) = { comper1, comper2 };
	qsort(address->people, address->count, sizeof(address->people[0]), comper[i - 1]);
}
void Init_people(address_list*address)
{
	int i;
	while (1)
	{
		printf("�Ƿ�Ҫ�����ϵ�ˣ�1.��  0.�˳� \n");
		scanf("%d", &i);
		if (i == 1 || i == 0)
			break;
		else
			printf("ѡ���������ѡ��\n");
	}
	if (i)
	{
		address->count = 0;
		memset(address->people, 0, address->count*sizeof(address->people[0]));
	}
	else
		return;
}
