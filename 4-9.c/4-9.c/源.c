#include<stdio.h>
int i = 0;
void text1(int a)
{
	for (i = 0; a > 0; i++)
	{
		a /= 10;
	}
}
void text2(int a)
{
	if (a > 9)
	{
		text2(a / 10);
	}
	printf("%d ", a % 10);
}
void text3(int a)
{
	for (i = 0; a > 0; i++)
	{
		printf("%d ", a % 10);
		a /= 10;
	}
}
int main()
{
	int x;
	printf("请输入一个不多于5位的正整数\n");
	scanf_s("%d", &x);
	text1(x);
	printf("该数的位数为%d位\n", i);
	text2(x);
	printf("\n");
	text3(x);
	return 0;
}