#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
double f(double N, int X)
{
	float P;
	if (N == 0)
		P = 1;
	else if (N == 1)
		P = X;
	else
		P = ((2 * N - 1) * X - f(N - 1, X) - (N - 1) * f(N - 2, X)) / N;
	return P;
}
int main()
{
	int n = 0;
	double x = 0;
	printf("������n��x��ֵ\n");
	scanf("%d %lf", &n, &x);
	printf("%d�����õ¶���ʽ��ֵΪ%f\n", n, f(n, x));
	return 0;
}