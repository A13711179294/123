#include<stdio.h>
int main()
{
	int a, n, i, b ,c;
	printf("������һ������a��λ��n\n");
	scanf_s("%d %d", &a, &n);
	b = 0;
	c = a;
	for (i = 1; i < n; i++)
	{
			a = a * 10 + c;
			b = a + b;
	}
	printf("%d", b + c);
	return 0;
}