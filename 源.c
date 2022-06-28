#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
float f(int A, int B, int C, int D)
{   
	float x = 1, x1 = 0;
	while (fabs(x - x1) >= 1e-6)
	{
	x1 = x;
	x = x - (A * pow(x, 3) + B * pow(x, 2) + C * x + D)/ (3 * A * pow(x, 2) + 2 * B * x + C);
    } 
	return x1;
}
int main()
{
	int a, b, c, d;
	printf("请输入a,b,c,d的值\n");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	printf("该方程在x附近的一个实根为%f\n", f(a, b, c, d));
	return 0;
}//Xn + 1 = Xn - f(Xn) / f ' (Xn);