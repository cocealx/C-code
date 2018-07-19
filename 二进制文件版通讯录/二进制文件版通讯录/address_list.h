#ifndef _ADDRESS_LIST_H__
#define _ADDRESS_LIST_H__
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define FILENAME "ADDRESS_LIST.date"
#define MAX 2
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
typedef  struct PEOPLE
{
	char name[20];
	int old;
	char sex[5];
	char adress[20];
	char phone_code[15];
}PEOPLE;
typedef struct ADDRESS_LIST
{
	PEOPLE *people;
	int count;
}address_list;
void Add_people(address_list*);
void Show_people(address_list*);
void Search_people(address_list*);
void Delete_people(address_list*);
void Revise_people(address_list*);
void Sort_people(address_list*);
void Init_people(address_list*);
void Save_people(address_list*);
void Read_people(address_list*);
#endif