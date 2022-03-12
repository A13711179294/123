#include<stdio.h>
int main()
{
	int a;
	printf("请输入一个数字\n");
	scanf_s("%d",&a);
	if (a % 3 == 0 && a % 5 == 0)
		printf("这个数能同时被3或5整除\n");
	else
		printf("这个数不能同时被3或5整除\n");
	return 0;
}