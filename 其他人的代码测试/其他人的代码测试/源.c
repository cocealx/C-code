//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	double Xi[9] = { 413, 403, 383.5, 381, 339, 335, 317, 334.5, 333 };
//	double Yi[9] = { 359, 343, 351, 377.5, 376, 383, 362, 353.5 ,342};
//	double range[9] = { 0 };
//	int i;
//	for (i = 0; i < 9; i++)
//	{
//		range[i] = sqrt(Xi[i] * Xi[i] + Yi[i] * Yi[i]);
//	}
//	return 0 ;
//}
#include<iostream>
using namespace std;
int main()
{
	int n = 0;
	int i = 0;
	cout << "输入数据个数》:" << endl;
	cin >> n;
	float*p = new float[n];
	cout << "请输入数据》:" << endl;
	for (i = 0; i < n; i++)
		cin >> p[i];
	for (i = 0; i < n; i++)
		cout<< p[i]<<" ";
	delete[]p;
	system("pause");
}