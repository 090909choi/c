#include<stdio.h>

int Divisor(int n);

int main()
{
	int n;
	scanf("%d",&n);
	Divisor(n);
}

int Divisor(int n)
{
	int sum = 0;
	for(int i = 1;i<=n;i++){
		if(n%i==0)
		{
			sum += 1;
		}
	}
	printf("%d",sum);
}
