#include"pub.h"
#include"kmp.h"
void counter()
{
	int c = 0;
	char name[20];
	myString word, ss;
	FILE *f;
	cout << "�������ļ���!" << endl;
	scanf("%s", &name);
	while (!(f = fopen(name, "r")))
	{
		cout << "δ�ҵ����ļ�,����������" << endl;
		scanf("%s", &name);
	}
	cout << "������������ĵ���!" << endl;
	scanf("%s", &word.s);
	word.lenth = strlen(word.s);
	while (!feof(f))
	{
		memset(ss.s, '\0', 100);      //��������ַ���β
		fgets(ss.s, 100, f);              //��ȡ�ļ���һ�л�
		ss.lenth = strlen(ss.s);
		c += KMPC(ss, word);        //����
	}
	cout << "����" << ' ' << word.s << ' ' << "���ִ���Ϊ" << ' ' << c << ' ' << "��!" << endl;
	fclose(f);
	cout << "�����ѡ�����!" << endl;
}