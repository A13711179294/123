#include<stdio.h>
int main()
{
	double x;
	printf("请输入一个数\n");
	scanf_s("%lf", &x);
	while (x < 1)
	{
		printf("y=%f\n", x);
		break;
	}
	while (1 <= x && x < 10)
	{
		printf("y=%f\n", x * 2 - 1);
		break;
	}
	while (x >= 10)
	{
		printf("y=%f\n", x * 3 - 11);
		break;
	}
	return 0;
}