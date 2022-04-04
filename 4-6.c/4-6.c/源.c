#include<stdio.h>
int main()
{
	double x;
	printf("请输入一个数\n");
	scanf_s("%lf", &x);
	if (x < 1)
	{
		printf("y=%f\n", x);	
	}
	else if (1 <= x && x < 10)
	{
		printf("y=%f\n", x * 2 - 1);
	}
	else
	{
		printf("y=%f\n", x * 3 - 11);
	}
	return 0;
}