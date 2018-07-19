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
//�����ϵ��
void Add_people(NODE*);
//��ӡͨѶ¼
void Show_people(NODE*);
//����ĳ����ϵ��
void Search_people(NODE*);
//ɾ��ĳ����ϵ��
void Delete_people(NODE*);
//�޸�ĳ����ϵ��
void Revise_people(NODE*);
//��ͨѶ¼����
void Sort_people(NODE*);
//�����ϵ��
void Init_people(NODE*);
//������ϵ��
void Save_people(NODE*);
//���ļ���ȡ��ϵ��
void Read_people(NODE**);