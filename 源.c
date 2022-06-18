#include<stdio.h>
void sort_array(int* pa, int SZ, int num)
{
	int i = 0, temp = 0;
	for (i = 0; i < SZ; i++)
	{
		if (*(pa + i) <= num && num <= *(pa + i + 1))
		{
			temp = *(pa + i + 1);
			*(pa + i + 1) = num;
			num = temp;
		}
		else
			*(pa + SZ - 1) = num;
	}
}
int main()
{
	int arr[10] = { 5,21,32,51,76,87,102,357,6655 };
	int x = 0, i = 0, * p = arr;
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("请输入一个数字\n");
	scanf_s("%d", &x);
	sort_array(p, sz, x);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *(arr + i));
	}
	return 0;
}