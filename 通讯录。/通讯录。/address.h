#ifndef __ADDRESS_H__
#define __ADDRESS_H__
#define length_name 20
#define length_ph_code 12
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct ADDRESS_LIST
{
	char name[length_name];
	int age;
	char ph_code[length_ph_code];
	struct ADDRESS_LIST*next;
}address_list,*head;
void Add_people();
void delete_people();
void search_people();

void display();
void init();
#endif//__ADDRESS_LIST__H__