#include<stdio.h>
int main()
{
	int a;
	printf("������һ������\n");
	scanf_s("%d",&a);
	if (a % 3 == 0 && a % 5 == 0)
		printf("�������ͬʱ��3��5����\n");
	else
		printf("���������ͬʱ��3��5����\n");
	return 0;
}