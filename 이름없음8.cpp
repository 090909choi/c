#include<stdio.h>

int main()
{
	int n,a;
	int sum;
	scanf("%d",&n);
	sum = n;
	a=0;
	printf("%d�� ������ ������ :",n);
	while(n>0)
	{
		printf("%d",n%10);
		a=a*10+n%10;
		n/=10;
	}
	printf("\n");
	sum=sum+a;
	printf("\��:%d",sum);
	return 0;
}
