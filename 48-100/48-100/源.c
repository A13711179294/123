//有1、2、3、4、0  五个数字，能组成多少个互不相同且无重复数字的三位数？分别是多少？
#include<stdio.h>
int main()
{
	int a = 1, b = 0, c = 0, sum = 0;
	for (a = 1; a < 5; a++)
	{
		for (b = 0; b < 5; b++)
		{
			for (c = 0; c < 5; c++)
			{
				if (a != b && a != c && b != c)
				{
					printf("%d%d%d ", a, b, c);
					sum++;
				}
			}
		}
	}
	printf("\n");
	printf("总数为：%d",sum);
	return 0;
}