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
	void input_score(STUDENT*stu);//输入学生信息
	void output_score(STUDENT*stu);//输出学生信息
	void search_score(STUDENT*stu);//查找学生信息
	void revise_score(STUDENT*stu);//修改学生信息
	void delete_score(STUDENT*stu);//删除学生信息
	void empty_score(STUDENT*stu);//清空学生信息
	void save_file(STUDENT*stu);//保存文件
	void open_file(STUDENT *stu);//读入文件
};
