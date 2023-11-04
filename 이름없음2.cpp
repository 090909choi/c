#include<stdio.h>

int main()
{
	int n,a,b;
	
	scanf("%d",&n);
	scanf("%d,%d",&a,&b);
	if(n%a==0)
	{
		if(n%b==0)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
	}
	else
	{
		printf("0");
	}
	return 0;
}
