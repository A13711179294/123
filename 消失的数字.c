#include<stdio.h>
int missingNumber(int * nums,int numsSize)
{
	int i = 0, x = 0;
	for (i = 0; i <= numsSize; i++)//¸ú[0,n]Òì»ò
	{
		x ^= i;
	}
	for (i = 0; i < numsSize; i++)//ÔÙ¸úÊý×éÒì»ò
	{
		x ^= nums[i];
	}
	return x;
}
int main()
{
	int arr[9] = { 0,1,2,3,4,5,7,8,9 };
	printf("%d",missingNumber(arr, 9));
	return 0;
}
