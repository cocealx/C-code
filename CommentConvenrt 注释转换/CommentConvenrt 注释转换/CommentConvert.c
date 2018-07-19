//CommentConvert.c
#include"CommentConvert.h"
void DoNulState(FILE*pfIn, FILE*pfOut,STATE *state)
{
	int first = 0;
	int second = 0;
	first = fgetc(pfIn);
	
	switch (first)
	{	
	case '/'://如果取出的字符为‘/’说明有可能进入其他状态
	{
				//取出第二字符以确定状态是否需要转换
				second = fgetc(pfIn);
				switch (second)
				{
				case'/'://如果第二个字符是‘/’,进入C++状态
				{
						   *state = CPP_STATE;
						   fputc(first, pfOut);
						   fputc(second, pfOut);
				}
					break;
				case'*'://如果第二个字符是‘*’,进入C状态
				{
						   *state = C_STATE;
						   fputc('/', pfOut);
						   fputc('/', pfOut);
				}
					break;
				default://如果是其他字符，保持无状态
				{
						   fputc(first, pfOut);
						   fputc(second, pfOut);
				}
					break;
				}
	}
		break;
	case EOF ://如果到达文件结尾，进入结束状态
	{
				  *state = END_STATE;
	}
		break;
	default://如果第一个字符是非‘/’字符则进行无状态处理
	{
			   fputc(first, pfOut);
	}
		break;
	}
}
void DoCPPState(FILE*pfIn, FILE*pfOut, STATE* state)
{
	int first = 0;
	first = fgetc(pfIn);
	switch (first)
	{
	case'\n'://如果取出的第一个字符为‘\n’说明C++注释转换结束，进入无状态
	{
				*state = NUL_STATE;
				fputc(first, pfOut);
	}
		break;
	case EOF://如果到达文件结尾，进入结束状态
		*state = END_STATE;
		break;
	default://如果第一个字符是非‘\n’,说明C++状态没有结束，字符进行C++状态处理
		fputc(first, pfOut);
		break;
	}
}
void DoCState(FILE*pfIn, FILE*pfOut, STATE* state)
{
	int first = 0;
	int second = 0;
	int third = 0;
	first = fgetc(pfIn);
	switch (first)
	{
	case '*'://如果取出的第一个字符为‘*’说明C状态可能要结束
	{
				second = fgetc(pfIn);
				switch (second)
				{       
				case'*'://如果取出的第二个字符为‘*’说明C状态没有结束
					fputc(first, pfOut);
					ungetc(second, pfIn);//把取出的第二个字符送回，以便下次读取
					break;
				case'/'://如果取出的第二个字符为‘/’说明C状态结束，进入无状态
					*state = NUL_STATE;
					third = fgetc(pfIn);
					if (third == '\n')//判断这一行有没有结束
						fputc(third, pfOut);
					else//如果没有结束写入换行，并把读的第三字符送回
					{
						fputc('\n', pfOut);
						ungetc(third, pfIn);
					}
					break;
				default://如果是其他字符，字符进行C状态处理
				{
						   fputc(first, pfOut);
						   fputc(second, pfOut);
				}
					break;
				}
	}
		break;
	case'\n'://进行C状态的多行注释处理
		fputc(first, pfOut);
		fputc('/', pfOut);
		fputc('/', pfOut);
		break;
	default://如果是其他字符，字符进行C状态处理
	{
			   fputc(first, pfOut);
	}
		break;
	}
}