#include"pub.h"
#include"kmp.h"
void counter()
{
	int c = 0;
	char name[20];
	myString word, ss;
	FILE *f;
	cout << "请输入文件名!" << endl;
	scanf("%s", &name);
	while (!(f = fopen(name, "r")))
	{
		cout << "未找到该文件,请重新输入" << endl;
		scanf("%s", &name);
	}
	cout << "请输入待计数的单词!" << endl;
	scanf("%s", &word.s);
	word.lenth = strlen(word.s);
	while (!feof(f))
	{
		memset(ss.s, '\0', 100);      //用于添加字符串尾
		fgets(ss.s, 100, f);              //获取文件中一行话
		ss.lenth = strlen(ss.s);
		c += KMPC(ss, word);        //计数
	}
	cout << "单词" << ' ' << word.s << ' ' << "出现次数为" << ' ' << c << ' ' << "次!" << endl;
	fclose(f);
	cout << "请继续选择操作!" << endl;
}