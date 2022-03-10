#include<stdio.h>
int main()
{
	int a, b, c, d;
	c = 1, d = 0; 
	for (a = 1; a <= 10; a++)
	{
		c = 1;
		for (b = 1; b <= a; b++)
		{
			c *= b;
		}
		d += c;
	}
	printf("%d\n", d);
	return 0;
}