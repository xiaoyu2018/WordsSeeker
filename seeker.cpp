#include"pub.h"
#include"kmp.h"

void seeker()
{
	int flag = 0;
	char name[20];
	myString word, ss;
	FILE*f;
	int line = 0;
	cout << "请输入你要查找的文件名" << endl;
	scanf("%s", &name);
	while (!(f = fopen(name, "r")))
	{
		cout << "未找到该文件,请重新输入" << endl;
		scanf("%s", &name);
	}
	cout << "请输入待查找的单词!" << endl;
	scanf("%s", &word.s);
	word.lenth = strlen(word.s);
	cout << "您要查找的单词在文件中" << endl;
	while (!feof(f))
	{
		memset(ss.s, '\0', 100);     //用于添加字符串尾
		fgets(ss.s, 100, f);             //获取文件中一行话
		ss.lenth = strlen(ss.s);
		line++;                             //行数
		int k = 0, a[10];                 //当前行有几个匹配的单词,以及位置
		if (KMPS(ss, word, a, k))
		{
			flag = 1;                      //文件中有待查找单词的标志
			cout << line << "行" << ':' << endl << "第 ";
			for (int i = 0; i < k; i++)
			{
				cout << a[i] << ' ';
			}
			cout << "位" << endl;
		}
	}
	if (!flag)
		cout << "未找到!" << endl;
	fclose(f);
	cout << "请继续选择操作!" << endl;
}