//test.c
#include"CommentConvert.h"
void CommentConvert(FILE*pfIn, FILE*pfOut)
{
	STATE state = NUL_STATE;
	while (state!=END_STATE)
	{
		switch (state)
		{
		case NUL_STATE://��״̬
			DoNulState(pfIn, pfOut, &state);
			break;
		case C_STATE://C״̬
			DoCState(pfIn, pfOut, &state);
			break;
		case CPP_STATE://C++״̬
			DoCPPState(pfIn, pfOut, &state);
			break;				 
		}
	}
}
void test()
{
	FILE*pfIn = fopen("input.c", "r");
	FILE*pfOut = fopen("output.c", "w");
	if (pfIn == NULL)
	{
		perror("open input.c");
		exit(EXIT_FAILURE);
	}
	if (pfOut == NULL)
	{
		perror("open output");
		fclose(pfIn);
		exit(EXIT_FAILURE);
	}
	CommentConvert(pfIn, pfOut);
	fclose(pfIn);
	fclose(pfOut);
}
int  main()
{
	test();
	return 0;
}