#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	float a = 0, b;
	int arr[4] = { 0 }, i;
	printf("�������ĸ���\n");
	for (i = 0; i < 4; i++)
	{
		scanf("%d", &arr[i]);
		a += arr[i];
	}
	b = a / 4.0;
	printf("��Ϊ��%f ƽ��ֵΪ��%.2f", a, b);
	return 0;
}