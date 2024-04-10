#include<stdio.h>

int Factory(int n);

int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",Factory(n));
}

int Factory(int n)
{
	int sum = 1;
	for(int i = n;i>0;i--){
		sum *= i;
	}
	return sum;
}
