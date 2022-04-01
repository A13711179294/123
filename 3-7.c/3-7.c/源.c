#include<stdio.h>
#define PI 3.141592
int main()
{
	float r, h;
	scanf_s("%f%f", &r, &h);
	printf("圆周长=%.2f\n", 2 * PI * r);
	printf("圆面积=%.2f\n", PI * r * r);
	printf("圆球表面积=%.2f\n", 4 * PI * r * r);
	printf("圆球体积=%.2f\n", 4 * PI * r * r * r / 3);
	printf("圆柱体积=%.2f\n", PI * r * r * h);
	return 0;
}