//�Ӽ��������ַ����� ctrl + z ������ͳ����������� 0��9���հ׷��������ַ��ĸ�����
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
	printf("���ָ�����%d �հ׷�������%d �����ַ�������%d\n", i, j, k);
	return 0;
}