#include<stdio.h>
int main()
{
	int a, b, c, max, mid, min;
	printf("�������������֣��м��ÿո����:\n");
	scanf_s("%d%d%d", &a, &b, &c);
	max = a > b ? a : b;
	max = c > max ? c : max;
	min = a < b ? a : b;
	min = c < min ? c: min;
	mid = a<max && a>min ? a : b;
	mid = b<max && b>min ? b : c;
	mid = c<max && c>min ? c : mid;
		printf("��С˳��%d %d %d\n", max, mid, min);
	return 0;
}