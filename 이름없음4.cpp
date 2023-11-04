#include<stdio.h>

int main()
{
	int sum,min,input;
	sum=0;
	min=100;
	for(int i=1;i<=4;i++)
	{
		scanf("%d",&input);
		if(input%2!=0)
		{
			sum=sum+input;
			if(input<min)
			{
				min=input;
			}
		}
	}
	if(sum==0)
	{
		printf("-1");
	}
	else
	{
		printf("%d\n",sum);
		printf("%d",min)
	}
	return 0;
}
