#define _CRT_SECURE_NO_WARNINGS 1
#include"test.h"
void mean()
{
	printf("***********************************\n");
	printf("*                                 *\n");
	printf("*                                 *\n");
	printf("*   �����ϵ�� 1  ɾ����ϵ�� 2    *\n");
	printf("*   ������ϵ�� 3  �����ϵ�� 4    *\n");
	printf("*   ��ӡ��ϵ�� 5  �޸���ϵ�� 6    *\n");
	printf("*         �˳�     0              *\n");
	printf("*                                 *\n");
	printf("*                                 *\n");
	printf("***********************************\n");
}
int main()
{
	addpeople.length = 0;
	addpeople.base = (struct People*)malloc(50 * sizeof(struct People));
	if (!addpeople.base)
	{
		printf("�洢ʧ��\n");
		exit(0);
	}
	int input;
	do
	{
		mean();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			Add_people();//�����ϵ�ˡ�
			break;
		case 2:
			delete_people();//ɾ����ϵ�ˡ�
			break;
		case 3:
			search_people();
			break;
		case 4:
			//init();
			break;
		case 5:
			display();
			break;
		case 6:
			break;
		default:
			break;
		}
	} while (input);
	system("Pause");
	return 0;
}
