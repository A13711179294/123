//按一定规律将电文变成密码： 将字母A变为E、将字母a变为e，即变成其后的第四个字母，W将变成A。
//字母按上述规律转换，非字母字符不变。输入一行字符，输出相应密码。
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	printf("请输入\n");
	char x;
	while ((x = getchar()) != '\n')
	{
		if (x >= 65 && x < 87 || x >= 97 && x < 119)
		{
			printf("%c", x + 4);
		}
		else
			printf("%c", x - 22);
	}
		return 0;
}