#include<stdio.h>
int check_sys()
{
	union U
	{
		char c;
		int i;
	}u;
	u.i = 1;
	return u.c;
	//����1 ����С��
	//����0 ���Ǵ��
}
int main()
{
	printf("%d",check_sys());
	return 0;
}