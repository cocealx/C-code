#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define FILENAME "ADDRESS_LIST"
enum INPUT
{
	EXIT,
	ADD,
	SHOW,
	SEARCH,
	DELETE,
	REVISE,
	SORT,
	INIT
};
typedef struct PEOPLE
{
	char name[20];
	int old;
	char sex[5];
	char adress[20];
	char phone_code[15];
} PEOPLE;
typedef struct NODE
{
	 PEOPLE people;
	 struct NODE*next;
}NODE;
//添加联系人
void Add_people(NODE*);
//打印通讯录
void Show_people(NODE*);
//查找某个联系人
void Search_people(NODE*);
//删除某个联系人
void Delete_people(NODE*);
//修改某个联系人
void Revise_people(NODE*);
//对通讯录排序
void Sort_people(NODE*);
//清空联系人
void Init_people(NODE*);
//保存联系人
void Save_people(NODE*);
//从文件读取联系人
void Read_people(NODE**);