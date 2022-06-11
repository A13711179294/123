#include<stdio.h>
int my_strcmp(const char* s1, const char* s2)
{
	while (*s1==*s2)
	{
		if (*s1 == '\0')
		{
			return 0;
		}
		s1++;
		s2++;
	}
	if (*s1 > *s2)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}
int main()
{
	char* p = "abcdef";
	char* q = "abqb";
	int ret = my_strcmp(p,q);
	if (ret > 0)
	{
		printf("p > q\n");
	}
	else if (ret < 0)
	{
		printf("p < q\n");
	}
	else
	{
		printf("p == q\n");
	}
	return 0;
}