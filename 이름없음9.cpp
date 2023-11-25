#include<stdio.h>

int Divisor(int n)
{
	int sum;
	for(int i = 1; i<n; i++)
	{
		if(n%i==0)
		{
			printf("%d ",i);
		}
	}
	return 0;
}

int main()
{
	
	int re = Divisor(60);
}
