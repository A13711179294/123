#include<stdio.h>
int main()
{
	float f; //fΪ���϶�
	float c; //cΪ���϶�
	printf("�����뻪�϶ȣ�");
		scanf_s("%f", &f);
		c = (5 / 9) * (f - 32);
		printf("f=%.1fF��\nc=%.1fC��\n", f, c);
		return 0;
}