//从一个三行四列的整型二维数组中查找第一个出现的负数。
#include<stdio.h>
int main()
{
	int arr[3][4] = { 412,64,1131,-676,20,76,90,-8,231,-13123,545,22 };
	int i = 0, j = 0, flag = 1;
	for (i = 0; i < 3 && flag == 1; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (arr[i][j] < 0)
			{
				printf("该数组第一个负数为%d\n", arr[i][j]);
				flag = 0;
				break;
			}
		}
	}
	if (flag == 1)
	{
		printf("该数组无负数\n");
	}
	return 0;
}