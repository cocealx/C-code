#ifndef __TEST_H__
#define __TEST_H__
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct People
{
	char name[20];
	int old;
	char phone_code[11];


};
struct add_people
{
	struct People *base;
	int length ;
}addpeople;
void Add_people();
void delete_people();//删除联系人。
void search_people();//查找联系人。
void display();//打印联系人。
#endif