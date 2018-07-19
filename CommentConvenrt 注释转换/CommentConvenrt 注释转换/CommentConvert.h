//CommentConvert.h
#ifndef __CommentConvert_H__
#define __CommentConvert_H__
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
typedef enum STATE
{
	//结束状态
	END_STATE,
	//无状态
	NUL_STATE,
	//C状态
	C_STATE,
	//C++状态
	CPP_STATE
}STATE;
//无状态处理
void DoNulState(FILE*pfIn, FILE*pfOut,STATE* state);
//C状态处理
void DoCState(FILE*pfIn, FILE*pfOut, STATE* state);
//C++状态处理
void DoCPPState(FILE*pfIn, FILE*pfOut, STATE* state);
#endif //__CommentConvert_H__