#include<stdio.h>
int main()
{
	char str[30] = { 0 };
	int  i = 0;
	gets(str);
	printf("ԭ��:\n");
	puts(str);
	for (i = 0; i < 30; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = 27 - (str[i] - 64) + 64;
		else if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = 27 - (str[i] - 96) + 96;
	}
	printf("����:\n");
	puts(str);
	return 0;
}