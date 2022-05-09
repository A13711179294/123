//从一个三行四列的整型二维数组中查找第一个出现的负数。
#include<stdio.h>
int main()
{
	int arr[3][4] = { 2,4,5,6,7,-8,9,-10,11,12,-13,14 };
	int i = 0, j = 0, flag = 0;
	for (i = 0; i < 3 && flag == 0; i++)
	{
		for (j = 0; j < 4 && flag == 0; j++)
		{
			if (arr[i][j] < 0)
			{
				printf("%d\n", arr[i][j]);
				flag = 1;
			}				
		}
	}
	if (flag == 0) 
	{
		printf("此数组无负数\n");
	}
	return 0;
}
