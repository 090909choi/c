#include<stdio.h>

int ReverseNum(int n)
{
	int sum,sum1;
	for(int i = 1000; i<=n; i++)
	{
		int a,b;
		a=i/1000;
		b=i%10;
		if(a!=b ||(i%100-b)/10!=i/100-a*10)
		{
				printf("대칭아닌 수 %d\n",i);
				sum=sum+i;
				sum1=sum1+1;
		}
	}
	printf("%d합 ",sum);
	printf("%d개수 ",sum1);
	return n; 
}

int main()
{
	
	int re = ReverseNum(1112);
}
