#include<stdio.h>
int main()
{
	float x;
	printf("请输入你的分数\n");
	scanf_s("%f", &x);
	if (90 <= x && x <= 100)
		printf("你的成绩等级为A");
	else if (80 <= x && x <= 89)
		printf("你的成绩等级为B");
	else if (70 <= x && x <= 79)
		printf("你的成绩等级为C");
	else if (60 <= x && x <= 69)
		printf("你的成绩等级为D");
	else if (60 > x && x > 0)
		printf("你的成绩等级为E");
	else
		printf("输入错误，请重新输入");
	return 0;
}