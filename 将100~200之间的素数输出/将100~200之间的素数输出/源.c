#include<stdio.h>
int main()
{
	int n, a, r;
	for (n = 100 ; n <= 200 ; n++ )
	{	
		for (a = 2 ; a <= 200 && a < n; a++ )
		{
			r = n % a;
			if (r == 0)
			{
				break;
			}
			if (r != 0)
			{
			    continue;
			}			
		} 
		if (r != 0)
		{
			printf("%d\n", n);
		}
	}	
	return 0;
}