//读入4 * 3的二维数组，分别求各行、各列及表中所有数之和。
#include<stdio.h>
int main()
{
	int i = 0, j = 0;
	int arr[5][4] = { 0 };
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf_s("%d", &arr[i][j]);
		}
	}
	printf("计算前的数组\n");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
		{
			arr[4][3] += arr[i][j];
			arr[i][3] += arr[i][j];
			arr[4][j] += arr[i][j];
		}
	}
	printf("计算后的数组\n");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}