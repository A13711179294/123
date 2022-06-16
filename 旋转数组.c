#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
void Reverse(int* nums, int left, int right)
{
	while (left < right)
	{
		int tmp = nums[left];
		nums[left] = nums[right];
		nums[right] = tmp;
		++left;
		--right;
	}
}
void rotate(int* nums, int numsSize, int k)
{
	if (k >= numsSize)
		k %= numsSize;
	Reverse(nums, 0, numsSize - k - 1);//前n-k个数逆置
	Reverse(nums, numsSize - k, numsSize - 1);//后k个逆置
	Reverse(nums, 0, numsSize - 1);//整体逆置
}
int main()
{
	int k = 0, i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("Please enter a value for K\n");
	scanf("%d", &k);
	rotate(arr, sz, k);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *(arr + i));
	}
	return 0;
}
