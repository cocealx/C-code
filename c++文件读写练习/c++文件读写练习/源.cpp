#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	/*char name[60];
	cout << "输入文件名：" << endl;
	cin >> name;*/
	ofstream outfile("123.txt", ios::out | ios::_Noreplace);
	ifstream infile;
	infile.open("123.txt", ios::in | ios::_Nocreate);
	/*if (!outfile)
	{
		ofstream outfile("123.txt", ios::out);
		if (!outfile)
		{
			cout << "open error";
			exit(0);
		}
	}
	char ch;
	while (cin.get(ch))
		outfile << ch;
	char temp[20] = "abcdefg";
	for (int i = 0; i < 20; i++)
	{
		infile >> temp[i];
		cout << "1" << endl;
	}
	for (int i = 0; i < 20; i++)
		cout << temp[i];
	outfile.close();
	infile.close();*/
	char ch[1];
	cin >> ch;
	system("pause");
	return 0;
}