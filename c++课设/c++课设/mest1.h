#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include <iomanip>
#include<string>
#include<fstream>
using namespace std;
const int MAX = 50;
class STUDENT
{
private:
	char name[20];
	char sex[10];
	char number[20];
	float score[8];
public:
	void input_score(STUDENT*stu);//����ѧ����Ϣ
	void output_score(STUDENT*stu);//���ѧ����Ϣ
	void search_score(STUDENT*stu);//����ѧ����Ϣ
	void revise_score(STUDENT*stu);//�޸�ѧ����Ϣ
	void delete_score(STUDENT*stu);//ɾ��ѧ����Ϣ
	void empty_score(STUDENT*stu);//���ѧ����Ϣ
	void save_file(STUDENT*stu);//�����ļ�
	void open_file(STUDENT *stu);//�����ļ�
};
