// 定义一个3行3列的二维数组,从键盘输入9个数的值。输出其中最大值和最小值及其所在的行列坐标。
#include<stdio.h>
int main()
{
	int arr[3][3] = { 63,21,4566,45,8686,7538,7,56,234 };
	int i, j = 0, max = 0, min = arr[0][0], max_i, max_j, min_i, min_j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (max < arr[i][j])
			{
				max = arr[i][j];
				max_i = i, max_j = j;
			}
			if (min > arr[i][j])
			{
				min = arr[i][j];
				min_i = i, min_j = j;
			}	
		}
	}
	printf("最大值为%d,最大值坐标为arr[%d][%d]，最小值为%d,最小值坐标为arr[%d][%d]", max, max_i, max_j, min, min_i, min_j);
	return 0;
}
