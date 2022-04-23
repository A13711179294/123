//从键盘输入10个正负相间的整数，输出个位数是奇数、十位数是偶数的所有数。
#include<stdio.h>
int main()
{
	int i = 0, j = 0;
	int arr[10] = { 0 };
	printf("请输入10个正负相间的整数\n");
	for (i = 0; i < 10; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	for (i = 0; i < 10; i++)
	{
		if (arr[i] % 2 != 0 && arr[i] / 10 % 2 == 0 && arr[i] != 1 && arr[i] != -1)
		{
			printf("%d ", arr[i]);
			j++;
		}
	}
	if (j == 0)
		printf("没有符合条件的数\n");
	return 0;
}
