#define _CRT_SECURE_NO_WARNINGS 1
//������̨�ף�һ�ο�����һ��������һ������������n��̨�ף����ж�����������������
#include<stdio.h>
#include<Windows.h>
size_t JUMP_FLOOR(size_t count)
{
	if (count <= 0)
		return 0;
	if (count == 1)//Ϊ1��̨��ʱֻ��һ������
		return 1;
	else if (count == 2)//Ϊ2��̨��ʱ������ѡ����һ��̨�ף�����ѡ��һ��������̨��9
		return 2;
	else
		return JUMP_FLOOR(count - 1) + JUMP_FLOOR(count - 2);
}
int main()
{
	printf("������������̨����:");
	int num;
	scanf("%d", &num);
  printf("%d\n", JUMP_FLOOR(num));
	system("pause");
	return 0;

}
//������̨�ף�һ�ο�����һ��������һ��������......����һ����n������n��̨�ף����ж�����������������
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
	//Ϊn��̨��ʱ��   ����f(n)�������� f(n)=f(n-1)+f(n-2)+...+f(1)+f(0);	//(n=0)  һ����n����һ������
	//Ϊn-1��̨��ʱ������f(n-1)��������f(n-1) = f(n-2)+f(n-3)+...+f(1)+f(0);
	//����f(n)=2*f(n-1);
	//         1         (n=1)
	// f(n)= 
	//         2*f(n-1)  (n>=2)
}
int main()
{
		printf("������������̨����:");
		int num;
		scanf("%d", &num);
	    printf("%d\n", JUMP_FLOOR(num));
		system("pause");
		return 0;
}