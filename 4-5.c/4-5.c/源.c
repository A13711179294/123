#include<stdio.h>
#include<math.h>
int main()
{
	double a;
	printf("请输入一个小于1000的正数\n");
b:
	scanf_s("%lf", &a);
	if (a >= 1000)
	{
		printf("输入错误,请重新输入\n");
		goto b;
	}
	else if (a <= 0)
	{
		printf("输入错误,请重新输入\n");
		goto b;
	}
	else (0 < a && a < 1000);
	{
		printf("%d\n", (int)sqrt(a));
	}
	return 0;
}