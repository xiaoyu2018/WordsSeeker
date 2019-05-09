#include"pub.h"


int*getNext(myString p)
{
	int *next = new int[p.lenth];
	next[0] = -1;
	int i = 0, j = -1;
	while (i < p.lenth)
	{
		if (j == -1 || p.s[i] == p.s[j])
		{
			++i;
			++j;
			next[i] = j;
		}
		else
			j = next[j];
	}
	return next;
}


int KMPC(myString t, myString p)
{
	int c = 0;    //单词出现次数
	int *next = new int[p.lenth];
	next = getNext(p);
	int i = 0, j = 0;

	while (i < t.lenth)
	{
		if (j == -1 || t.s[i] == p.s[j])    //首位即失配的情况与单字母匹配的情况
		{
			i++;
			j++;
		}
		else        //一般失配时移动到j指针next[j]的位置
			j = next[j];
		if (j == p.lenth)   //单词初步匹配
		{
			if ((t.s[i - p.lenth - 1] == ' ' || t.s[i - p.lenth - 1] == '\n' || t.s[i - p.lenth] == p.s[0])   //用于解决单词包含和标点问题
				&& (t.s[i] == ' ' || t.s[i] == '\n' || t.s[i] == '\0' || t.s[i] == '.' || t.s[i] == '!' || t.s[i] == '?' || t.s[i] == ',' || t.s[i] == ';'))
				c++;
			j = 0;
		}
	}
	return c;
}


int KMPS(myString t, myString p, int*a, int &k)
{
	int site = 0, flag = 0;
	int *next = new int[p.lenth];
	next = getNext(p);
	int i = 0, j = 0;


	while (i < t.lenth)
	{
		if (j == -1 || t.s[i] == p.s[j])   //首位即失配的情况与单字母匹配的情况
		{
			if (t.s[i] == ' '&& i)   //当遇到不在首位的空格时位置加1
				site++;
			i++;
			j++;
		}
		else    //一般失配时移动到j指针next[j]的位置
			j = next[j];
		if (j == p.lenth)    //单词初步匹配
		{
			if ((t.s[i - p.lenth - 1] == ' ' || t.s[i - p.lenth - 1] == '\n' || t.s[i - p.lenth] == p.s[0])   //用于解决单词包含和标点问题
				&& (t.s[i] == ' ' || t.s[i] == '\n' || t.s[i] == '\0' || t.s[i] == '.' || t.s[i] == '!' || t.s[i] == '?' || t.s[i] == ',' || t.s[i] == ';'))
			{
				flag = 1;
				a[k++] = site + 1;
			}
			j = 0;
		}
	}
	return flag;
}