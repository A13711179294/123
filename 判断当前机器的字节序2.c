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
	//返回1 就是小端
	//返回0 就是大端
}
int main()
{
	printf("%d",check_sys());
	return 0;
}
