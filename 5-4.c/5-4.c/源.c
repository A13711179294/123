#include<stdio.h>
int main()
{
	char a;
	int i = 0, j = 0, k = 0, b = 0;
	printf("������һ���ַ�\n");
	while ((a = getchar()) != '\n')
	{
		if (a >= 65 && a <= 90 || a >= 97 && a <= 122)
			i++;
		else if (a == ' ')
			j++;
		else if (a >= 48 && a <= 57)
			k++;
		else
			b++;
	}
	printf("��ĸ������%d �ո������%d ���ָ�����%d �����ַ�������%d\n", i, j, k, b);
	return 0;
}