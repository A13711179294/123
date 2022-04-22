//有一个5 * 5的二维数组，要求删除每行上的最大值，将剩余的数据输出。
#include<stdio.h>
int main()
{
	int i, j;
	int arr1[][5] = { 1,2,3,5,4,6,7,8,10,9,11,12,13,15,14,16,17,18,20,19,21,22,23,25,24 };
	int arr2[5] = { 0 };
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
				if (arr2[i] < arr1[i][j])
					arr2[i] = arr1[i][j];
		}
		
	}
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (arr2[i] != arr1[i][j])
				printf("%d ", arr1[i][j]);
			else
				printf("0 ");
		}
		printf("\n");
	}
	return 0;
}