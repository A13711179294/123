//����ĳ��ĳ��ĳ�գ��ж���һ������һ��ĵڼ��죿
//�����������3��5��Ϊ����Ӧ���Ȱ�ǰ�����µļ�������Ȼ���ټ���5�켴����ĵڼ��죬��������������������·ݴ���2��ʱ�迼�Ƕ��һ�졣
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int year = 0, mouth = 0, day = 0, days = 0;
    printf("��������,��,��\n");
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
    printf("%d��%d��%d�յ�%d��", year, mouth, day, days);
    return 0;
}