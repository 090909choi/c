#include<stdio.h>

int  main()
{
	int a,b;
	
	scanf("%d,%d",&a,&b);
	
	if(a%2==0 && b%2==0)
	{
		printf("%d",a*b);
	}
	else if(a%2!=0 && b%2!=0)
	{
		printf("%d",a+b);
	}
	else
	{
		if(a>b)
		{
			printf("%d",a-b);
		}
		if(b>a)
		{
			printf("%d",b-a);
		}
	}
	return 0;
}
