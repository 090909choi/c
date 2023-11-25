#include<stdio.h>

int DivisorCont(int n)
{
	int sum;
	sum = 0;
	for(int i = 1; i<=n; i++)
	{
		if(n%i==0)
		{
			sum = sum + 1;
		}
	}
	printf("%d",sum);
	return 0;
}

int main()
{
	
	int re = DivisorCont(4);
}
