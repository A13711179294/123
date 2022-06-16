#include<stdio.h>
int main()
{
	int  i, j, b;
	long long sum = 0, x = 1;
	for (i = 1; i <= 20; i++)
	{
		x *= i;
		sum += x;
	}
	printf("%lld", sum);
	return 0;
}