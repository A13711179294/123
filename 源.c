//阳阳买苹果, 每个苹果0.8元, 阳阳第一天买两个, 第二天开始每天买前一天的两倍, 
//直到购买的苹果个数为不超过100的最大值。
//编程求阳阳每天平均花多少钱 ?
#include<stdio.h>
int main()
{
	int app = 1, day = 0;
	float mon = 0, mon1 = 0;
	while (app <= 100)
	{
		day++;
		mon1 = mon;
		app = 2 * app;
		mon = 0.8 * app + mon;
	}
	printf("%.2f ", mon1 / (day - 1));
	return 0;
}