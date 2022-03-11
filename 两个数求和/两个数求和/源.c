# include <stdio.h>
int main()
{
	int a, b;
	printf("请输入第一个整数：");
	scanf_s("%d", &a);
	printf("请输入第二个整数：");
	scanf_s("%d", &b);
	printf("结果%d + %d =%d", a, b, a + b);
	return 0;
