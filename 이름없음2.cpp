#include<stdio.h>

int Sum(int n);

int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",Sum(n));
}

int Sum(int n)
{
	int sum = 0;
	for(int i = 1;i<=n;i++){
		sum += i;
	}
	return sum;
}
