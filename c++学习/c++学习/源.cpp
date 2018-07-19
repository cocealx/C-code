//#include<iostream>
//#include<string>
//#include<cstring>
//using namespace std;
//enum AA
//{
//	red,
//	gree,
//	blue,
//	block
//}a;
//int main()
//{
//	int i = 0x1234;
//	int j = 0456;
//	int k = 100;
//	char charr[28];
//	string str1;
//	a = blue;
//
//	if (a == blue)
//		cout << "hehe\n";
//	cout << hex << i << endl;//以16进制输出
//	cout << oct << j << endl;//以八进制输出
//	cout <<dec<< k << endl;//以10进制输出
//	cout << "charr lengh:" << strlen(charr) << endl;
//	cout << "str1 lengh:" << str1.size() << endl;
//	//cin.getline(charr,27);
//	getline(cin,str1);
//	cout << "charr lengh:" << strlen(charr) << endl;
//	cout << "str1 lengh:" << str1.size() << endl;
//	cin.get();
//	return 0;
//}
//#include<iostream>
//#include<vector>
//#include<array>
//#include<string>
//using namespace std;
//int main()
//{
//	int i;	
//	/*cin >> i;*/
//	/*vector<int[5]>vi(i);*/
//	//int app[5] = { 1,2,3,4,5 };
//	//vector<int>app(5);
//	array<int, 5>app;
//	for (int &x : app)
//		cin >> x;
//	for (int y : app)
//		cout << y << ' ';
//	system("pause");
//	/*cin >>vi[0][0];*/
//	/*array<int[5], 2>pc = { 0 };
//	(pc.at)(1)[0]=2;
//	pc[3][0] = 5;*/
//	//const std::vector<std::string>arr(10);
//	//array<const std::string, 10> add;
//
//}
#include<iostream>
#include<string>
using namespace std;
int main()
{
	char pc[20]{0};
	int count = 0,i = 0;
	while (int ret = strncmp(pc, "done",4))
	{
		i = 0;
		while ((cin.get(pc[i]))!= ' ' && (cin.get(pc[i])) != EOF) i++;
		count++;
		pc[i] = '\0';
	}
	printf("%d\n", count);
	cin.get();
	return 0;
}