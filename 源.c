#include<stdio.h>
#include<assert.h>
char* my_strcpy(char* dest, const char* src)
{
	assert(src != NULL);
	assert(dest != NULL);
	char* ret = dest;
	while (*dest++ = *src++);
	return ret;
}
int main()
{
	char arr1[20] = "xxxxxxxxxxxx";
	char arr2[] = "hello";
	printf("%s", my_strcpy(arr1, arr2));
	return 0;
}