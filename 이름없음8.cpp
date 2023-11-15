#include<stdio.h>

int main()
{
	int n,g,sum,h;
	g = 1;
	sum=0;
	h=0;
	
	scanf("%d",&n);
	while(n>=g)
	{
		if(n%g==0)
		{
			printf("%d ",n/g);
			sum = sum + 1 ;
			h = h + n/g;
		}
		g=g+1;
	}
	printf("약수의 개수:%d\n약수의 합:%d\n",sum,h);
	return 0;
}
