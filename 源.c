#include<stdio.h>
#include<string.h>
int main()
{
	//字符数组
	char arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n", strlen(arr));//随机值
	printf("%d\n", strlen(arr + 0));//随机值
	//printf("%d\n", strlen(*arr));//err
	//printf("%d\n", strlen(arr[1]));//err
	printf("%d\n", strlen(&arr));//随机值
	printf("%d\n", strlen(&arr + 1));//随机值-6
	printf("%d\n", strlen(&arr[0] + 1));//随机值-1

	char* p="abcdef";
	printf("%d\n", strlen(p));//6
	printf("%d\n", strlen(p + 1));//5
	//printf("%d\n", strlen(*p));//err
	//printf("%d\n", strlen(p[0]));//err
	printf("%d\n", strlen(&p));//随机值
	printf("%d\n", strlen(&p + 1));//随机值
	printf("%d\n", strlen(&p[0] + 1));//5
	return 0;
}