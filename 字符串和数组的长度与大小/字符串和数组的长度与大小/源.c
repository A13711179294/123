#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	int a[] = { 1,2,3,4,5,6 };
	char b[] = "123456";
	char c[] = { '1','2','3','4','5','6','\0' };
	char arr1[20] = { 0 };
	char arr2[] = "Hello World!";
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(b));
	printf("%d\n", sizeof(c));
	printf("%d\n", strlen(b));
	printf("%d\n", strlen(c));
	strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}