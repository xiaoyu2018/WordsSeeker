#include"pub.h"
void createText()
{
	FILE *f;
	char name[15];
	cout << "请输入文件名!" << endl;
	scanf("%s", &name);
	f = fopen(name, "w");
	fclose(f);
	cout << "文件建立完毕!" << endl << "请继续选择操作!" << endl;
}