#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
        int max;
        int a, b, c;
        printf("请输入三个数字:\n");
        scanf("%d%d%d", &a, &b, &c);
        max = a > b ? a : b;
        max = c > max ? c : max;
        printf("%d",max);
        return 0;
}