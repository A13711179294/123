#include<stdio.h>
#define PI 3.141592
int main()
{
	float r, h;
	scanf_s("%f%f", &r, &h);
	printf("Բ�ܳ�=%.2f\n", 2 * PI * r);
	printf("Բ���=%.2f\n", PI * r * r);
	printf("Բ������=%.2f\n", 4 * PI * r * r);
	printf("Բ�����=%.2f\n", 4 * PI * r * r * r / 3);
	printf("Բ�����=%.2f\n", PI * r * r * h);
	return 0;
}