#include<stdio.h>
#include<string.h>
int main()
{
	char arr[] = "abc%defgh.ijk";
	char* p = "%.";
	char tmp[20] = { 0 };
	char* ret = NULL;
	for (ret = strtok(tmp, p); ret != NULL;ret=strtok(NULL,p))
	{
		printf("%s\n", ret);
	}
	return 0;
}