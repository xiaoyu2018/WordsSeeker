#include"pub.h"
char main_menu(int &f)         //f����ʹ���˵�ֻ����һ��
{
	char mode;                       //������char���ͼ���bug
	if (f == 1)
	{
		cout << "�ı��ļ����ʵļ����ͼ���ϵͳ" << endl;
		cout << "        1.�����ļ�              " << endl;
		cout << "        2.���ʼ���              " << endl;
		cout << "        3.���ʲ���              " << endl;
		cout << "        4.�˳�����              " << endl;
		cout << "���ڼ���������1-4���в���!" << endl;
		f = 0;
	}
	while (1)
	{
		cin >> mode;
		if (mode > '4' || mode < '1')
			cout << "ѡ�����,������ѡ��!" << endl;
		else
			break;
	}
	return mode;
}