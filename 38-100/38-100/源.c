//����4 * 3�Ķ�ά���飬�ֱ�����С����м�����������֮�͡�
#include<stdio.h>
int main()
{
	int i = 0, j = 0;
	int arr[5][4] = { 0 };
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf_s("%d", &arr[i][j]);
		}
	}
	printf("����ǰ������\n");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
		{
			arr[4][3] += arr[i][j];
			arr[i][3] += arr[i][j];
			arr[4][j] += arr[i][j];
		}
	}
	printf("����������\n");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}