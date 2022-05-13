//键盘输入一个大写字母，要求改用小写字母输出，用puthchar和getchar函数编程。
#include<stdio.h>
int main()
{
	char let = 0;
	while ((let=getchar() )!= '\n')
	{
		putchar(let+32);
	}
	return 0;
}
