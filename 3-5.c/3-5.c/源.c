#include<stdio.h>
int main()
{
	int a, b;
	float x, y;
	char c1, c2;
	printf("请输入c1和c2\n");
	scanf_s("%c,%c", &c1,1, &c2,1);
	printf("请输入a和b\n");
	scanf_s("%d,%d", &a, &b);
	printf("请输入x和y\n");
	scanf_s("%f,%f", &x, &y);
	printf("a=%d,b=%d\n", a, b);
	printf("x=%f,y=%e\n", x, y);
	printf("c1=%c,c2=%c\n", c1, c2);
	printf("ASCII:c1=%d,ASCII:c2=%d\n", c1, c2);
	printf("x+y=%f\n", x + y);
	printf("a+b=%d\n", a + b);
	printf("a/b=%f\n", (float)a/b);
	return 0;
}