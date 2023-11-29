#include<stdio.h>

int ReverseNum(int n)
{
	int a;
	for(int i = 1; i<=n; i++)
	{
		for(int z = 1; z<=i;z++)
		{
			a=a+z;
		}
	}
	printf("%d",a);
}

int main()
{
	
	int re = ReverseNum(3);
}
