#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int add(int a, int n)
{
	int i = 1, sn = 0, tn = 0;
	while (i <= n)
	{
		tn = tn * 10 + a;
		sn = sn + tn;
		i++;
	}
	return sn;
}
int main()
{
	int a, n;
	printf("a,n=:");
	scanf("%d,%d", &a, &n);
	printf("a+aa+aaa+...=%d",add(a,n));
	return 0;
}
