#ifndef __GAME_H__
#define __GAMAE_H__
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#define ROWS 20
#define COLS 20
#define snake_length (20*20)
#define SLEEP 1000//屏幕每次刷新的时间。
typedef enum ch//方向的取值范围。
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
	coordinate fd;//食物的坐标。
	int flag;//用来判断食物是否被吃。
}food;//食物的信息。
struct SNAKE
{
	coordinate snk[snake_length];//蛇身每一节的信息。
	int n;//蛇身的节数。
	char ch;//接受用户输入移动字符。
	coordinate *head_snake;//蛇头指针
	coordinate*tail_snake;//蛇尾指针
}snake;//蛇的信息
void show_borad(char arr[][COLS], int row, int col);//界面函数。
void snake_food(char arr[][COLS], int row, int col);//蛇的食物生成函数。
void init_borad(char arr[][COLS], int row, int col);//初始游戏信息。
int snake_break(char arr[][COLS], int row, int col);//判断玩家游戏是否结束。
void sanke_eat();//判断玩家是否吃到食物。
void sanke_move(char arr[][COLS],int n);//蛇的移动。
void snake_change();//用户控制函数。
#endif//__GAME_H__