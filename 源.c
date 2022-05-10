#include<stdio.h>
#include<math.h>
int main()
{
	int i = 0, j = 1;
	double sum = 0;
	for (i = 1; fabs(1.0 / i) > 1e-6; i += 2)
	{
		sum += pow(-1, j + 1) * 1.0 / i;
		j++;
	}
	printf("%lf", sum * 4);
	return 0;
}