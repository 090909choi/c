#include<stdio.h>

int ReverseNum(int n)
{
	int sum,sum1;
	for(int i = 1000; i<=n; i++)
	{
		int a,b;
		if(i/1000==i%10)
		{
			a=i/1000;
			b=i%10;
			if((i%100-b)/10==i/100-a*10)
			{
				printf("대칭수 %d\n",i);
				sum=sum+i;
				sum1=sum1+1;
			}
		}
	}
	printf("%d합 ",sum);
	printf("%d개수 ",sum1);
	return n; 
}

int main()
{
	
	int re = ReverseNum(3443);
}
