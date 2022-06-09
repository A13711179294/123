#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void  GetMenory(char** p)
{
	*p = (char*)malloc(100);
}
void Test(void)
{
	char* str = NULL;
	GetMenory(&str);
	strcpy(str, "hellow world");
	printf(str);
	free(str);
	str = NULL;
}
int main()
{
	Test();
	return 0;
}