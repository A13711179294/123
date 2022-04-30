//一球从100米高度自由落下，每次落地后反跳回原高度的一半；
//再落下，求它在第10次落地时，共经过多少米？第10次反弹多高？
#include<stdio.h>
int main()
{
	int i = 0;
	float h = 100, s = 0;
	for (i = 1; i <= 10; i++)
	{
		s = 3 * h / 2 + s;
		h = h / 2;
	}
	printf("共经过%f米,第10次反弹%f米\n", s - h, h);
	return 0;
}