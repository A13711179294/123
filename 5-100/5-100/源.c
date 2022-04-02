#include<stdio.h>
int main()
{
	float x = 0;
	int i, n;
	printf("ÇëÊäÈënµÄÖµ\n");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		x =x+ (1.0 / i);
	}
	printf("%f", x);
	return 0;
}