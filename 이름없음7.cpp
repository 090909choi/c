#include<stdio.h>

int main()
{
	int n,sum,c;
	
	n = 10;
	sum = 0;
	while(n <= 17)
	{
		printf("%d ", n);
		sum=sum+n;
		c=c+1;
		n++;
	}
	printf("%d ",sum);
	printf("%d",c);
	return 0;
}
