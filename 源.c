//��1��2��3��4�����֣�����ɶ��ٸ�������ͬ�����ظ����ֵ���λ�������Ƕ��٣�
#include<stdio.h>
int main()
{
	int i = 1, j = 1, k = 1, sum = 0;
	for (i = 1; i < 5; i++)
	{
		for (j = 1; j < 5; j++)
		{
			for (k = 1; k < 5; k++)
			{
				if (k != i && k != j && i != j)
				{
					printf("%d%d%d ",i, j, k);
					sum++;
				}
			}
		}
	}
	printf("\n");
	printf("����Ϊ��%d", sum);
	return 0;
}