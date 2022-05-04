//½«Ò»¸öÊý×éÄæÐòÊä³ö
#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (sz = sz - 1; sz >= 0; sz--)
	{
		printf("%d ", arr[sz]);
	}
	return 0;
}
