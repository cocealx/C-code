//CommentConvert.h
#ifndef __CommentConvert_H__
#define __CommentConvert_H__
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
typedef enum STATE
{
	//����״̬
	END_STATE,
	//��״̬
	NUL_STATE,
	//C״̬
	C_STATE,
	//C++״̬
	CPP_STATE
}STATE;
//��״̬����
void DoNulState(FILE*pfIn, FILE*pfOut,STATE* state);
//C״̬����
void DoCState(FILE*pfIn, FILE*pfOut, STATE* state);
//C++״̬����
void DoCPPState(FILE*pfIn, FILE*pfOut, STATE* state);
#endif //__CommentConvert_H__