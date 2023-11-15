#include<stdio.h>

int main()
{
	int n,g;
	g = 1;
	
	scanf("%d",&n);
	while(1)
	{
		if(n%g==0)
		{
			printf("%d ",n/g);
			if(n<g)
			{
				break;
			}
		}
		g=g+1;
	}
	return 0;
}
