#include<stdio.h>

int Divisor(int n);

int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",Divisor(n));
}

int Divisor(int n)
{
	int sum;
	while(n>0)
	{
		sum*=10;
		sum += n%10;
		n /= 10;
	}
	return sum;
}
