#include<stdio.h>

int main()
{
	int n,b;
	n=1;
	b=1;
	for(int z = 1;z<=6; z++)
	{
		n=1;
		printf("\n");
		printf("%d�г� ",b);
		for(int i = 1; i<=7;i++)
		{
		 	printf("%d�� ",n);
		 	n=n+1;
		}
		b=b+1;
	}
	return 0;
}
