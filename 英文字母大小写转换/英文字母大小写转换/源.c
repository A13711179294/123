#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char ch;
	printf("请输入英文字母\n");
	scanf("%c", &ch);
	if (ch >= 'A' && ch <= 'Z')
	{
		ch = (ch >= 'A' && ch <= 'Z') ? (ch + 32) : ch;
		printf("小写为:%c\n", ch);
		goto a;
	}
	if (ch >= 'a' && ch <= 'z');
	{
		ch = (ch >= 'a' && ch <= 'z') ? (ch - 32) : ch;
		printf("大写为:%c\n", ch);
	}
a:
	return 0;