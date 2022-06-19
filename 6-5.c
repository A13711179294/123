#include<stdio.h>
int main()
{
	int arr[] = { 8,6,5,4,1};
	int i, j, k;
	for (i = 1; i <= 4; i++)
	{
		for (j = 0; j < 5 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				k = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = k;
			}
		}
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}