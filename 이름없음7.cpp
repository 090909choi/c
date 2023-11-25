#include<stdio.h>

int ShowSum(int a,int b)
{
	int sum1,sum2;
	scanf("%d,%d",&a,&b);
	if(a<b)
	{
		for(int i = a; i<=b; i++)
		{
			sum1 = sum1 + i;
		}
		return sum1;
	}
	else
	{
		for(int i = b; i<=a; i++)
		{
			sum2 = sum2 + i;
		}
		return sum2;
	}
}

int main()
{
	int o;
	o = ShowSum(10,10);
	printf("%d",o);
}

