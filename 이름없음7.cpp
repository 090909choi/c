#include<stdio.h>

int ReverseNum(int n)
{
	int a;
	for(int i = 1;i<=n;i++)
	{
		a+=i*i;
	}
	printf("%d",a);
}

int main()
{
	
	int re = ReverseNum(3);
}
