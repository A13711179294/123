#include<stdio.h>
int main()
{
	float x;
	printf("��������ķ���\n");
	scanf_s("%f", &x);
	if (90 <= x && x <= 100)
		printf("��ĳɼ��ȼ�ΪA");
	else if (80 <= x && x <= 89)
		printf("��ĳɼ��ȼ�ΪB");
	else if (70 <= x && x <= 79)
		printf("��ĳɼ��ȼ�ΪC");
	else if (60 <= x && x <= 69)
		printf("��ĳɼ��ȼ�ΪD");
	else if (60 > x && x > 0)
		printf("��ĳɼ��ȼ�ΪE");
	else
		printf("�����������������");
	return 0;
}