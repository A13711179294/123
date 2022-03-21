#include<stdio.h>
void Swap(int* pa,int* pb)
{
	int z = 0;
	z = *pa;
	*pa = *pb;
	*pb = z; 
}
int main()
{
	int a, b;
	a = 1, b = 2;
	printf("a=%d b=%d\n", a, b);//»»Ç°
	Swap(&a, &b);
	printf("a=%d b=%d\n", a, b);//»»ºó
	return 0;
}