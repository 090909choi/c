#include<stdio.h>

int main()
{
	int i,n;
	n=200;
	for (i =50; i >=1; i--)
	{
		printf("%d ",n);
		printf("%d ",n-=1);
		n-=1;
		printf("%d ",n*=-1);
		printf("%d ",n+=1);
		n+=1;
		printf("%d ",n*=-1);
		printf("%d ",n-=1);
		n-=1;
		printf("%d ",n+=1);
		printf("%d ",n*=-1);
		printf("%d ",n-=1);
		n-=1;
		printf("%d ",n*=-1);
		printf("%d ",n+=1);
	}
	return 0; 
}
