#include<stdio.h>
int main()
{
	int x;
	printf("��������ĳɼ�\n");
	scanf_s("%d", &x);
	switch (x/10)
	{
	case 10:
	case 9:
		printf("��ĳɼ��ȼ���'A'");
		break;
	case 8:
		printf("��ĳɼ��ȼ���'B'");
		break;
	case 7:
		printf("��ĳɼ��ȼ���'C'");
		break;
	case 6:
		printf("��ĳɼ��ȼ���'D'");
		break;
	case 5:
	case 4:
	case 3:
	case 2:
	case 1:
	case 0:
		printf("��ĳɼ��ȼ���'E'");
		break;
	default: 
		printf("�����������������");
	}
	return 0;
}