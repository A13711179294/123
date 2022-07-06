#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void cut_str(char* str1, char* str2, int M)
{
	int i = 0;
	while (*(str1 + M - 1) != '\0')
	{
		*(str2 + i) = *(str1 + M - 1);
		M++;
		i++;
	}
}
int main()
{
	int m = 0;
	char ch1[81] = { 0 };
	char ch2[81] = { 0 };
	gets(ch1);
	printf("ÇëÊäÈëm\n");
	scanf("%d", &m);
	if (strlen(ch1) >= m)
	{
		cut_str(ch1, ch2, m);
	}
	else
		printf("ÊäÈë´íÎó\n");
	puts(ch2);
	return 0;
}
