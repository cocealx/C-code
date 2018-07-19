#include"linklis.h"
int main()
{
	list*List;
	InitLinkList(&List);
	//pushback(&List, 1);
	//display(List);
	//pushback(&List, 2);
	//display(List);
	//pushback(&List, 3);
	//display(List);
	//pushback(&List, 4);
	//display(List);
	//pushback(&List, 5);
	//display(List);
	//popback(&List);
	//display(List);
	//popback(&List);
	//display(List);
	//popback(&List);
	//display(List);
	//popback(&List);
	//display(List);
	//popback(&List);
	//display(List);
	pushfront(&List, 1);
	display(List);
	pushfront(&List, 2);
	display(List);
	pushfront(&List, 3);
	display(List);
	pushfront(&List, 4);
	display(List);
	pushfront(&List, 5);
	display(List);
	/*popfront(&List);
	display(List);
	popfront(&List);
	display(List);
	popfront(&List);
	display(List);*/
	//insert(&List, 3, 1);
	//display(List);
	//insert(&List, 9, 9);
	//display(List);
	//insert(&List, 7, 8);
	//display(List);
	//insert(&List, 1, 6);
	//display(List);
	//erase(&List, 1);
	//display(List);
	//erase(&List, 7);
	//display(List);
	//erase(&List, 9);
	//display(List);
	//erase(&List, 3);
	//display(List);
	//pushfront(&List, 1);
	//display(List);
	//pushfront(&List, 1);
	//display(List);
	//pushfront(&List, 1);
	//display(List);
	//pushfront(&List, 1);
	//display(List);
	//pushfront(&List, 1);
	//display(List);
	//pushfront(&List, 1);
	//display(List);
	//Removeall(&List, 1);
	//display(List);
	//Remove(&List, 3);
	//display(List);
	//Remove(&List, 2);
	//display(List);
	//Remove(&List, 4);
	//display(List);
	//Remove(&List, 5);
	//display(List);
	/*if (find(List, 2) != NULL)
		printf("找到了\n");
	else
		printf("没有找到\n");*/
	Destroylist(&List);
	system("pause");
	return 0;
}