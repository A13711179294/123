#include<stdio.h>
int main()
{
	//��������
	int a[] = { 1,2,3,4 };
	printf("%d\n", sizeof(a));//16
	printf("%d\n", sizeof(a+0));//4/8 a+0�ǵ�һ��Ԫ�صĵ�ַ��sizeof(a+0)������ǵ�ַ��С
	printf("%d\n", sizeof(*a));//4 *a������ĵ�һ��Ԫ�أ�sizeof(*a)������ǵ�һ��Ԫ�صĴ�С
	printf("%d\n", sizeof(a+1));//4/8 a+1�ǵڶ���Ԫ�ص�ַ��sizeof(a+1)������ǵ�ַ�Ĵ�С
	printf("%d\n", sizeof(a[1]));//4 ������ǵڶ���Ԫ�صĴ�С

	printf("%d\n", sizeof(&a));//4/8 ������ǵ�ַ�Ĵ�С
	printf("%d\n", sizeof(*&a));//16 ��������Ĵ�С
	//int(*p)[4]=&a
	printf("%d\n", sizeof(&a + 1));//4/8 �������Ŀռ�ĵ�ַ
	printf("%d\n", sizeof(&a[0]));//4/8
	printf("%d\n", sizeof(&a[0] + 1));//4/8

	//�ַ�����
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