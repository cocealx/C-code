#include"mest1.h"
void mean()
{
	cout << "**********************************************" << endl;
	cout << "***************【学生管理系统】***************" << endl;
	cout << "**********************************************" << endl;
	cout << "**********1.录入成绩   2.浏览成绩*************" << endl;
	cout << "**********                       *************" << endl;
	cout << "**********3.查询成绩   4.修改成绩*************" << endl;
	cout << "**********                       *************" << endl;
	cout << "**********5.删除成绩   6.清空成绩*************" << endl;
	cout << "**********                       *************" << endl;
	cout << "**********7.保存文件   8.读入文件************" << endl;
	cout << "**********                       ************" << endl;
	cout << "**********       0.退出系统      ************" << endl;
	cout << "*********************************************" << endl;
}
int main()
{

	int input;
	int flag = 1;
	class STUDENT*stu;
	stu = (STUDENT*)malloc(MAX * sizeof(STUDENT));
	do
	{
		mean();
		if (flag)
		cout << "请输入你的选择：" << endl;
		cin >> input;
		switch (input)
		{
		case 0:
			exit(0);
			break;
		case 1:
			stu->input_score(stu);
			break;
		case 2:
			stu->output_score(stu);
			break;
		case 3:
			stu->search_score(stu);
			break;
		case 4:
			stu->revise_score(stu);
			break;
		case 5:
			stu->delete_score(stu);
			break;
		case 6:
			stu->empty_score(stu);
			break;
		case 7:
			stu->save_file(stu);
			break;
		case 8:
			stu->open_file(stu);
			break;
		default:
			cout << "选择错误，请重新选择：" << endl;
			flag = 0;
			break;
		}
	} while (input);
	free(stu);
	system("pause");
	return 0;
}

