#include<stdio.h>
void test(int** p2)
{
	**p2 = 20;
}
int main()
{
	int a = 10;
	int* pa = &a;
	int** ppa = &pa;
	test(ppa);
	test(&pa);//传一级指针变量的地址
	int* arr[10] = { 0 };
	test(arr);//传存放一级指针的数组
	printf("%d\n", a);
	return 0;
}
