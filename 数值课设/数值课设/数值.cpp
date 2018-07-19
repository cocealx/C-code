#define _CRT_SECURE_NO_WARNINGS 1
////(一）//高斯列主元消去法
//#include<iostream>
//#include<cmath>
//#include<iomanip>
//#define line 3   //行
//#define row  line+1  //列	
//using namespace std;
//double matrix[line][row], maxv, temp, x[line],sum;//矩阵，保存列最大元素，交换的零时变量，x的解。
//int max_line;
//int main()
//{
//	int i, j,i1,j1;
//	printf("输入增广矩阵：");
//	for (i = 0; i < line; i++)
//	{
//		for (j = 0; j < row; j++)
//		{
//			 cin>>matrix[i][j];//2 2 3 3 ;4 7 7 1;-2 4 5 -7;
//		}
//	}
//	for (i = 0; i < row-1; i++)//整个大的for循环，控制迭代消元
//	{
//		max_line = i;//保存列坐标
//		for (j = i; j < line; j++)//寻找第i列中绝对值最大的元素。
//		{
//			if (fabs(matrix[max_line][i]) < fabs(matrix[j][i]))
//			{
//				max_line = j;//保存第i列中绝对值最大的元素所在行。
//			}
//		}
//		for (j1 = i; j1 < row; j1++)//把绝对值最大的那一行元素，跟第i行元素。
//		{
//			temp = matrix[max_line][j1];
//			matrix[max_line][j1] = matrix[i][j1];
//			matrix[i][j1] = temp;
//		}
//		double bei;//临时变量。
//		for (i1 = i + 1; i1 < line; i1++)//控制迭代。
//		{
//			bei = matrix[i1][i]/matrix[i][i];//保存绝对值最大的那一行的第一个元素跟第i行的第一个元素之间的倍数。
//			int i2;
//			for (i2 = i; i2 <row ; i2++)//消元。
//			{
//				matrix[i1][i2] = matrix[i1][i2] -  matrix[i][i2]*bei;
//			}
//		}
//		cout << "完成第"<<i+1<<"次迭代后的三角矩阵：" << endl;
//		for (int k1 = 0; k1 < line; k1++)
//		{
//			for (int k2 = 0; k2 < row; k2++)
//			{
//				cout << setw(8) << setiosflags(ios::left) << matrix[k1][k2];
//			}
//			cout << endl;
//		}
//	}
//	
//	x[line - 1] = matrix[line - 1][row - 1] / matrix[line - 1][row - 2];
//	for (i = line-2; i >=0; i--)//回代求得方程的解。
//	{
//		sum = matrix[i][row - 1];
//		for (j = row-2; j >= i+1; j--)
//		{
//			sum -= matrix[i][j]*x[j];
//		}
//		x[i] = sum / matrix[i][j];
//	}
//	cout << "方程组的解为：";
//	for (i = 0; i < line; i++)
//	{
//		cout << "x" << i + 1 << "=" << x[i] << "  ;";
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}
////牛顿迭代法解线性方程组
//x*x+y*y-4=0
////x*x-y*y-1=0
//#include<iostream>
//#include<cmath>
//#include<iomanip>
//#define N 2 //方程的个数和未知数的个数。
//#define  Epsilon 1e-6
//#define  max 10
//using namespace std;
//int main()
//{
//	void FFX(double OLD_X[],double FFX[]);
//	void Jacobian(double OLD_X[], double JK[][N]);//算雅可比矩阵。
//	void inv_Jacobian(double JK[][N]);//算雅可比矩阵的逆矩阵。
//	void JA_NEW_X(double OLD_X[], double JK[][N], double FX[], double NEW_X[]);//求新的x的值。
//	double OLD_X[N],JK[N][N],FX[N],NEW_X[N],ep=0;
//	int i, k=1;
//	cout << "输入初始解向量：" << endl;
//	for (i = 0; i < N; i++)
//	{
//		cin >> OLD_X[i];
//	}
//	do
//	{
//		FFX(OLD_X,FX);
//		Jacobian(OLD_X, JK);
//		inv_Jacobian(JK);
//		JA_NEW_X(OLD_X, JK, FX, NEW_X);
//		cout << "第" << k << "次迭代后的结果为：" << endl;
//		for (i = 0; i < N; i++)
//		{
//	
//			cout<< "X" << i + 1 << "=" << NEW_X[i] << endl ;
//		}
//		for (i = 0; i < 2; i++)//求范数。
//		{
//			ep += fabs(NEW_X[i] - OLD_X[i]);
//		}
//		if (ep < Epsilon)//判断是否满足精度。
//			break;
//		for (i = 0; i < N; i++)//
//			OLD_X[i] = NEW_X[i];
//	} while (k++<=max);
//	
//	system("pause");
//	return 0;
//}
//void FFX(double OLD_X[], double FX[])
//{
//	FX[0] = OLD_X[0] * OLD_X[0] + OLD_X[1]*OLD_X[1]  - 4;
//	FX[1] = OLD_X[0] * OLD_X[0] - OLD_X[1] * OLD_X[1] - 1;
//}
//void Jacobian(double OLD_X[], double JK[][N])
//{
//	int i, j;
//	JK[0][0] = 2 * OLD_X[0];
//	JK[0][1] = 2 * OLD_X[1];
//	JK[1][0] = 2 * OLD_X[0];
//	JK[1][1] = -2* OLD_X[1];
//	cout << "求得的雅可比矩阵为：" << endl;
//	for (i = 0; i < N; i++)
//	{
//		for (j = 0; j < N; j++)
//		{
//			cout << setw(10) << setiosflags(ios::left) << JK[i][j];
//		}
//		cout << endl;
//	}
//}
//void inv_Jacobian(double JK[][N])
//{
//	double sum = JK[0][0] * JK[1][1] - JK[0][1] * JK[1][0];
//	double temp[N][N] = { { JK[0][0], JK[0][1] }, { JK[1][0], JK[1][1] }};
//	JK[0][0] = temp[1][1] / sum;
//	JK[0][1] = temp[1][0] / (-sum);
//	JK[1][0] = temp[0][1] / (-sum);
//	JK[1][1] = temp[0][0] / sum;
//	int i, j;
//	cout << "求得的雅可比逆矩阵为：" << endl;
//	for (i = 0; i < N; i++)
//	{
//		for (j = 0; j < N; j++)
//		{
//			cout << setw(10) << setiosflags(ios::left)<<JK[i][j] ;
//		}
//		cout << endl;
//	}
//}
//void JA_NEW_X(double OLD_X[], double JK[][N], double FX[], double NEW_X[])
//{
//	double temp_x[N] = { 0 };
//	int i, j;
//	for (i = 0; i < N; i++)
//	{
//		for (j = 0; j < N; j++)
//		{
//			temp_x[i]+= FX[j] * JK[j][i];
//		}
//		NEW_X[i] = OLD_X[i] - temp_x[i];
//	}
//}
//四阶龙格库塔
//#include <iostream>
//#include <iomanip>
//using namespace std;
////f为函数的入口地址，x0、y0为初值，xn为所求点，number为计算次数
//double runge_kuta(double(*f)(double x, double y), double x0, double y0, double xn, int number)
//{
//	double k1, k2, k3, k4, result;
//	double h = (xn - x0) / number;
//	if (number == 0)//初始值
//		return(y0);
//	if (number == 1)//第1个的求取结果
//	{
//		k1 = f(x0, y0);
//		k2 = f(x0 + h / 2, y0 + h*k1 / 2);
//		k3 = f(x0 + h / 2, y0 + h*k2 / 2);
//		k4 = f(x0 + h, y0 + h*k3);
//		result = y0 + h*(k1 + 2 * k2 + 2 * k3 + k4) / 6;
//	}
//	else
//	{
//		double x1, y1;
//		x1 = xn - h;
//		y1 = runge_kuta(f, x0, y0, xn - h, number - 1);//递归，求第n个时，调用自己先求前n-1个（n>=2)
//		k1 = f(x1, y1);
//		k2 = f(x1 + h / 2, y1 + h*k1 / 2);//(x-y)/2
//		k3 = f(x1 + h / 2, y1 + h*k2 / 2);
//		k4 = f(x1 + h, y1 + h*k3);
//		result = y1 + h*(k1 + 2 * k2 + 2 * k3 + k4) / 6;
//	}
//	return(result);
//}
//int main()
//{
//	double f(double x, double y);
//	double x0, y0;
//	double a, b;
//	cout << "请输入初值x0  y0: ";
//	cin >> x0 >> y0;
//	cout << "请输入区间：    ";
//	cin >> a >> b;
//	double  step,xn;
//	int i;
//	cout << "请输入步长： ";
//	cin >> step;
//	cout.precision(10);
//	for (i = 0; i <=(b - a) / step; i++)
//	{
//		xn = x0 + step*i;
//		cout << endl << setw(8) << setiosflags(ios::left) << xn << setw(18) << runge_kuta(f, x0, y0, xn, i) << endl;
//	}
//	system("pause");
//	return(0);
//}
//double f(double x, double y)
//{
//	double r;
//	r = y-(2*x)/y;
//	return (r);
//}
////三次样本插值。
//#include<iostream>
//#include<iomanip>
//using namespace std;
//const int max = 50;
//float x[max], y[max], h[max];
//float c[max], a[max], fxym[max];
//void printout(int n);
//float f(int x1, int x2, int x3)
//{
//	float a = (y[x3] - y[x2]) / (x[x3] - x[x2]);
//	float b = (y[x2] - y[x1]) / (x[x2] - x[x1]);
//	return (a - b) / (x[x3] - x[x1]);
//}    //求差分
//void cal_m(int n)
//{                  //用追赶法求解出弯矩向量m……
//	int i;
//	float b[max];
//	b[0] = c[0] / 2;
//	for (int i = 1; i < n; i++)
//		b[i] = c[i] / (2 - a[i] * b[i - 1]);
//	fxym[0] = fxym[0] / 2;
//	for (i = 1; i <= n; i++)
//		fxym[i] = (fxym[i] - a[i] * fxym[i - 1]) / (2 - a[i] * b[i - 1]);
//	for (i = n - 1; i >= 0; i--)
//		fxym[i] = fxym[i] - b[i] * fxym[i + 1];
//}
//int main()
//{
//	int n, i; char ch;
//	do
//	{
//		cout << "输入x的最大下标:";
//		cin >> n;
//		for (i = 0; i <= n; i++)
//		{
//			cout << "please put in x" << i << ':';
//			cin >> x[i];
//			cout << "please put in y" << i << ':';
//			cin >> y[i];
//		}
//		for (i = 0; i < n; i++)            //求步长
//			h[i] = x[i + 1] - x[i];
//		cout << "please 输入边界条件\n 1   :已知两端的一阶导数\n 2   :两端的二阶导数已知\n 默认:自然边界条件\n";
//		int t;
//		float f0, f1;
//		cin >> t;
//		switch (t)
//		{
//		case 1:cout << "输入 y0\' y" << n << "\'\n";
//			cin >> f0 >> f1;
//			c[0] = 1; a[n] = 1;
//			fxym[0] = 6 * ((y[1] - y[0]) / (x[1] - x[0]) - f0) / h[0];
//			fxym[n] = 6 * (f1 - (y[n] - y[n - 1]) / (x[n] - x[n - 1])) / h[n - 1];
//			break;
//		case 2:cout << "输入 y0\" y" << n << "\"\n";
//			cin >> f0 >> f1;
//			c[0] = a[n] = 0;
//			fxym[0] = 2 * f0; fxym[n] = 2 * f1;
//			break;
//		default:cout << "不可用\n";//待定
//		}
//		for (i = 1; i < n; i++)
//			fxym[i] = 6 * f(i - 1, i, i + 1);
//		for (i = 1; i < n; i++)
//		{
//			a[i] = h[i - 1] / (h[i] + h[i - 1]);
//			c[i] = 1 - a[i];
//		}
//		a[n] = h[n - 1] / (h[n - 1] + h[n]);
//		cal_m(n);
//		cout << "\n输出三次样条插值函数：\n";
//		printout(n);
//		cout << "do you have another try ? y/n :";
//		cin >> ch;
//	} while (ch == 'y' || ch == 'y');
//	return 0;
//}
//void printout(int n)
//{
//	cout << setprecision(6);
//	for (int i = 0; i < n; i++)
//	{
//		cout << i + 1 << ": [" << x[i] << " , " << x[i + 1] << "]\n" << "\t";
//		cout << "s" << i + 1 << "=";
//		float t = fxym[i] / (6 * h[i]);
//		if (t > 0) cout << -t << "*(x - " << x[i + 1] << ")^3";
//		else cout << -t << "*(x - " << x[i + 1] << ")^3";
//		t = fxym[i + 1] / (6 * h[i]);
//		if (t > 0) cout << " + " << t << "*(x - " << x[i] << ")^3";
//		else cout << " - " << t << "*(x - " << x[i] << ")^3";
//		cout << "\n\t";
//		t = (y[i] - fxym[i] * h[i] * h[i] / 6) / h[i];
//		if (t > 0) cout << "- " << t << "*(x - " << x[i + 1] << ")";
//		else cout << "- " << -t << "*(x - " << x[i + 1] << ")";
//		t = (y[i + 1] - fxym[i + 1] * h[i] * h[i] / 6) / h[i];
//		if (t > 0) cout << " + " << t << "*(x - " << x[i] << ")";
//		else cout << " - " << -t << "*(x - " << x[i] << ")";
//		cout << endl;
//	}
//	cout << endl;
//}


//
//////龙贝格
//#include<iostream>
//#include <iomanip>
//#include<cmath>
//#define n 20
//using namespace std;
//int main()
//{
//	int i, j;
//	double f(double x);
//	double a, b, h, esp, err,r[n][n] = { 0 };//区间上下限，精度，误差值，存储计算的r[i][j]
//	cout << "输入区间a,b:";
//	cin >> a >> b;
//	cout << "输入精度：";
//	cin>> esp;
//	h = b - a;
//	r[0][0] = h*(f(a) + f(b)) / 2;
//	i = 0; err = 1;
//	//判断是否满足精度要求//
//	while (i<n-1)
//	{
//		double x, sum_fx=0, number;
//		i=i+1;
//		h = h / 2;
//	    number = 1;
//		for (j = 1; j<i; j++)
//		  number = 2 * number;
//		//求各区间中点处的值的和//
//		for (j = 1; j <= number; j++)
//		{
//			x = a + h*(2 * j - 1);//
//			sum_fx = sum_fx + f(x);
//		}
//		r[i][0] = r[i - 1][0] / 2 + sum_fx*h;    //求该行到对角处所有各列的值,
//		for (j = 1; j <= i; j++)
//		{
//			r[i][j] = (pow(4, j)*r[i][j - 1] - r[i - 1][j - 1]) / (pow(4, j) - 1);
//		}
//		err = fabs(r[i][i] - r[i - 1][i - 1]); //判断是否满足精确度//
//		if (err < esp)
//			break;
//	}
//	double result = r[i][i];
//	for (int k1 = 0; k1<=i; k1++)//打印出r[i][j]
//	{
//		for (int k2 = 0; k2<=i; k2++)
//		{
//			cout <<setw(10)<<setiosflags(ios::left)<< r[k1][k2] ;
//		}
//		cout << endl;
//	}
//	if (i < n)
//	{
//		cout << "积分结果为：" << result << endl;
//		cout << "误差范围：" << err << endl;
//		cout << "区间长度："<<h << endl;
//	}
//	system("pause");
//	return 0;
//} 
//double f(double x)//被积函数
//{
//	double y;
//	y = 4/(1+x*x);
//	//y = x*x + 2 * x;
//	return y;
//}
////线性拟合
#include<iostream>
#include <iomanip>
#include<cmath>
#define num 5     //节点的个数
#define n  2     //拟合的多项式的次数
using namespace std;
void f1(double [num][2*n]);    //将初始x[i]的值的各幂次方存储在一个二维数组里面 
void f2(double[num][2 * n], double[num][n + 1]);//将初始y[i]的值和y[i]与x[i]各幂次方存储在一个二维数组里面
void normal_equ_sys(double[num][2 * n], double[num][n + 1], double [n+1][n + 2]);//计算正规方程组的增广矩阵。 
void directlu(double [n+1][n + 2], double[]);         //列主元lu分解
int main()
{
	int i;
	double x[num][2 * n], y[num][n + 1],an[n+1]; //存储原始的节点
	cout << "输入x的值:\n";
	for (i = 0; i<num; i++)
		cin >> x[i][0];
	cout << endl;
	cout << "输入y的值:\n";
	for (i = 0; i<num; i++)
		cin >> y[i][0];
	f1(x);
	f2(x,y); //计算正规方程组的系数矩阵
	double matrix[n + 1][n + 2];
	normal_equ_sys(x, y, matrix);
	directlu(matrix, an); //列主元高斯 分解
	system("pause");
	return 0;
}
void f1(double x[num][2*n])//求x的个次幂
{
	/*int n = 2 * n;*/
	int i, j, k;
	double temp;
	for (i = 1; i<2*n; i++)
	for (j = 0; j<num; j++)
	{
		temp = 1;
		for (k = 0; k<=i; k++)
			temp *= x[j][0];
		x[j][i] = temp;
	}
	cout << "xi各个次幂的矩阵：" << endl;
	for (i = 0; i < num; i++)
	{
		for (j = 0; j < n * 2; j++)
		{
			cout << setw(5) << setiosflags(ios::left) << x[i][j];
		}
		cout << endl;
	}
}
void f2(double x[num][2 * n], double y[num][n + 1])//求y和x的个次幂的乘积
{
	int i, j;
	for (i = 1; i<n+1; i++)
	{
		for (j = 0; j<num; j++)
		{
			y[j][i] = y[j][0] * x[j][i - 1];
		}
	}
	cout << "xiyi的矩阵：" << endl;
	for (i = 0; i < num; i++)
	{
		for (j = 0; j <n+1; j++)
		{
			cout <<setw(5)<<setiosflags(ios::left)<< y[i][j] ;
		}
		cout << endl;
	}
}
void normal_equ_sys(double x[num][2 * n], double y[num][n + 1], double matrix[n + 1][n + 2])
{
	double sum_x[(2 * n)+1] = { 0 }, sum_y[n + 1] = { 0 };
	sum_x[0] = num;
	int i, j,k;
	for (i = 0; i < 2 * n; i++)
	{
		for (j = 0; j < num; j++)
		{
			sum_x[i+1] += x[j][i];
		}
	}
	for (i = 0; i < 1 + n; i++)
	{
		for (j = 0; j < num; j++)
		{
			sum_y[i] += y[j][i];
		}
		matrix[i][n + 1] = sum_y[i];
	}
	for (i = 0; i < 1 + n; i++)
	{
		k = i;
		for (j = 0; j < n + 1; j++,k++)
		{
			matrix[i][j] = sum_x[k];
		}
	}
	cout << "正规方程组的增广矩阵为：" << endl;
	for (i = 0; i < n + 1; i++)
	{
		for (j = 0; j < n + 2; j++)
		{
			cout << setw(5) << setiosflags(ios::left) << matrix[i][j];
		}
		cout << endl;
	}
}
void directlu(double matrix[n+1][n + 2], double an[n+1])
{
     	int line = n + 1, row = n + 2;
	    double temp, sum = 0 ;
		int i, j, i1, j1, max_line;
		for (i = 0; i < row-1; i++)//整个大的for循环，控制迭代消元
		{
			max_line = i;//保存行坐标
			for (j = i; j < line; j++)//寻找第i列中绝对值最大的元素。
			{
				if (fabs(matrix[max_line][i]) < fabs(matrix[j][i]))
				{
					max_line = j;//保存第i列中绝对值最大的元素所在行。
				}
			}
			for (j1 = i; j1 < row; j1++)//把绝对值最大的那一行元素，跟第i行元素。
			{
				temp = matrix[max_line][j1];
				matrix[max_line][j1] = matrix[i][j1];
				matrix[i][j1] = temp;
			}
			double bei;//临时变量。
			for (i1 = i + 1; i1 < line; i1++)//控制迭代。
			{
				bei = matrix[i1][i]/matrix[i][i];//保存绝对值最大的那一行的第一个元素跟第i行的第一个元素之间的倍数。
				int i2;
				for (i2 = i; i2 <row ; i2++)//消元。
				{
					matrix[i1][i2] = matrix[i1][i2] -  matrix[i][i2]*bei;
				}
			}
		}	
		an[line - 1] = matrix[line - 1][row - 1] / matrix[line - 1][row - 2];
		for (i = line-2; i >=0; i--)//回代求得方程的解。
		{
			sum = matrix[i][row - 1];
			for (j = row-2; j >= i+1; j--)
			{
				sum -= matrix[i][j]*an[j];
			}
			an[i] = sum / matrix[i][j];
		}
		cout << "方程组的解为："<<endl;
		for (i = 0; i < line; i++)
			cout << "a[" << i+1 << "]=" << an[i] << endl;
}
//////拉格朗日插值。
//#include<iostream> 
//using namespace std; 
//int main()
//{
//	int number, i, k;
//	double x;
//	double y = 0,sum=1;
//	cout << "输入总共过点的个数：" << endl;
//	cin >> number;
//	double *X = new double[number];
//	double*FX = new double[number];
//	cout << "输入各个点:" << endl;
//	for (i = 0; i<number; i++)
//		cin >> X[i];
//	cout << "输入各个点的值:" << endl;
//	for (i = 0; i<number; i++)
//		cin >> FX[i];
//	cout << "输入你要求得点:";
//	cin >> x;
//	for (k = 0; k<number; k++)
//	{
//		sum = 1;
//		for (i = 0; i<number; i++)
//		{
//			if (i == k)
//				continue;
//			sum *= (x - X[i]) / (X[k] - X[i]);
//		}
//		y = y + sum*FX[k];
//	}
//	cout << "f(" << x << ")approximatly equals to:" << y << endl;
//	delete[] X;
//	delete[] FX;
//	system("pause");
//	return 0;
//}
////二分法
//#include<iostream>
//#include<stdio.h>
//#define eps 0.0000000000000001
//using namespace std;
//double f(double x)
//{
//	return x*x-2*x+1;
//}
//int main()
//{
//	double a = 0, b = 0, c = 0, ya = 0, yb = 0, yc = 0;
//	cout << "用二分法寻找方程x*x-2*x+1=0的根\n" << endl;
//	cout << "求根区间为[0.5,2.5]\n" << endl;
//	a = 0.5, b = 2.5;
//	ya = f(a);
//	yb = f(b);
//	while ((b - a)>eps)
//	{
//		c = (a + b) / 2;
//		yc = f(c);
//		if (yc == 0)
//			break;
//		else if (yc*yb<0)
//		{
//			a = c;
//			ya = yc;
//		}
//		else
//		{
//			b = c;
//			yb = yc;
//		}
//	}
//	cout << "方程的根为:" << c << endl;
//	system("pause");
//	return 0;
//}


//
////梯形公式
//#include <iostream>
//#include<cmath> 
//using namespace std;
//double f(double x)
//{
//	return 4 / (1 + x*x);
//}
//int main()
//{
//	double a, b;
//	cout << "请输入积分区间: " << endl;
//	cin >> a >> b;
//	double I = f(a);
//	I += f(b);
//	double T = (b - a)*I / 2;
//	cout << "积分结果为：" << T << endl;
//	system("pause");
//	return 0;
//	return 0;
//}
//复化辛普森
//#include <iostream>
//#include<cmath> 
//using namespace std;
//int main()
//{
//	double a, b, n;
//	cout << "请输入积分区间: " << endl;
//	cin >> a >> b;
//	cout << "分段数目：" << endl;
//	cin>> n;
//	double h = (b - a) / n;//区间数
//	double x = a;
//	double fun1(double y);
//	double S = fun1(a) - fun1(b);
//	int i = 1;
//	while (i <= n)//p103
//	{
//		x = x + h / 2;
//		S = S + 4 * fun1(x);
//		x = x + h / 2;
//		S = S + 2 * fun1(x);
//		i++;
//	}
//	S = S*(h / 6);
//	cout << "近似值是: " << endl << "S=" << S << endl;
//	system("pause");
//	return 0;
//}
//double fun1(double x)//被积函数
//{
//	return 4 / (1 + x*x);
//}
//

