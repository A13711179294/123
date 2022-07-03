#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void Input(int* pa,int SZ)
{
	int i = 0;
	for (i = 0; i < SZ; i++)
	{
		scanf("%d", pa + i);
	}
}
void Deal(int* pa, int SZ)
{
	int i = 0, j = 0, temp = 0, min = *pa;
	for (i = 0; i < SZ - 1; i++)
	{
		if (min > *(pa + i))//min
		{
			min = *(pa + i);
			j = i;
		}
	}
	temp = *pa;
	*pa = *(pa + j);
	*(pa + j) = temp;//min
	j = 0;
	int max = *pa;
	for (i = 0; i < SZ - 1; i++)
	{
		if (max < *(pa + i))//max
		{
			max = *(pa + i);
			j = i;
		}
	}
	temp = *(pa + SZ - 1);
	*(pa + SZ - 1) = *(pa + j);
	*(pa + j) = temp;//max
}
void Print(int* pa, int SZ)
{
	int i = 0;
	for (i = 0; i < SZ ; i++)
	{
		printf("%d ", *(pa + i));
	}
}
int main()
{
	int arr[10] = { 89,49,32,999,343,133,56,22,0,666 }, * p = arr;
	int sz = sizeof(arr)/sizeof(arr[0]);
	//Input(p,sz);
	Deal(p,sz);
	Print(p,sz);
	return 0;
}