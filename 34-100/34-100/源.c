//验证哥德巴赫猜想：任何一个不小于6的偶数均可表示为两个奇素数之和。
//例如：6 = 3 + 3，8 = 3 + 5，…，18 = 5 + 13。
//将6~100之间的偶数都表示成两个奇素数之和，打印时一行打印3组。
#include<stdio.h>
#include<math.h>
int is_prime(int n)
{
	int j = 0;
	for (j = 2; j <= sqrt(n); j++)
	{
		if (n % j == 0)
			return 0;
	}
	return 1;
}
int main()
{
	int n, i, j, k = 0;
	for (i = 6; i <= 100; i += 2)
	{
		for (j = 2; j <=i / 2; j++)
		{
			if (j + (i - j) == i && is_prime(j) && is_prime((i - j)))
			{
				printf("%3d=%2d+%2d\t\t", i, j, i - j);
				k++;
				if (k == 3)
				{
					k = 0;
					printf("\n");
				}
			}
		}
	}
	return 0;
}