#include<stdio.h>
int main()
{
	int i = 1;
	float j = 2, k = 1, a = 0, sum = 0;
	for (i = 1; i <= 20; i++)
	{
		sum += j / k;
		a = k;
		k = j;
		j += a;
	}
	printf("%f", sum);
	return 0;
}