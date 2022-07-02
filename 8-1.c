#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void cmp(int* x, int* y)
{
	int temp = 0;
	if (*x > *y)
	{
		temp= *y;
		*y = *x;
		*x = temp;
	}
}
int main()
{
	int a = 0, b = 0, c = 0;
	scanf("%d,%d,%d", &a, &b, &c);
	cmp(&a, &b);
	cmp(&a, &c);
	cmp(&b, &c);
	printf("%d %d %d", a, b, c);
	return 0;
}
