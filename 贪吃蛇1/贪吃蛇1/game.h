#ifndef __GAME_H__
#define __GAMAE_H__
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#define ROWS 20
#define COLS 20
#define snake_length (20*20)
#define SLEEP 1000//��Ļÿ��ˢ�µ�ʱ�䡣
typedef enum ch//�����ȡֵ��Χ��
{
	d,
	a,
	s,
	w,
};
typedef struct
{
	int x;
	int y;
}coordinate;
struct FOOD
{
	coordinate fd;//ʳ������ꡣ
	int flag;//�����ж�ʳ���Ƿ񱻳ԡ�
}food;//ʳ�����Ϣ��
struct SNAKE
{
	coordinate snk[snake_length];//����ÿһ�ڵ���Ϣ��
	int n;//����Ľ�����
	char ch;//�����û������ƶ��ַ���
	coordinate *head_snake;//��ͷָ��
	coordinate*tail_snake;//��βָ��
}snake;//�ߵ���Ϣ
void show_borad(char arr[][COLS], int row, int col);//���溯����
void snake_food(char arr[][COLS], int row, int col);//�ߵ�ʳ�����ɺ�����
void init_borad(char arr[][COLS], int row, int col);//��ʼ��Ϸ��Ϣ��
int snake_break(char arr[][COLS], int row, int col);//�ж������Ϸ�Ƿ������
void sanke_eat();//�ж�����Ƿ�Ե�ʳ�
void sanke_move(char arr[][COLS],int n);//�ߵ��ƶ���
void snake_change();//�û����ƺ�����
#endif//__GAME_H__