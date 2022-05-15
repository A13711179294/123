//编程求一个整数任意次方后的最后三位数, 即求X^ Y的最后三位数, X和Y的值由键盘输入
#include<stdio.h>
#include<math.h>
int main()
{
	int x, y;
	printf("请输入两个数\n");
	scanf_s("%d %d", &x, &y);
	int num = pow(x, y);
	num = num % 1000;
	printf("%d", num);
	return 0;
}
