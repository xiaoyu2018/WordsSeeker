#include"pub.h"
#include"amadeus.h"






int main()
{
	char mode; int  menuFlag = 1;
	while (1)
	{
		mode = main_menu(menuFlag);   //ģʽѡ��
		if (mode == '4')           //�˳�����
		{
			cout << "��л����ʹ��,�ټ�!" << endl;
			break;
		}
		else
		{
			switch (mode)     //ģʽ����ת
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