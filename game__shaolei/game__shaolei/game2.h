#ifndef __GAME2__H__
#define __GAME2_H__
#include"string.h"
#include"stdlib.h"
#include"time.h"
#include"stdio.h"
#define ROWS 14//����
#define LOCS 14//����
#define COUNT 30//�׵ĸ���
void set_mine(char arr[ROWS][LOCS]);
void dis_play(char arr[ROWS][LOCS], int row, int loc);
void Init_iay(char arr1[ROWS][LOCS], char arr2[ROWS][LOCS], int row, int loc);
int playgame(char arr1[ROWS][LOCS], char arr2[ROWS][LOCS], int count, int row, int loc);
void spread(char arr1[ROWS][LOCS], char arr2[ROWS][LOCS], int x, int y);
int check(char arr1[ROWS][LOCS], char arr2[ROWS][LOCS], int x, int y);
#endif