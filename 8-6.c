#include<stdio.h>
#include<assert.h>
size_t my_strlen(const char* str)
{
	assert(str != NULL);
	size_t count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char arr[81] = { 0 };
	gets(arr);
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}
