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
				printf("�洢ʧ��\n");
				exit(0);
			}
		}
		printf("������Ҫ�洢��ϵ�˵����֡���");
		scanf("%s", addpeople.base[addpeople.length].name);
		printf("������Ҫ�洢��ϵ�˵����䡷��");
		scanf("%d", &addpeople.base[addpeople.length].old);
		printf("������Ҫ�洢����ϵ�˵ĵ绰���롷��");
		scanf("%s", addpeople.base[addpeople.length].phone_code);
		addpeople.length++;
		printf("�洢���\n");
		printf("�����洢��1   �˳��� 0   \n");
		scanf("%d", &input);
	}
}
void delete_people()
{
	int i = 0;
	char name[20] = { 0 };
	printf("������Ҫɾ���˵���������");
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
			printf("��ɾ����ϵ��\n");
			addpeople.length--;
			return;
		}
		i++;
	}
	printf("û���ҵ���Ҫɾ������ϵ��\n");
	return;
}
void search_people()
{
	int i = 0;
	char name[20] = { 0 };
	printf("������Ҫ������ϵ�˵���������");
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
	printf("���޴���\n");
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