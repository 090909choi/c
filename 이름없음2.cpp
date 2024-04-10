#include<stdio.h>

int Hanoi(int n,int from,int to)
{
	if(n == 0)return 0;
	Hanoi(n-1,from,6-from-to);
	printf("%d %d %d",n,from,to);
	Hanoi(n-1,6-from-to,to);
}

int main()
{
	int n;
	scanf("%d",&n);
	Hanoi(n,1,3);
}
