#include"mest1.h"
int count1 = 0;
void STUDENT::input_score(STUDENT*stu)
{
	int input;
	do
	{
		int i;
		if (count1 == MAX)
		{
			stu = (STUDENT*)realloc(stu, MAX * sizeof(STUDENT));
		}
		cout << "输入学生姓名:" << endl;
		cin >> (stu + count1)->name;
		cout << "输入学生性别:" << endl;
		cin >> (stu + count1)->sex;
		cout << "输入学生学号:" << endl;
		cin >> (stu + count1)->number;
		cout << "输入语文，数学，英语，物理，化学，生物,平时成绩,期末总成绩:" << endl;
		for (i = 0; i < 8; i++)
		{
			cin >> (stu + count1)->score[i];
			
		}
		count1++;
		while (1)
		{
			cout << "*********** 0. 结束录入成绩   1.继续录入成绩" << endl;
			cin >> input;
			if (input == 0 || input == 1)
				break;
			else
				cout << "选择错误。" << endl;
		}
	} while (input);
}
void STUDENT::output_score(STUDENT*stu)
{
	int i, j;
	cout << setw(10) << "学号" << setw(13) << "姓名" << setw(10) << "性别" << setw(10) << "语文" << setw(10) << "英语" << setw(10) << "数学" << setw(10) << "物理" << setw(10) << "化学" << setw(10) << "生物" << setw(12) << "平时成绩" << setw(12) << "期末总评" << endl;
	for (i = 0; i <count1; i++)
	{
		cout << "  " << setw(12) << stu[i].number << setw(9) << stu[i].name << setw(9) << stu[i].sex;
		for (j = 0; j< 6; j++)
		{
			cout << setw(10) << stu[i].score[j];
		}
		cout << setw(10) << stu[i].score[6] << "  ";
		cout << setw(10) << stu[i].score[7] << endl;
	}
}
	
void STUDENT::search_score(STUDENT*stu)
{
	int i,j;
	char name[20];
	cout << "输入你要查询的学生的姓名：" << endl;
	cin >> name;
	for (i = 0; i <count1; i++)
	{
		if (!strcmp(name, stu[i].name))
		{
			cout << setw(10) << "学号" << setw(13) << "姓名" << setw(10) << "性别" << setw(10) << "语文" << setw(10) << "英语" << setw(10) << "数学" << setw(10) << "物理" << setw(10) << "化学" << setw(10) << "生物" << setw(12) << "平时成绩" << setw(12) << "期末总评" << endl;
			cout << "  " << setw(12) << stu[i].number << setw(9) << stu[i].name << setw(9) << stu[i].sex;
			for (j = 0; j< 6; j++)
			{
				cout << setw(10) << stu[i].score[j];
			}
			cout << setw(10) << stu[i].score[6] << "  ";
			cout << setw(10) << stu[i].score[7] << endl;
			return;
		}
	}
	cout << "找不到此学生的信息" << endl;
}
void revise()//修改
{
	cout << "*********************" << endl;
	cout << "***1.语文   2.数学***" << endl;
	cout << "*********************" << endl;
	cout << "***3.英语   4.物理***" << endl;
	cout << "*********************" << endl;
	cout << "***5.化学   6.生物***" << endl;
	cout << "*********************" << endl;
	cout << "*7.平时成绩 8.总成绩*" << endl;
	cout << "*********************" << endl;
	cout << "输入你要修改的选择：" << endl;
}
void STUDENT::revise_score(STUDENT*stu)
{
	int i, j;
	cout << "输入你要修改学生的姓名";
	char name[20];
	cin >> name;
	for (i = 0; i <count1; i++)
	{
		if (!strcmp(name, stu[i].name))
		{
			int n;
			revise();
			while (1)
			{
				cin >> n;
				cout << "输入你要修改的成绩为:" << endl;
				if (1 <= n&&n <= 8)
				{
					cin >> stu[i].score[n - 1];
					break;
				}
				else
					cout << "选择错误，请重新选择：" << endl;
			}
			cout << setw(10) << "学号" << setw(13) << "姓名" << setw(10) << "性别" << setw(10) << "语文" << setw(10) << "英语" << setw(10) << "数学" << setw(10) << "物理" << setw(10) << "化学" << setw(10) << "生物" << setw(12) << "平时成绩" << setw(12) << "期末总评" << endl;
			cout << "  " << setw(12) << stu[i].number << setw(9) << stu[i].name << setw(9) << stu[i].sex;
			for (j = 0; j< 6; j++)
			{
				cout << setw(10) << stu[i].score[j];
			}
			cout << setw(10) << stu[i].score[6] << "  ";
			cout << setw(10) << stu[i].score[7] << endl;
			return;
		}
	}
	cout << "找不到此学生的信息" << endl;
}
void STUDENT::delete_score(STUDENT*stu)
{
	int i, j,k;
	char name[20];
	cout << "输入你要删除的学生的姓名：" << endl;
	cin >> name;
	for (i = 0; i <count1; i++)
	{
		if (!strcmp(name, stu[i].name))
		{
			for (k = i; k < count1-1; k++)
			{
				strcpy(stu[k].name, stu[k + 1].name);
				strcpy(stu[k].sex, stu[k + 1].sex);
				strcpy(stu[k].number, stu[k + 1].number);
				for (j = 0; j < 8; j++)
				{
					stu[k].score[j] = stu[k+1].score[j];
				}
			}
			cout << "删除完成。"<<endl;
			count1--;
			return;
		}
	}
	cout << "找不到此学生的信息" << endl;
}
void STUDENT::empty_score(STUDENT*stu)
{
	int input;
	cout << "************1.确认清空学生信息   0.退出****************" << endl;
	while (1)
	{
		cin >> input;
		if (input == 1)
		{
			free(stu);
			stu = (STUDENT*)malloc(50 * sizeof(STUDENT));
			count1 = 0;
			return;
		}
		else if (input == 0)
			return;
		else
			cout << "选择错误，重新选择。" << endl;
	}
}
void STUDENT::open_file(STUDENT *stu)//文件的读出
{
	char file[20];
	int i = 0, j = 0;
	char temp[30];
	cout << "请输入您要读入的文件名";
	cin >> file;
	ifstream infile(file, ios::in);
	if (!infile)
	{
		cout << "文件无法打开" << endl;
	}
	else
	{
		infile.getline(temp,30,'\n');
		while (!infile.eof())
		{
			infile >> stu[i].number >> stu[i].name >> stu[i].sex;
			for (j = 0; j< 6; j++)
			{
				infile >> stu[i].score[j];
			}
			infile >> stu[i].score[6];
			infile >> stu[i].score[7];
			i++;
		}
		count1 = i-1;
		cout << count1 << endl;
		cout << "读入成功" << endl;
	}
	infile.close();
}
void STUDENT::save_file(STUDENT*stu)//文件的保存
{
	char file[20];
	int i = 0, j = 0;
	cout << "请输入您要创建的文件名";
	if (count1 == 0)
	{
		cout << "(您可能还没有录入学生信息!!)" << endl;
	}
	cin >> file;
	ofstream outfile(file, ios::out);
	if (!outfile)
	{
		cout << "文件无法打开" << endl;
	}
	else
	{
		outfile << setw(10) << "学号" << setw(13) << "姓名" << setw(10) << "性别" << setw(10) << "语文" << setw(10) << "英语" << setw(10) << "数学" << setw(10) << "物理" << setw(10) << "化学" << setw(10) << "生物" << setw(12) << "平时成绩" << setw(12) << "期末总评" << endl;
		for (i = 0; i < count1; i++)
		{
			outfile << "  " << setw(12) << stu[i].number << setw(9) << stu[i].name << setw(9) << stu[i].sex;
			for (j = 0; j< 6; j++)
			{
				outfile << setw(10) << stu[i].score[j];
			}
			outfile << setw(10) << stu[i].score[6] << "  ";
			outfile << setw(10) << stu[i].score[7] << endl;
		}
		cout << "保存成功" << endl;
	}
	outfile.close();
}
