#include<stdio.h>

int main()
{
	int i = 1;
	int a,n;
	n=1;
	scanf("%d",&a);
	while(i<=a)
	{
		printf("%d ",n);
		if(n%2==0)
		{
			n=n+1;
		}
		else
		{
			n=n-1;
		}
		i++;
	}
	return 0;
}
