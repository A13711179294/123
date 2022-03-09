#include<stdio.h>
int main()
{
	float f; //f为华氏度
	float c; //c为摄氏度
	printf("请输入华氏度：");
		scanf_s("%f", &f);
		c = (5 / 9) * (f - 32);
		printf("f=%.1fF°\nc=%.1fC°\n", f, c);
		return 0;
}