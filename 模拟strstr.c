#include<stdio.h>
#include<assert.h>
char* my_strstr(const char* str1, char* str2)
{
	assert(str1 && str2);
	const char* s1 = str1;
	const char* s2 = str2;
	const char* cp = str1;
	if (*str2 == '\0')
	{
		return (char*)str1;
	}
	while (*cp)
	{
		s1 = cp;
		s2 = str2;
		while (*s1 && *s2 && (*s1 == *s2))
		{
			s1++;
			s2++; 
		}
		if (*s2 == '\0')
		{
			return (char*)cp;
		}
		cp++;
	}
	return NULL;
}
int main()
{
	char arr1[] = "abcdefgabcdef";
	char arr2[] = "bcdq";
	char* ret = my_strstr(arr1, arr2);
	if (ret == NULL)
	{
		printf("Ã»ÕÒµ½\n");
	}
	else
	{
		printf("ÕÒµ½ÁË\n");
	}
	return 0;
}
