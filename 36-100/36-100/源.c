//��һ�����ɽ����ı�����룺 ����ĸA��ΪE������ĸa��Ϊe����������ĵ��ĸ���ĸ��W�����A��
//��ĸ����������ת��������ĸ�ַ����䡣����һ���ַ��������Ӧ���롣
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	printf("������\n");
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