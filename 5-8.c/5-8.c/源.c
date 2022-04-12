#include<stdio.h>
#include<math.h>
int main()
{
	int n = 100;
	while (n < 1000)
	{
		if (pow(n / 100, 3) + pow(n / 10 % 10, 3) + pow(n % 10, 3) == n)
		{
			printf("%d ", n);
		}
		n++;
	}
	return 0;
}