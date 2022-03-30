#include<stdio.h>
#include<math.h>
int main()
{
	float r = 0.01, d = 300000, p = 6000, m;
	m = log(p / (p - d * r)) / log(1.0 + r);
	printf("%.1f\n", m);
	return 0;
}