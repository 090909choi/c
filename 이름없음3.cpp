#include<stdio.h>

int main()
{
	int n,sum;
	
	for(int i=1;i<=1000;i++)
	{
		if(i%3==0)
		{
			printf("%d ",i*-1);
			sum=sum+(i*-1);
		}
		else
		{
			printf("%d ",i);
			sum=sum+(i);
		}
	}
	printf("%d",sum);
	return 0;
}
