#include<stdio.h>
void test(int arr[][3])
{
	int i = 0, j = 0, t = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 1 + i; j < 3; j++)
		{
			t= arr[i][j];
			arr[i][j] = arr[j][i];
			arr[j][i] = t;
		}
	}
}
int main()
{
	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int i = 0, j = 0;
	printf("原来的数组\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%5d", arr[i][j]);
		}
		printf("\n");
	}
	test(arr);
	printf("转换后的数组\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%5d", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}