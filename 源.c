//�����һ����������η���������λ��, ����X^ Y�������λ��, X��Y��ֵ�ɼ�������
#include<stdio.h>
#include<math.h>
int main()
{
	int x, y;
	printf("������������\n");
	scanf_s("%d %d", &x, &y);
	int num = pow(x, y);
	num = num % 1000;
	printf("%d", num);
	return 0;
}