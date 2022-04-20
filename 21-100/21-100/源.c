//求5 * 5的二维数组的每行元素的平均值。
#include<stdio.h>
int main()
{
	int i, j, sum;
	int arr[][5] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25 };
	for (i = 0; i < 5; i++)
	{
		sum = 0;
		for (j = 0; j < 5; j++)
		{
			sum += arr[i][j];
		}
		printf("数组第%d行的平均值为%f\n", i + 1, sum / 5.0);
	}
	return 0;
}