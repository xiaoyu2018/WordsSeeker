#include"pub.h"
#include"kmp.h"

void seeker()
{
	int flag = 0;
	char name[20];
	myString word, ss;
	FILE*f;
	int line = 0;
	cout << "��������Ҫ���ҵ��ļ���" << endl;
	scanf("%s", &name);
	while (!(f = fopen(name, "r")))
	{
		cout << "δ�ҵ����ļ�,����������" << endl;
		scanf("%s", &name);
	}
	cout << "����������ҵĵ���!" << endl;
	scanf("%s", &word.s);
	word.lenth = strlen(word.s);
	cout << "��Ҫ���ҵĵ������ļ���" << endl;
	while (!feof(f))
	{
		memset(ss.s, '\0', 100);     //��������ַ���β
		fgets(ss.s, 100, f);             //��ȡ�ļ���һ�л�
		ss.lenth = strlen(ss.s);
		line++;                             //����
		int k = 0, a[10];                 //��ǰ���м���ƥ��ĵ���,�Լ�λ��
		if (KMPS(ss, word, a, k))
		{
			flag = 1;                      //�ļ����д����ҵ��ʵı�־
			cout << line << "��" << ':' << endl << "�� ";
			for (int i = 0; i < k; i++)
			{
				cout << a[i] << ' ';
			}
			cout << "λ" << endl;
		}
	}
	if (!flag)
		cout << "δ�ҵ�!" << endl;
	fclose(f);
	cout << "�����ѡ�����!" << endl;
}