#include<stdio.h>
int main()
{
	int i = 2;
	int t = 1;
	while (i <= 10)
	{
		t = t * i;
		i = i + 1;
	}
	printf("%d\n", t);
	return 0;
}