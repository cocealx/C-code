//CommentConvert.c
#include"CommentConvert.h"
void DoNulState(FILE*pfIn, FILE*pfOut,STATE *state)
{
	int first = 0;
	int second = 0;
	first = fgetc(pfIn);
	
	switch (first)
	{	
	case '/'://���ȡ�����ַ�Ϊ��/��˵���п��ܽ�������״̬
	{
				//ȡ���ڶ��ַ���ȷ��״̬�Ƿ���Ҫת��
				second = fgetc(pfIn);
				switch (second)
				{
				case'/'://����ڶ����ַ��ǡ�/��,����C++״̬
				{
						   *state = CPP_STATE;
						   fputc(first, pfOut);
						   fputc(second, pfOut);
				}
					break;
				case'*'://����ڶ����ַ��ǡ�*��,����C״̬
				{
						   *state = C_STATE;
						   fputc('/', pfOut);
						   fputc('/', pfOut);
				}
					break;
				default://����������ַ���������״̬
				{
						   fputc(first, pfOut);
						   fputc(second, pfOut);
				}
					break;
				}
	}
		break;
	case EOF ://��������ļ���β���������״̬
	{
				  *state = END_STATE;
	}
		break;
	default://�����һ���ַ��Ƿǡ�/���ַ��������״̬����
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
	case'\n'://���ȡ���ĵ�һ���ַ�Ϊ��\n��˵��C++ע��ת��������������״̬
	{
				*state = NUL_STATE;
				fputc(first, pfOut);
	}
		break;
	case EOF://��������ļ���β���������״̬
		*state = END_STATE;
		break;
	default://�����һ���ַ��Ƿǡ�\n��,˵��C++״̬û�н������ַ�����C++״̬����
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
	case '*'://���ȡ���ĵ�һ���ַ�Ϊ��*��˵��C״̬����Ҫ����
	{
				second = fgetc(pfIn);
				switch (second)
				{       
				case'*'://���ȡ���ĵڶ����ַ�Ϊ��*��˵��C״̬û�н���
					fputc(first, pfOut);
					ungetc(second, pfIn);//��ȡ���ĵڶ����ַ��ͻأ��Ա��´ζ�ȡ
					break;
				case'/'://���ȡ���ĵڶ����ַ�Ϊ��/��˵��C״̬������������״̬
					*state = NUL_STATE;
					third = fgetc(pfIn);
					if (third == '\n')//�ж���һ����û�н���
						fputc(third, pfOut);
					else//���û�н���д�뻻�У����Ѷ��ĵ����ַ��ͻ�
					{
						fputc('\n', pfOut);
						ungetc(third, pfIn);
					}
					break;
				default://����������ַ����ַ�����C״̬����
				{
						   fputc(first, pfOut);
						   fputc(second, pfOut);
				}
					break;
				}
	}
		break;
	case'\n'://����C״̬�Ķ���ע�ʹ���
		fputc(first, pfOut);
		fputc('/', pfOut);
		fputc('/', pfOut);
		break;
	default://����������ַ����ַ�����C״̬����
	{
			   fputc(first, pfOut);
	}
		break;
	}
}