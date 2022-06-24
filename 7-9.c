#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
void test(char a[])
{
	int b = 0, j = 0, k = 0, v = 0, i = 0;
	while (i < strlen(a))
	{
		if (a[i] >= 65 && a[i] <= 90 || a[i] >= 97 && a[i] <= 122)
			b++;
		else if (a[i] == ' ')
			j++;
		else if (a[i] >= 48 && a[i] <= 57)
			k++;
		else
			v++;
		i++;
	}
  printf("字母个数：%d 空格个数：%d 数字个数：%d 其它字符个数：%d\n", b, j, k, v);
}
int main()
{
	char a[81] = { 0 };
	printf("请输入一行字符\n");
	gets(a);
	test(a);
	return 0;
}
