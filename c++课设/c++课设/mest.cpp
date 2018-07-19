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
		cout << "����ѧ������:" << endl;
		cin >> (stu + count1)->name;
		cout << "����ѧ���Ա�:" << endl;
		cin >> (stu + count1)->sex;
		cout << "����ѧ��ѧ��:" << endl;
		cin >> (stu + count1)->number;
		cout << "�������ģ���ѧ��Ӣ�������ѧ������,ƽʱ�ɼ�,��ĩ�ܳɼ�:" << endl;
		for (i = 0; i < 8; i++)
		{
			cin >> (stu + count1)->score[i];
			
		}
		count1++;
		while (1)
		{
			cout << "*********** 0. ����¼��ɼ�   1.����¼��ɼ�" << endl;
			cin >> input;
			if (input == 0 || input == 1)
				break;
			else
				cout << "ѡ�����" << endl;
		}
	} while (input);
}
void STUDENT::output_score(STUDENT*stu)
{
	int i, j;
	cout << setw(10) << "ѧ��" << setw(13) << "����" << setw(10) << "�Ա�" << setw(10) << "����" << setw(10) << "Ӣ��" << setw(10) << "��ѧ" << setw(10) << "����" << setw(10) << "��ѧ" << setw(10) << "����" << setw(12) << "ƽʱ�ɼ�" << setw(12) << "��ĩ����" << endl;
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
	cout << "������Ҫ��ѯ��ѧ����������" << endl;
	cin >> name;
	for (i = 0; i <count1; i++)
	{
		if (!strcmp(name, stu[i].name))
		{
			cout << setw(10) << "ѧ��" << setw(13) << "����" << setw(10) << "�Ա�" << setw(10) << "����" << setw(10) << "Ӣ��" << setw(10) << "��ѧ" << setw(10) << "����" << setw(10) << "��ѧ" << setw(10) << "����" << setw(12) << "ƽʱ�ɼ�" << setw(12) << "��ĩ����" << endl;
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
	cout << "�Ҳ�����ѧ������Ϣ" << endl;
}
void revise()//�޸�
{
	cout << "*********************" << endl;
	cout << "***1.����   2.��ѧ***" << endl;
	cout << "*********************" << endl;
	cout << "***3.Ӣ��   4.����***" << endl;
	cout << "*********************" << endl;
	cout << "***5.��ѧ   6.����***" << endl;
	cout << "*********************" << endl;
	cout << "*7.ƽʱ�ɼ� 8.�ܳɼ�*" << endl;
	cout << "*********************" << endl;
	cout << "������Ҫ�޸ĵ�ѡ��" << endl;
}
void STUDENT::revise_score(STUDENT*stu)
{
	int i, j;
	cout << "������Ҫ�޸�ѧ��������";
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
				cout << "������Ҫ�޸ĵĳɼ�Ϊ:" << endl;
				if (1 <= n&&n <= 8)
				{
					cin >> stu[i].score[n - 1];
					break;
				}
				else
					cout << "ѡ�����������ѡ��" << endl;
			}
			cout << setw(10) << "ѧ��" << setw(13) << "����" << setw(10) << "�Ա�" << setw(10) << "����" << setw(10) << "Ӣ��" << setw(10) << "��ѧ" << setw(10) << "����" << setw(10) << "��ѧ" << setw(10) << "����" << setw(12) << "ƽʱ�ɼ�" << setw(12) << "��ĩ����" << endl;
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
	cout << "�Ҳ�����ѧ������Ϣ" << endl;
}
void STUDENT::delete_score(STUDENT*stu)
{
	int i, j,k;
	char name[20];
	cout << "������Ҫɾ����ѧ����������" << endl;
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
			cout << "ɾ����ɡ�"<<endl;
			count1--;
			return;
		}
	}
	cout << "�Ҳ�����ѧ������Ϣ" << endl;
}
void STUDENT::empty_score(STUDENT*stu)
{
	int input;
	cout << "************1.ȷ�����ѧ����Ϣ   0.�˳�****************" << endl;
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
			cout << "ѡ���������ѡ��" << endl;
	}
}
void STUDENT::open_file(STUDENT *stu)//�ļ��Ķ���
{
	char file[20];
	int i = 0, j = 0;
	char temp[30];
	cout << "��������Ҫ������ļ���";
	cin >> file;
	ifstream infile(file, ios::in);
	if (!infile)
	{
		cout << "�ļ��޷���" << endl;
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
		cout << "����ɹ�" << endl;
	}
	infile.close();
}
void STUDENT::save_file(STUDENT*stu)//�ļ��ı���
{
	char file[20];
	int i = 0, j = 0;
	cout << "��������Ҫ�������ļ���";
	if (count1 == 0)
	{
		cout << "(�����ܻ�û��¼��ѧ����Ϣ!!)" << endl;
	}
	cin >> file;
	ofstream outfile(file, ios::out);
	if (!outfile)
	{
		cout << "�ļ��޷���" << endl;
	}
	else
	{
		outfile << setw(10) << "ѧ��" << setw(13) << "����" << setw(10) << "�Ա�" << setw(10) << "����" << setw(10) << "Ӣ��" << setw(10) << "��ѧ" << setw(10) << "����" << setw(10) << "��ѧ" << setw(10) << "����" << setw(12) << "ƽʱ�ɼ�" << setw(12) << "��ĩ����" << endl;
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
		cout << "����ɹ�" << endl;
	}
	outfile.close();
}
