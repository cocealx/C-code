//#define _CRT_SECURE_NO_WARNINGS 1
//#include<graphics.h>
//#include<stdio.h>
//#include<conio.h>
//#include<mmsystem.h>
//#pragma comment (lib,"winmm.lib")
//int main()
//{
//	initgraph(640, 480);
//	IMAGE img;
//	loadimage(&img,"C:\\Users\\小执\\Pictures\\高清壁纸Z\\大美金海湖桌面壁纸\\1.jpg",640,480);
//	putimage(0, 0, &img);//放置背景图 
//	mciSendString(_T("ope C:\\Users\\小执\\Music\\爱殇.mp3"), NULL, 0, NULL);//open_T alias mymusic)
//	outtextxy(0, 0, _T("按任意键开始播放"));
//	_getch();
//	mciSendString(_T(" play C:\\Users\\小执\\Music\\爱殇.mp3"), NULL, 0, NULL);
//	outtextxy(0, 0, _T("按任意键停止播放"));
//	_getch();
//	mciSendString(_T(" stop C:\\Users\\小执\\Music\\爱殇.mp3"), NULL, 0, NULL);
//	getchar();
//	closegraph();
//}
//#include <graphics.h>
//#include <conio.h>
//#include<stdio.h>
//void main()
//{
//	// 创建绘图窗口
//	initgraph(640, 480);
//	// 画渐变的天空(通过亮度逐渐增加)
//	float H = 190;        // 色相
//	float S = 1;        // 饱和度
//	float L = 0.7f;        // 亮度
//	for (int y = 0; y < 480; y++)
//	{
//		L += 0.0005f;
//		setlinecolor(HSLtoRGB(H, S, L));
//		line(0, y, 639, y);
//	}
//	// 画彩虹(通过色相逐渐增加)
//	H = 0;
//	S = 1;
//	L = 0.5f;
//	setlinestyle(PS_SOLID, 2);        // 设置线宽为 2
//	for (int r = 400; r > 344; r--)
//	{
//		H += 5;
//		setlinecolor(HSLtoRGB(H, S, L));
//		circle(500, 480, r);
//	}
//	// 按任意键退出
//	_getch();
//	closegraph();
//}
#include <iostream> 
#include<iomanip>
using namespace std;
void solve(double l[][100], double u[][100], float b[], double x[], int n)
{
	int i, j;
	double t, s1, s2;
	double y[100];
	for (i = 1; i <= n; i++) /*第一次回代过程开始*/ 
	{
		s1 = 0;
		for (j = 1; j<i; j++)
		{
			t = -l[i][j];
			s1 = s1 + t*y[j];
		}
		y[i] = (b[i] + s1) / l[i][i];
	}
	for (i = n; i >= 1; i--) /* 第二次回代过程开始*/ 
	{
		s2 = 0;
		for (j = n; j>i; j--)
		{
			t = -u[i][j];
			s2 = s2 + t*x[j];
		}
		x[i] = (y[i] + s2) / u[i][i];
	}
}
int main()
{
	double a[100][100], l[100][100], u[100][100], x[100], b[100];
	int i, j, n, r, k;
	double s1, s2;
	for (i = 1; i <= 99; i++)/*将所有的数组置零，同时将L矩阵的对角值设为1*/ 
	for (j = 1; j <= 99; j++)
	{
		l[i][j] = 0, u[i][j] = 0;
		if (j == i) l[i][j] = 1;
	}
	cout << "输入方程组的个数:" << endl;/*输入方程组的个数*/
	cin >> n;
	cout << "读取原矩阵A:" << endl;/*读取原矩阵A*/ 
	for (i = 1; i <= n; i++)
	for (j = 1; j <= n; j++)
		cin >> a[i][j];
	cout << "读取列矩阵B:" << endl;/*读取列矩阵B*/ 
	for (i = 1; i <= n; i++)
		cin >> b[i];
	for (r = 1; r <= n; r++)/*求解矩阵L和U*/ 
	{
		for (i = r; i <= n; i++)
		{
			s1 = 0;
			for (k = 1; k <= r - 1; k++)
				s1 = s1 + l[r][k] * u[k][i];
			u[r][i] = a[r][i] - s1;
		}
		for (i = r + 1; i <= n; i++)
		{
			s2 = 0;
			for (k = 1; k <= r - 1; k++)
				s2 = s2 + l[i][k] * u[k][r];
			l[i][r] = (a[i][r] - s2) / u[r][r];
		}
	}
	cout << "array L:\n" << endl;/*输出矩阵L*/ 
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			cout << setw(8) << setiosflags < (ios::left) << l[i][j];
		}
		cout << endl;
	}
	cout << "array U:\n" << endl;/*输出矩阵 U*/ 
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			cout << setw(8) << setiosflags < (ios::left) << u[i][j];
		}
		cout << endl;
	}
	solve(l, u, b, x, n);
	cout << "解为:\n" << endl;
	for (i = 1; i <= n; i++)
		cout << "X" << i << ":" << x[i] << "   ";
	return 0;
}
