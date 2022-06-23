#include<stdio.h>
#include<string.h>
void test(char a[])
{
	int i = 0, j = strlen(a) - 1;
	char b;
	while (i < j)
	{
		b = a[i];
		a[i] = a[j];
		a[j] = b;
		i++;
		j--;
	}
}
int main()
{
	char a[81];
	test(gets(a));
	printf("%s", a);
	return 0;
}
