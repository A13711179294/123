//��������һ����д��ĸ��Ҫ�����Сд��ĸ�������puthchar��getchar������̡�
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