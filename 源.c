#include<stdio.h>
struct Test
{
	int Num;
	char* pcname;
	short sDate;
	char cha[2];
	short sBa[4];
}*p;
int main()
{
	int a[5] = { 1,2,3,4,5 };
	int* ptr = (int*)(&a + 1);
	printf("%d,%d", *(a + 1), *(ptr - 1));

	//假设p的值为0x100000,Test类型的变量大小是20个字节
	printf("%p\n", p + 0x1);//0x100014
	printf("%p\n", (unsigned long)p + 0x1);//0x100001
	printf("%p\n", (unsigned int*)p + 0x1);//0x100004

	int b[4] = { 1,2,3,4 };
	int* ptr1 = (int*)(&a + 1);
	int* ptr2 = (int*)((int)a + 1);
	printf("%x,%x", ptr1[-1], *ptr2);// ptr1[-1]等于*(ptr1+(-1)) *(ptr1-1)
	return 0;
}