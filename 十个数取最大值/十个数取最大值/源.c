#include<stdio.h>
int main()
{
	int a, b, c, d, e, f, g, h, i, j, max;
	printf("请输入10个数字,中间用逗号隔开。\n");
	scanf_s("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j);
	max = a > b ? a : b;
	max = c > max ? c : max;
	max = b > max ? b : max;
	max = d > max ? d : max;
	max = e > max ? e : max;
	max = f > max ? f : max;
	max = g > max ? g : max;
	max = h > max ? h : max;
	max = i > max ? i : max;
	max = j > max ? j : max;
	printf("最大值=%d\n", max);
	return 0;
}