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
				printf("��Ī�� %d\n",i);
				sum=sum+i;
				sum1=sum1+1;
			}
		}
	}
	printf("%d�� ",sum);
	printf("%d���� ",sum1);
	return n; 
}

int main()
{
	
	int re = ReverseNum(3443);
}
