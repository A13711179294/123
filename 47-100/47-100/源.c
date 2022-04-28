//输入某年某月某日，判断这一天是这一年的第几天？
//程序分析：以3月5日为例，应该先把前两个月的加起来，然后再加上5天即本年的第几天，特殊情况，闰年且输入月份大于2月时需考虑多加一天。
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int year = 0, mouth = 0, day = 0, days = 0;
    printf("请输入年,月,日\n");
    scanf("%d%d%d", &year, &mouth, &day);
    switch (mouth)
    {
    case 1:days = 0; break;
    case 2:days = 31; break;
    case 3:days = 59; break;
    case 4:days = 90; break;
    case 5:days = 120; break;
    case 6:days = 151; break;
    case 7:days = 181; break;
    case 8:days = 212; break;
    case 9:days = 243; break;
    case 10:days = 273; break;
    case 11:days = 304; break;
    case 12:days = 334; break;
    }
    days += day;
    if (mouth > 2 && year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        days++;
    printf("%d年%d月%d日第%d天", year, mouth, day, days);
    return 0;
}