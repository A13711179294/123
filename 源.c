//一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？
#include<stdio.h>

int main()
{
	int i, j, k = 1;
	for (i = 1; i < 1000; i++)
	{
		for (j = 1; j < 1000; j++)
		{
			if (i + 100 == j * j)
			{
				for (k = j; k < 1000; k++)
				{
					if (i + 168 == k * k)
					{
						printf("%d\n", i);
					}
				}
			}
		}
	}
	return 0;
}