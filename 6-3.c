#include<stdio.h>
int main()
{
	int arr[3][3] = { 2,7,2,3,9,6,0,1,4 };
	printf("%d %d", arr[0][0] + arr[1][1] + arr[2][2], arr[0][2] + arr[1][1] + arr[2][0]);
	return 0;
}
