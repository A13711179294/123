//输出如下杨辉三角形的前七行。
//1
//1    1
//1    2    1
//1    3    3    1
//1    4    6    4     1
//1    5    10   10    5    1
#include<stdio.h>
int main()
{	
	int i = 0, j = 0;
	int arr[7][7] = { 0 };
	for (i = 0; i < 7; i++)
	{
		arr[i][i] = 1;
		arr[i][0] = 1;
	}
	for (i = 2; i < 7; i++)
	{
		for (j = 1; j < 6; j++)
		{
			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
		}
	}
	for (i = 0; i < 7; i++)
	{
		for (j = 0; j < 7; j++)
		{
			if (arr[i][j] == 0)
				printf(" ");
			else
			printf("%d ", arr[i][j]);
		}	
		printf("\n");
	}
	return 0;
}