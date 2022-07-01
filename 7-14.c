#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
void stu_ave(int score[][5])
{
	int i = 0, j = 0;
	float sum = 0;
	for (i = 0; i < 10; i++)
	{
		sum = 0;
		for (j = 0; j < 5; j++)
		{
			sum += score[i][j];
		}
		printf("第%d个学生的平均分为%f\n", i + 1, sum / 5);
	}
}
void suj_ave(int score[][5])
{
	{
		int i = 0, j = 0;
		float sum = 0;
		for (j = 0; j < 5; j++)
		{
			for (i = 0, sum = 0; i < 10; i++)
			{
				sum += score[i][j];
			}			
			printf("第%d门课的平均数为:%f\n", j + 1, sum / 10);
		}
	}
}
void max_course(int score[][5])
{
	int i, j, max = 0, stu = 0, cour = 0;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (score[i][j] > max)
				max = score[i][j]; stu = i + 1; cour = j + 1;
		}		
	}
	printf("第%d个学生的第%d门课获得了%d的最高分\n", stu, cour, max);
}
void vari_course(int score[][5])
{
	int i = 0, j = 0, sum = 0;
	float average[10], var = 0 , x1 = 0, x2 = 0;
	for (i = 0; i < 10; i++)
	{
		for (j = 0, sum = 0; j < 5; j++)
		{
			sum += score[i][j];
		}		
		average[i] = sum / 5.0;
	}
	for (i = 0; i < 10; i++)
	{
		x1 += pow(average[i], 2);
		x2 += average[i];
	}
	var = x1 / 10 - pow(x2 / 10, 2);
	printf("方差为%f\n", var);
}
int main()
{
	int i = 0, j = 0;
	int score[10][5] = {0};
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 5; j++)
		{
			scanf("%d", &score[i][j]);
		}
	}
	stu_ave(score);
	suj_ave(score);
	max_course(score);
	vari_course(score);
	return 0;
}
