#include<stdio.h>

int AbsoluteValue(int n)
{
	if(n<0)
	{
		printf("%d",n*-1);
	}
	else
	{
		printf("%d",n);
	}
	return 0;
}

int main()
{
	int re = AbsoluteValue(-12);
}
