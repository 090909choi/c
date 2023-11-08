#include<stdio.h>

int main()
{
	int n,m;
	int sum;
	scanf("%d",&n);
	m = n;
	sum = 0;
	while(n>0)
	{
		printf("%d",n%10);
		sum = sum + n%10;
		n/=10;
	}
	printf("\гу:%d",sum);
	return 0;
}
