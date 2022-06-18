#include<stdio.h>
int main()
{
	int x = 0, i = 0, a = 0;
	int arr[8] = { 5,21,32,51,76,98,762 };
	printf("ÇëÊäÈëÒ»¸öÊý×Ö\n");
	scanf_s("%d", &x);
	for (i = 0; i < 8; i++)
	{
		if (arr[i] < x && x < arr[i + 1])
		{
			a = arr[i + 1];
			arr[i + 1] = x;
			x = a;
		}
		else
			arr[7] = x;
	}
	for (i = 0; i < 8; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
