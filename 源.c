//��һ���������е����Ͷ�ά�����в��ҵ�һ�����ֵĸ�����
#include<stdio.h>
int main()
{
	int arr[3][4] = { 412,64,1131,-676,20,76,90,-8,231,-13123,545,22 };
	int i = 0, j = 0, flag = 1;
	for (i = 0; i < 3 && flag == 1; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (arr[i][j] < 0)
			{
				printf("�������һ������Ϊ%d\n", arr[i][j]);
				flag = 0;
				break;
			}
		}
	}
	if (flag == 1)
	{
		printf("�������޸���\n");
	}
	return 0;
}