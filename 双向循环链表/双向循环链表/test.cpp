#include"MYList.h"

void testMYList()
{
	List s1;
	//β��βɾ
	s1.Pushback(1);
	s1.Pushback(2);
	s1.Pushback(3);
	cout << s1 << endl;
	s1.Popback();
	cout << s1 << endl;
	s1.Popback();
	cout << s1 << endl;
	s1.Popback();
	cout << s1 << endl;
	s1.Popback();
	cout << s1 << endl;
	//ͷ��ͷɾ
	s1.PushFront(1);
	s1.PushFront(2);
	s1.PushFront(3);
	cout << s1 << endl;
	s1.PopFront();
	cout << s1 << endl;
	s1.PopFront();
	cout << s1 << endl;
	s1.PopFront();
	cout << s1 << endl;
	s1.PopFront();
	cout << s1 << endl;

	//����λ��ǰ�����ɾ��
	//	s1.InsertFront(s1.Find(2), 0);
	s1.Pushback(1);
	s1.InsertFront(s1.Find(1), 0);
	s1.Pushback(2);
	s1.Pushback(3);
	s1.InsertFront(s1.Find(1),0);
	s1.InsertFront(s1.Find(2), 0);
	s1.InsertFront(s1.Find(3), 0);
	//s1.InsertFront(0, 0);
	cout << s1 << endl;
	s1.Erase(s1.Find(0));
	s1.Erase(s1.Find(0));
	s1.Erase(s1.Find(0));
	s1.Erase(s1.Find(0));
	cout << s1 << endl;
	s1.Popback();
	s1.Popback();
	cout << s1 << endl;
	s1.Erase(s1.Find(1));
	cout << s1 << endl;


	//����λ�ú�����ɾ��
	s1.Pushback(1);
	s1.InsertBack(s1.Find(1), 0);
	s1.Pushback(2);
	s1.Pushback(3);
	s1.InsertBack(s1.Find(1), 0);
	s1.InsertBack(s1.Find(2), 0);
	s1.InsertBack(s1.Find(3), 0);
	cout << s1 << endl;
	s1.Erase(s1.Find(0));
	s1.Erase(s1.Find(0));
	s1.Erase(s1.Find(0));
	s1.Erase(s1.Find(0));
	cout << s1 << endl;
	s1.Popback();
	s1.Popback();
	cout << s1 << endl;
	s1.Erase(s1.Find(1));
	cout << s1 << endl;
	//�������Ⱥ��������

	s1.Pushback(1);
	s1.Pushback(2);
	s1.Pushback(3);
	cout << s1 << endl;
	cout << s1.Size() << endl;
	s1.Clear();
	cout << s1.Size() << endl;
	cout << "����" << endl;
}
int main()
{
	testMYList();
	return 0;
}