#include"pub.h"
#include"amadeus.h"






int main()
{
	char mode; int  menuFlag = 1;
	while (1)
	{
		mode = main_menu(menuFlag);   //模式选择
		if (mode == '4')           //退出程序
		{
			cout << "感谢您的使用,再见!" << endl;
			break;
		}
		else
		{
			switch (mode)     //模式的跳转
			{
			case '1':createText(); break;
			case '2':counter(); break;
			case '3':seeker(); break;
			}
		}
	}
	system("pause");
	return 0;
}