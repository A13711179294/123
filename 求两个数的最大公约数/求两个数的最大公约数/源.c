#include<stdio.h>
int main()
{
	int n,m;
	printf("请输入两个数字:\n");
	scanf_s("%d%d", &n, &m);
	while (n != m)
	{
		if (n > m)
			n = n - m;
		else
			m = m - n;
	}
	printf("最大公约数：%d\n",n);
	return 0;
}