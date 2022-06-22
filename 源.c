#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int is_prime(int n)
{
	int i = 0;
	for (i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			return 0;
	}
	return 1;
}
int main()
{
	int x = 0;
	printf("请输入一个整数\n");
	scanf("%d", &x);
	if (is_prime(x) == 1)
	{
		printf("该数是素数\n");
	}
	else
		printf("该数不是素数\n");
	return 0;
}