#include<stdio.h>

int power(int n)
{
	int x;
	scanf("%d",&x);
	x=x*x;
	
	return x;
}

int main()
{
	int re = power(10);
	printf("%d",re);
}
