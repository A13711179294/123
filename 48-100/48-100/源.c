//��1��2��3��4��0  ������֣�����ɶ��ٸ�������ͬ�����ظ����ֵ���λ�����ֱ��Ƕ��٣�
#include<stdio.h>
int main()
{
	int a = 1, b = 0, c = 0, sum = 0;
	for (a = 1; a < 5; a++)
	{
		for (b = 0; b < 5; b++)
		{
			for (c = 0; c < 5; c++)
			{
				if (a != b && a != c && b != c)
				{
					printf("%d%d%d ", a, b, c);
					sum++;
				}
			}
		}
	}
	printf("\n");
	printf("����Ϊ��%d",sum);
	return 0;
}