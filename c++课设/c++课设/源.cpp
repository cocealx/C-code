#include"mest1.h"
void mean()
{
	cout << "**********************************************" << endl;
	cout << "***************��ѧ������ϵͳ��***************" << endl;
	cout << "**********************************************" << endl;
	cout << "**********1.¼��ɼ�   2.����ɼ�*************" << endl;
	cout << "**********                       *************" << endl;
	cout << "**********3.��ѯ�ɼ�   4.�޸ĳɼ�*************" << endl;
	cout << "**********                       *************" << endl;
	cout << "**********5.ɾ���ɼ�   6.��ճɼ�*************" << endl;
	cout << "**********                       *************" << endl;
	cout << "**********7.�����ļ�   8.�����ļ�************" << endl;
	cout << "**********                       ************" << endl;
	cout << "**********       0.�˳�ϵͳ      ************" << endl;
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
		cout << "���������ѡ��" << endl;
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
			cout << "ѡ�����������ѡ��" << endl;
			flag = 0;
			break;
		}
	} while (input);
	free(stu);
	system("pause");
	return 0;
}

