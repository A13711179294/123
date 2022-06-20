#include<stdio.h>
int main()
{
	char str[3][81];
	int a = 0, b = 0, c = 0, d = 0, e = 0, i = 0, j = 0;
	for (i = 0; i < 3; i++)
		gets(str[i]);
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 81&&str[i][j]!='\0'; j++)
		{
			if (str[i][j] >= 65 && str[i][j] <= 90)
				a++;
			else if (str[i][j] >= 97 && str[i][j] <= 122)
				b++;
			else if (str[i][j] == ' ')
				c++;
			else if (str[i][j] >= 48 && str[i][j] <= 57)
				d++;
			else
				e++;
		}
	}
	printf("大写字母个数：%d 小写字母个数：%d 空格个数：%d 数字个数：%d 其它字符个数：%d\n", a, b, c, d, e);
	return 0;
}
