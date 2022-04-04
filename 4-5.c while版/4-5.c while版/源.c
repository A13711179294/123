#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	float x;
	printf("请输入一个小于1000的正数\n");
	scanf("%f", &x);
	while (x <= 0 || x >= 1000)
	{
		printf("输入错误，请重新输入\n");
		scanf("%f", &x);
	}
	printf("%d\n", (int)sqrt(x));
	return 0;
}