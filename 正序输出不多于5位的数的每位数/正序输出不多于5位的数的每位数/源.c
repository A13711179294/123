#include<stdio.h>
int main()
{
	int a = 0, i = 0;
	int arr[5] = { 0 };
	scanf_s("%d", &a);
	for (i = 0; a > 0; i++)
	{
		arr[i] = a % 10;
		a /= 10;
	}
	while (i > 0)
	{
		i--;
		printf("%d ", arr[i]);
	}
	return 0;
}