#include<stdio.h>
int main()
{
	int x;
	printf("请输入你的成绩\n");
	scanf_s("%d", &x);
	switch (x/10)
	{
	case 10:
	case 9:
		printf("你的成绩等级：'A'");
		break;
	case 8:
		printf("你的成绩等级：'B'");
		break;
	case 7:
		printf("你的成绩等级：'C'");
		break;
	case 6:
		printf("你的成绩等级：'D'");
		break;
	case 5:
	case 4:
	case 3:
	case 2:
	case 1:
	case 0:
		printf("你的成绩等级：'E'");
		break;
	default: 
		printf("输入错误，请重新输入");
	}
	return 0;
}