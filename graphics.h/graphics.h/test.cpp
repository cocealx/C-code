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
//	loadimage(&img,"C:\\Users\\Сִ\\Pictures\\�����ֽZ\\�����𺣺������ֽ\\1.jpg",640,480);
//	putimage(0, 0, &img);//���ñ���ͼ 
//	mciSendString(_T("ope C:\\Users\\Сִ\\Music\\����.mp3"), NULL, 0, NULL);//open_T alias mymusic)
//	outtextxy(0, 0, _T("���������ʼ����"));
//	_getch();
//	mciSendString(_T(" play C:\\Users\\Сִ\\Music\\����.mp3"), NULL, 0, NULL);
//	outtextxy(0, 0, _T("�������ֹͣ����"));
//	_getch();
//	mciSendString(_T(" stop C:\\Users\\Сִ\\Music\\����.mp3"), NULL, 0, NULL);
//	getchar();
//	closegraph();
//}
//#include <graphics.h>
//#include <conio.h>
//#include<stdio.h>
//void main()
//{
//	// ������ͼ����
//	initgraph(640, 480);
//	// ����������(ͨ������������)
//	float H = 190;        // ɫ��
//	float S = 1;        // ���Ͷ�
//	float L = 0.7f;        // ����
//	for (int y = 0; y < 480; y++)
//	{
//		L += 0.0005f;
//		setlinecolor(HSLtoRGB(H, S, L));
//		line(0, y, 639, y);
//	}
//	// ���ʺ�(ͨ��ɫ��������)
//	H = 0;
//	S = 1;
//	L = 0.5f;
//	setlinestyle(PS_SOLID, 2);        // �����߿�Ϊ 2
//	for (int r = 400; r > 344; r--)
//	{
//		H += 5;
//		setlinecolor(HSLtoRGB(H, S, L));
//		circle(500, 480, r);
//	}
//	// ��������˳�
//	_getch();
//	closegraph();
//}
#include <iostream> 
#include<iomanip>
using namespace std;
void�0�2solve(double�0�2l[][100], double�0�2u[][100], float�0�2b[], double�0�2x[], int�0�2n)
{
	int�0�2i, j;
	double�0�2t, s1, s2;
	double�0�2y[100];
	for (i = 1; i <= n; i++)�0�2/*��һ�λش����̿�ʼ*/�0�2
	{
		s1 = 0;
		for (j = 1; j<i; j++)
		{
			t = -l[i][j];
			s1 = s1 + t*y[j];
		}
		y[i] = (b[i] + s1) / l[i][i];
	}
	for (i = n; i >= 1; i--)�0�2/*�0�2�ڶ��λش����̿�ʼ*/�0�2
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
int�0�2main()
{
	double�0�2a[100][100], l[100][100], u[100][100], x[100], b[100];
	int�0�2i, j, n, r, k;
	double�0�2s1, s2;
	for (i = 1; i <= 99; i++)/*�����е��������㣬ͬʱ��L����ĶԽ�ֵ��Ϊ1*/�0�2
	for (j = 1; j <= 99; j++)
	{
		l[i][j] = 0, u[i][j] = 0;
		if (j == i)�0�2l[i][j] = 1;
	}
	cout << "���뷽����ĸ���:" << endl;/*���뷽����ĸ���*/
	cin >> n;
	cout << "��ȡԭ����A:" << endl;/*��ȡԭ����A*/�0�2
	for (i = 1; i <= n; i++)
	for (j = 1; j <= n; j++)
		cin >> a[i][j];
	cout << "��ȡ�о���B:" << endl;/*��ȡ�о���B*/�0�2
	for (i = 1; i <= n; i++)
		cin >> b[i];
	for (r = 1; r <= n; r++)/*������L��U*/�0�2
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
	cout << "array�0�2L:\n" << endl;/*�������L*/�0�2
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			cout << setw(8) << setiosflags < (ios::left) << l[i][j];
		}
		cout << endl;
	}
	cout << "array�0�2U:\n" << endl;/*������� U*/�0�2
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			cout << setw(8) << setiosflags < (ios::left) << u[i][j];
		}
		cout << endl;
	}
	solve(l, u, b, x, n);
	cout << "��Ϊ:\n" << endl;
	for (i = 1; i <= n; i++)
		cout << "X" << i << ":" << x[i] << "   ";
	return 0;
}
