#include<stdio.h>

int Sum(int n)
{
	int sum;
	sum=0;
	scanf("%d",&n);
	
	for(int i=1; i<=n; i++)
	{
		sum=sum+i;
	}
	return sum;
}

int main()
{
	int re;
	re = Sum(10);
	printf("re = %d\n",re);
}
