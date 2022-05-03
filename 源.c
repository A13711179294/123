//对10个数进行排序
#include<stdio.h>
int main()
{
	int i, j, k, n;
	int arr[10] = { 0 };
	printf("请输入10个数\n");
	for (i = 0; i < 10; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	for (i = 1; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (arr[j] < arr[j + 1] && j + 1 < 10)
			{
				n = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = n;
			}
		}
	}
	for (k = 0; k < 10; k++)
	{
		printf("%d ", arr[k]);
	}
	return 0;
}