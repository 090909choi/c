#include<stdio.h>

int Divisor(int n)
{
	int sum;
	sum = 0;
	for(int i = 1; i<=n; i++)
	{
		if(n%i==0)
		{
			sum = sum + i;
		}
	}
	printf("%d",sum);
	return 0;
}

int main()
{
	
	int re = Divisor(4
);
}
