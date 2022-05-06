//有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？
#include<stdio.h>
int main()
{
	int i = 1, j = 1, k = 1, sum = 0;
	for (i = 1; i < 5; i++)
	{
		for (j = 1; j < 5; j++)
		{
			for (k = 1; k < 5; k++)
			{
				if (k != i && k != j && i != j)
				{
					printf("%d%d%d ",i, j, k);
					sum++;
				}
			}
		}
	}
	printf("\n");
	printf("个数为：%d", sum);
	return 0;
}
