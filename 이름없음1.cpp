#include<stdio.h>

int ReverseNum(int n)
{
	int sum1,sum2,sum3;
	int a = 1;
	
	sum2=0;
	for(int i = 10; i<=n*10; i*=10)
	{
		sum1=n%i-sum2;
		if(sum3!=sum1/a)
		{
			printf(" 다른 수임 ");
			break;
		}
		sum3=sum1/a;
		sum2=sum1+sum2;
		a*=10;
	}
	printf("같은 수임 ");
	return sum1;
}

int main()
{
	
	int re = ReverseNum(111);
}
