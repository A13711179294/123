#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int arr[3][3] = { 0 };
	int i = 0, j = 0, max, min,sum1 = 0, sum2 = 0, b = 0, c = 0, count = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	for (i = 0; i < 3; i++)
	{
		max = 0;
		min = 0;
		sum1 = 0;
		sum2 = 0;
		for (j = 0; j < 3; j++)
		{
			if (arr[i][j] > max)
			{
				max = arr[i][j];
				b = j;
			}
		}
		for (j = 0; j < 3; j++)
		{
			if (max == arr[i][j])
				sum1++;
		}
		min = max;
		for (c = 0; c < 3; c++)
		{
			if (arr[c][b] < min)
			{
				min = arr[c][b];
			}
		}
		for (c = 0; c < 3; c++)
		{
			if (min == arr[c][b])
				sum2++;
		}
		if (max == min && sum1 < 2 && sum2 < 2)
		{
			printf("鞍点为arr[%d][%d]=%d ", i, b,arr[i][b]);
			count++;
		}
	}
	if (count == 0)
	{
		printf("此数组无鞍点\n");
	}
	return 0;
}