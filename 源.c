//������ƻ��, ÿ��ƻ��0.8Ԫ, ������һ��������, �ڶ��쿪ʼÿ����ǰһ�������, 
//ֱ�������ƻ������Ϊ������100�����ֵ��
//���������ÿ��ƽ��������Ǯ ?
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