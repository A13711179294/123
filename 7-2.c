#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
void f1(double P,double Q)
{
	printf("此方程的根为x1=%7.2f,x2=%7.2f\n", P + Q, P - Q);
}
void f2(double P, double Q)
{
	printf("此方程的根为x=%7.2f\n",P + Q);
}
void f3()
{
	printf("此方程无实根\n");
}
int main()
{
	double a, b, c, disc, q, p;
	printf("请输入a,b,c的值\n");
	scanf("%lf%lf%lf", &a, &b, &c);
	disc = b * b - 4 * a * c;
	p = -b / (2 * a);
	q = sqrt(disc) / (2 * a);
	if (disc > 0)
		f1(p, q);
	else if (disc == 0)
		f2(p, q);
	else
		f3();
	return 0;
}
