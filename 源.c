#include<stdio.h>
int main()
{
	int i = 0, j = 0, k = 0;
	int arr[10] = { 984,42,590,234,51,4525,747,49,130,88 };
	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			if (arr[i] > arr[j])
			{
				k = arr[j];
				arr[j] = arr[i];
				arr[i] = k;
			}
		}
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}