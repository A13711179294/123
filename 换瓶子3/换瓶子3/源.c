#include<stdio.h>
int main()
{
	int a = 3, b = 5;
	printf("����ǰ��a=%d,b=%d\n", a, b);
	a = a + b;//8
	b = a - b;//3
	a = a - b;//5
	printf("������a=%d,b=%d\n", a, b);
	return 0;
}