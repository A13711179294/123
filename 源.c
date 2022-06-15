#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int* runningSum(int* nums, int numsSize, int* returnSize)
{
    int i = 0, j = 0, temp = 0;
    int* arr = malloc(sizeof(int) * (numsSize));
    *returnSize = numsSize;
    for (i = 0; i < numsSize; i++)
    {
        temp = 0;
        for (j = 0; j <= i; j++)
        {
            temp += nums[j];
        }
        arr[i] = temp;
    }
    return arr;
}
int main()
{
    int i = 0, retsize = 0;
    int arr1[5] = { 1,2,3,4,5 };
    int sz = sizeof(arr1) / sizeof(arr1[0]);
    int* p = runningSum(arr1, sz, &retsize);
    for (i = 0; i < sz; i++)
    {
        printf("%d ", p[i]);
    } 
    free(p);
    p = NULL;
    return 0;
}