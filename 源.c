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
	printf("������һ������\n");
	scanf("%d", &x);
	if (is_prime(x) == 1)
	{
		printf("����������\n");
	}
	else
		printf("������������\n");
	return 0;
}