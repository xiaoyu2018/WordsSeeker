#pragma once
#include<cstdio>
#include<iostream>
#include<string.h>
using namespace std;
struct myString
{
	char s[100];  //s的容量可手动调节
	int lenth;       //字符串当前的真实长度
};