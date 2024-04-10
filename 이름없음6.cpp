#include<stdio.h>

int Divisor(int n);

int main()
{
	int n;
	scanf("%d",&n);
	Divisor(n);
}

int Divisor(int n)
{
	if(n > 0)
	{
		printf("%d",n);
	}
	else if(n < 0)
	{
		printf("%d",n*-1);
	}
}
