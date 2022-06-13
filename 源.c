#include<stdio.h>
int main()
{
	int arr[10] = { 5,4,3,2,1,10,9,8,7,6 };
	int i = 0, j = 0, min = arr[0];
	for (i = 0; i < 10; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
			j = i;
		}
	}
	printf("位置为arr[%d] 值为%d\n", j, min);
	return 0;
}