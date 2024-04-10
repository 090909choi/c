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
	if(n==1)return 1;
	else return n*Factory(n-1);
}
