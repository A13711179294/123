//将二维数组行列元素互换，存到另一个数组中。
#include<stdio.h>
int main()
{
	int arr1[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	int arr2[4][3] = { 0 };
	int i = 0, j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%5d",arr1[i][j]);
		}
		printf("\n");
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			arr2[j][i] = arr1[i][j];
		}
	}
	printf("\n");
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%5d",arr2[i][j]);
		}
		printf("\n");
	}
	return 0;
}