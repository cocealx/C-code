#define _CRT_SECURE_NO_WARNINGS 1
//青蛙跳台阶，一次可以跳一个，或者一次跳两个，跳n个台阶，共有多少种跳法。。。。
#include<stdio.h>
#include<Windows.h>
size_t JUMP_FLOOR(size_t count)
{
	if (count <= 0)
		return 0;
	if (count == 1)//为1个台阶时只有一种跳法
		return 1;
	else if (count == 2)//为2个台阶时，可以选择跳一个台阶，或者选择一次跳两个台阶9
		return 2;
	else
		return JUMP_FLOOR(count - 1) + JUMP_FLOOR(count - 2);
}
int main()
{
	printf("输入青蛙跳的台阶数:");
	int num;
	scanf("%d", &num);
  printf("%d\n", JUMP_FLOOR(num));
	system("pause");
	return 0;

}
//青蛙跳台阶，一次可以跳一个，或者一次跳两个......或者一次跳n个，跳n个台阶，共有多少种跳法。。。。
#include<stdio.h>
#include<Windows.h>
size_t JUMP_FLOOR(size_t count)
{
    if (1 == count)
		return 1;
	else if (count >= 2)
		return 2 * JUMP_FLOOR(count - 1);
	else
		return 0;
	//为n个台阶时，   共有f(n)种跳法： f(n)=f(n-1)+f(n-2)+...+f(1)+f(0);	//(n=0)  一次跳n个有一种跳法
	//为n-1个台阶时，共有f(n-1)种跳法：f(n-1) = f(n-2)+f(n-3)+...+f(1)+f(0);
	//所以f(n)=2*f(n-1);
	//         1         (n=1)
	// f(n)= 
	//         2*f(n-1)  (n>=2)
}
int main()
{
		printf("输入青蛙跳的台阶数:");
		int num;
		scanf("%d", &num);
	    printf("%d\n", JUMP_FLOOR(num));
		system("pause");
		return 0;
}