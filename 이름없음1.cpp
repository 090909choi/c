#include<stdio.h>

int Co(int n)
{
	if(n == 1) return 0;
	if(n%2==0) return 1 + Co(n/2);
	else return 1 + Co(n*3+1);
}

int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",Co(n));
}
