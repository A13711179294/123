#include<stdio.h>
#include<math.h>
int main()
{
	double a;
	printf("������һ��С��1000������\n");
b:
	scanf_s("%lf", &a);
	if (a >= 1000)
	{
		printf("�������,����������\n");
		goto b;
	}
	else if (a <= 0)
	{
		printf("�������,����������\n");
		goto b;
	}
	else (0 < a && a < 1000);
	{
		printf("%d\n", (int)sqrt(a));
	}
	return 0;
}