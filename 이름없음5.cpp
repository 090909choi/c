#include<stdio.h>

int  main()
{
	float a;
	int b,c;
	scanf("%f",&a);
	b=a*10;
	c=(int)a;
	if(b%10>=5)
	{
		printf("%d",c+1);
	}
	else
	{
		printf("%d",c);
	}
	return 0;
}
