//从键盘输入字符，以 ctrl + z 结束，统计输入的数字 0～9、空白符和其它字符的个数。
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char c;
	int i = 0, j = 0, k = 0;
	while ((c = getchar() )!= EOF)
	{
		if (c >= 48 && c <= 57)
			i++;
		else if (c == ' ')
			j++;
		else
			k++;
	}
	printf("数字个数：%d 空白符个数：%d 其它字符个数：%d\n", i, j, k);
	return 0;
}