//�Ӽ�������10���������������������λ����������ʮλ����ż������������
#include<stdio.h>
int main()
{
	int i = 0, j = 0;
	int arr[10] = { 0 };
	printf("������10��������������\n");
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
		printf("û�з�����������\n");
	return 0;
}
