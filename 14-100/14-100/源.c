//求正整数N以内的所有勾股数
#include<stdio.h>
#include<math.h>
int main()
{
	int n = 0, i, j, k;
	printf("请输入一个数\n");
	scanf_s("%d", &n);
	for (i = 1; i < n; i++)
	{
		for (j = i; j < n; j++)
		{
			for (k = 1; k < n; k++)
			{
				if (pow(i, 2) + pow(j, 2) == pow(k, 2) && i + j > k && i - j < k)
					printf("%d %d %d\n", i, j, k);
			}
		}
	}
	return 0;
}