#include<stdio.h>
int main()
{
	int a[5] = { 1,2,3,6,5 };
	int b[] = { 4,2,3,4,1 };
	int c[] = { 9,2,8,4,5 };
	int* arr[3] = { a,b,c };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			//printf("%d ", * (arr[i] + j));
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}