#include<stdio.h>
int main()
{
	int I;
	float a;
	printf("请输入当月利润");
	scanf_s("%d", &I);
	switch (I / 100000)
	{
	case 0:
		a = I * 0.1;
		printf("应发奖金总数：%.2f", a);
		break;
	case 1:
		a = 100000 * 0.1;
		printf("应发奖金总数：%.2f", a);
		break;
	case 2:
		a = 100000 * 0.1 + (I - 100000) * 0.075;
		printf("应发奖金总数：%.2f", a);
		break;
	case 3:
	case 4:
		a = 100000 * 0.1 + 100000 * 0.075 + (I - 200000) * 0.05;
		printf("应发奖金总数：%.2f", a);
		break;
	case 5:
	case 6:
		a = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + (I - 400000) * 0.03;
		printf("应发奖金总数：%.2f", a);
		break;
	case 7:
	case 8:
	case 9:
	case 10:
		a = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + 200000 * 0.03 + (I - 600000) * 0.015;
		printf("应发奖金总数：%.2f", a);
		break;
	default:
		a = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + 200000 * 0.03 + 200000 * 0.015 + (I - 1000000) * 0.01;
		printf("应发奖金总数：%.2f", a);
		break;
	}
	return 0;
}