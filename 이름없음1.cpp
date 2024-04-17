#include<stdio.h>

int pascal(int n,int m){
	if(n == 1 || m == 1||n == m)
	{
		return 1;
	}
	return pascal(n-1,m) + pascal(n-1,m-1);
}

int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	printf("%d",pascal(n,m));
}
