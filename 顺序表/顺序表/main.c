#define _CRT_SECURE_NO_WARNINGS 1
#include"test.h"
void mean()
{
	printf("***********************************\n");
	printf("*                                 *\n");
	printf("*                                 *\n");
	printf("*   添加联系人 1  删除联系人 2    *\n");
	printf("*   查找联系人 3  清空联系人 4    *\n");
	printf("*   打印联系人 5  修改联系人 6    *\n");
	printf("*         退出     0              *\n");
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
		printf("存储失败\n");
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
			Add_people();//添加联系人。
			break;
		case 2:
			delete_people();//删除联系人。
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
