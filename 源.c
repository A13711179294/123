#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
void test(char* pa)
{
	int a = 0, b = 0, j = 0, k = 0, v = 0, i = 0;
	for (i = 0; i < strlen(pa); i++)
	{
		if (*(pa + i) >= 65 && *(pa + i) <= 90)
			a++;
		else if (*(pa + i) >= 97 && *(pa + i) <= 122)
			b++;
		else if (*(pa + i) == ' ')
			j++;
		else if (*(pa + i) >= 48 && *(pa + i) <= 57)
			k++;
		else
			v++;
	}
	printf("��д��ĸ������%d Сд��ĸ������%d �ո������%d ���ָ�����%d �����ַ�������%d\n", a, b, j, k, v);
}
int main()
{
	char arr[81] = { 0 };
	printf("������һ���ַ�\n");
	gets(arr);
	test(arr);
	return 0;
}