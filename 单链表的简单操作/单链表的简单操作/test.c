#define _CRT_SECURE_NO_WARNINGS 1
#include"linklist.h"
void meau()
{
	printf("*************************\n");
	printf("******  1.����Ԫ��  *****\n");
	printf("******  2.ɾ��Ԫ��  *****\n");
	printf("******  3.����Ԫ��  *****\n");
	printf("******  4.ͳ��Ԫ��  *****\n");
	printf("******  5.�鿴����  *****\n");
	printf("******  0.�˳�����  *****\n");
	printf("*************************\n");
}
void test()
{
	list*List;
	InitLinkList(&List);
	int data;
	int input;
	do
	{
		printf("��ѡ��>\n");
		meau();
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			Destroylist(&List);
			break;
		case 1:
		{
			printf("����ǰ��������Ϊ��\n");
			display(List);
			printf("������������\n");
			scanf("%d", &data);
			pushback(&List, data);
			printf("�������������Ϊ��\n");
			display(List);
			break;
		}
		case 2:
		{
				  printf("ɾ��ǰ��������Ϊ��\n");
				  display(List);
				  popback(&List);
				  printf("ɾ������������Ϊ��\n");
				  display(List);
				  break;
		}
		case 3:
		{
				  printf("����Ҫ���ҵ�Ԫ��>\n");
				  scanf("%d", &data);
				  if (find(List, data))
					  printf("���ҵ���\n");
				  else
					  printf("û�д�Ԫ��\n");
				  break;
		}
		case 4:
			printf("������Ϊ��%d\n",Size(List));
			break;
		case 5:
			printf("��������Ϊ��\n");
			display(List);
			break;
		default:
			printf("û�д������\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}



