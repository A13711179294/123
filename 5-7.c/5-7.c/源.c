#include<stdio.h>
#include<math.h>
int main()
{
	double i = 1, a = 0, b = 0, c = 0;
	while (i <= 100)
	{
		a += i;
		if (i <= 50)
		{
			b += pow(i, 2);
			if (i <= 20)
			{
				c += (1 / i);
			}
		}
		i++;
	}
	printf("%lf", a + b + c);
	return 0;
}