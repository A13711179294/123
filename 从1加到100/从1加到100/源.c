#include<stdio.h>
int main()
{
	int a, b;
	a = 1;
	b = 2;
	while (b <= 100)
	{
		a += b;//a=a+b
		b++;
	}
	printf("%d\n",a);
	return 0;
}