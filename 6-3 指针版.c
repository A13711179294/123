#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void bubble_sort(int* p, int SZ)
{
	int i = 0, j = 0, temp = 0;
	for (i = 0; i < SZ - 1; i++)
	{
		for (j = 0; j < SZ - i - 1; j++)
		{
			if (*(p + j) > *(p + j + 1))
			{
				temp = *(p + j);
				*(p + j) = *(p + j + 1);
				*(p + j + 1) = temp;
			}
		}
	}
}
int main()
{
	int i = 0;
	int arr[10] = { 0 }, * p = arr;
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("input 10 numbers :");
	for (i = 0; i < 10; i++)
		scanf("%d", p + i);
	printf("\n");
	bubble_sort(p, sz);
	printf("the sorted nubers :");
	for (i = 0; i < 10; i++)
		printf("%d ", *(p + i));
	printf("\n");
	return 0;
}
