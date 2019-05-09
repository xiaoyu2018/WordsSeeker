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
	int c = 0;    //���ʳ��ִ���
	int *next = new int[p.lenth];
	next = getNext(p);
	int i = 0, j = 0;

	while (i < t.lenth)
	{
		if (j == -1 || t.s[i] == p.s[j])    //��λ��ʧ�������뵥��ĸƥ������
		{
			i++;
			j++;
		}
		else        //һ��ʧ��ʱ�ƶ���jָ��next[j]��λ��
			j = next[j];
		if (j == p.lenth)   //���ʳ���ƥ��
		{
			if ((t.s[i - p.lenth - 1] == ' ' || t.s[i - p.lenth - 1] == '\n' || t.s[i - p.lenth] == p.s[0])   //���ڽ�����ʰ����ͱ������
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
		if (j == -1 || t.s[i] == p.s[j])   //��λ��ʧ�������뵥��ĸƥ������
		{
			if (t.s[i] == ' '&& i)   //������������λ�Ŀո�ʱλ�ü�1
				site++;
			i++;
			j++;
		}
		else    //һ��ʧ��ʱ�ƶ���jָ��next[j]��λ��
			j = next[j];
		if (j == p.lenth)    //���ʳ���ƥ��
		{
			if ((t.s[i - p.lenth - 1] == ' ' || t.s[i - p.lenth - 1] == '\n' || t.s[i - p.lenth] == p.s[0])   //���ڽ�����ʰ����ͱ������
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