#include<stdio.h>
int main()
{
	//整型数组
	int a[] = { 1,2,3,4 };
	printf("%d\n", sizeof(a));//16
	printf("%d\n", sizeof(a+0));//4/8 a+0是第一个元素的地址，sizeof(a+0)计算的是地址大小
	printf("%d\n", sizeof(*a));//4 *a是数组的第一个元素，sizeof(*a)计算的是第一个元素的大小
	printf("%d\n", sizeof(a+1));//4/8 a+1是第二个元素地址，sizeof(a+1)计算的是地址的大小
	printf("%d\n", sizeof(a[1]));//4 计算的是第二个元素的大小

	printf("%d\n", sizeof(&a));//4/8 计算的是地址的大小
	printf("%d\n", sizeof(*&a));//16 计算数组的大小
	//int(*p)[4]=&a
	printf("%d\n", sizeof(&a + 1));//4/8 数组后面的空间的地址
	printf("%d\n", sizeof(&a[0]));//4/8
	printf("%d\n", sizeof(&a[0] + 1));//4/8

	//字符数组
	char arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n", sizeof(arr));//6
	printf("%d\n", sizeof(arr + 0));//4/8
	printf("%d\n", sizeof(*arr));//1
	printf("%d\n", sizeof(arr[1]));//1
	printf("%d\n", sizeof(&arr));//4/8
	printf("%d\n", sizeof(&arr+1));//4/8
	printf("%d\n", sizeof(&arr[0] + 1));//4/8

	char arr[] = "abcdef";
	printf("%d\n", sizeof(arr));//4/8
	printf("%d\n", sizeof(arr + 0));//4/8
	printf("%d\n", sizeof(*arr));//1
	printf("%d\n", sizeof(arr[1]));//1
	printf("%d\n", sizeof(&arr));//4/8
	printf("%d\n", sizeof(&arr + 1));//4/8
	printf("%d\n", sizeof(&arr[0] + 1));//4/8
	return 0;
}
