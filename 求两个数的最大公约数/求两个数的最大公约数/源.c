#include<stdio.h>
int main()
{
	int n,m;
	printf("��������������:\n");
	scanf_s("%d%d", &n, &m);
	while (n != m)
	{
		if (n > m)
			n = n - m;
		else
			m = m - n;
	}
	printf("���Լ����%d\n",n);
	return 0;
}