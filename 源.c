#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
void menu()
{
	printf("***********************\n");
	printf("**** 1.add   2.sub ****\n");
	printf("**** 3.mul   3.div ****\n");
	printf("****    0.exit     ****\n");
	printf("***********************\n");
}
int main()
{
	int input = 0;
	do
	{
		menu();
		int(*pfArr[5])(int, int) = { NULL,Add,Sub,Mul,Div };//ת�Ʊ�
		int x = 0;
		int y = 0;
		int ret = 0;	   
		printf("��ѡ��:>");
		scanf("%d", &input);
		if (input >= 1 && input <= 4)
		{
			printf("������2��������:>");
			scanf("%d %d", &x, &y);
			ret = (pfArr[input])(x, y);
			printf("ret=%d\n", ret);
		}
		else if (input == 0)
		{
			printf("�˳�����\n");
			break;
		}
		else
		{
			printf("ѡ�����\n");
		}
	} while (input);
	return 0;
}