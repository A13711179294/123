#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char ch;
	printf("������Ӣ����ĸ\n");
	scanf("%c", &ch);
	if (ch >= 'A' && ch <= 'Z')
	{
		ch = (ch >= 'A' && ch <= 'Z') ? (ch + 32) : ch;
		printf("СдΪ:%c\n", ch);
		goto a;
	}
	if (ch >= 'a' && ch <= 'z');
	{
		ch = (ch >= 'a' && ch <= 'z') ? (ch - 32) : ch;
		printf("��дΪ:%c\n", ch);
	}
a:
	return 0;