#include"pub.h"
void createText()
{
	FILE *f;
	char name[15];
	cout << "�������ļ���!" << endl;
	scanf("%s", &name);
	f = fopen(name, "w");
	fclose(f);
	cout << "�ļ��������!" << endl << "�����ѡ�����!" << endl;
}