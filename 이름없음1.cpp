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
		i++;
		n=n*-1;
	}
	
	return 0;
}
