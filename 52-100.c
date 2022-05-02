//有一分数序列：2 / 1，3 / 2，5 / 3，8 / 5，13 / 8，21 / 13...求出这个数列的前20项之和。
#include<stdio.h>
int main()
{
	int i = 1;
	float j = 2, k = 1, a = 0, sum = 0;
	for (i = 1; i <= 20; i++)
	{
		sum += j / k;
		a = k;
		k = j;
		j += a;
	}
	printf("%f", sum);
	return 0;
}
