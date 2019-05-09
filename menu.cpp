#include"pub.h"
char main_menu(int &f)         //f用来使主菜单只出现一次
{
	char mode;                       //声明成char类型减少bug
	if (f == 1)
	{
		cout << "文本文件单词的检索和计数系统" << endl;
		cout << "        1.建立文件              " << endl;
		cout << "        2.单词计数              " << endl;
		cout << "        3.单词查找              " << endl;
		cout << "        4.退出程序              " << endl;
		cout << "请在键盘上输入1-4进行操作!" << endl;
		f = 0;
	}
	while (1)
	{
		cin >> mode;
		if (mode > '4' || mode < '1')
			cout << "选择错误,请重新选择!" << endl;
		else
			break;
	}
	return mode;
}