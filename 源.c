#include<stdio.h>
int main()
{
	int a[3][4] = { 0 };

	printf("%d\n", sizeof(a));//48
	printf("%d\n", sizeof(a[0][0]));//4
	printf("%d\n", sizeof(a[0]));//16
	printf("%d\n", sizeof(a[0] + 1));//4 第一行第二个元素的地址
	printf("%d\n", sizeof(*a[0] + 1));//4
	printf("%d\n", sizeof(a + 1));//4 第二行的地址
	printf("%d\n", sizeof(*(a + 1)));//16 表示计算第二行的大小
	printf("%d\n", sizeof(&a[0] + 1));//4
	printf("%d\n", sizeof(*(&a[0] + 1)));//16
	printf("%d\n", sizeof(*a));//16
	printf("%d\n", sizeof(a[3]));//16
	return 0; 
}