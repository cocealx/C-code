#ifndef __GAME__H__
#define __GAME_H__
#define ROWS 3
#define COLS 3
void init_board( char arr[ROWS][COLS], int row, int col);
void display( char arr[ROWS][COLS], int row, int col);
void Computer(char arr[ROWS][COLS], int row, int col);
void player(char arr[ROWS][COLS], int row, int col);
int cheekfull(char arr[ROWS][COLS], int row, int col);
#endif