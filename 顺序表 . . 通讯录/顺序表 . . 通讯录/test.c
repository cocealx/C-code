#include"address_list.h"
void mean()
{
	printf("*******************************************************\n");
	printf("********   1.Add people         2.Show people    ******\n");
	printf("********                                         ******\n");
	printf("********   3.Search people      4.Delete people  ******\n");
	printf("********                                         ******\n");
	printf("********   5.Revise people      6.Sort people    ******\n");
	printf("********                                         ******\n");
	printf("********   7.Save people        8.Read people    ******\n");
	printf("********                                         ******\n");
	printf("********   9.Init people        0.EXIT           ******\n");
	printf("*******************************************************\n");


}

int main()
{
	address_list adress;
	adress.people = (PEOPLE*)calloc(MAX,sizeof(PEOPLE));
	if (adress.people == NULL)
	{
		perror("malloc");
		exit(EXIT_FAILURE);
	}
	adress.count = 0;
	int input;
	do
	{
		mean();
		printf("请选择：\n");
		scanf("%d", &input);
		switch (input)
		{
		case EXIT:
			exit(0);
			break;
		case ADD :
			Add_people(&adress);
			break;
		case SHOW:
			Show_people(&adress);
			break;
		case SEARCH:
			Search_people(&adress);
			break;
		case DELETE:
			Delete_people(&adress);
			break;
		case REVISE:
			Revise_people(&adress);
			break;
		case SORT:
			Sort_people(&adress);
			break;
		case SAVE:
			Save_people(&adress);
			break;
		case READ:
			Read_people(&adress);
			break;
		case INIT:
			Init_people(&adress);
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	} while (input);
	free(adress.people);
	return 0;
}