#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	float x;
	printf("������һ��С��1000������\n");
	scanf("%f", &x);
	while (x <= 0 || x >= 1000)
	{
		printf("�����������������\n");
		scanf("%f", &x);
	}
	printf("%d\n", (int)sqrt(x));
	return 0;
}