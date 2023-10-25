#include<stdio.h>

int  main()
{
	float a,b,c;
	
	scanf("%f,%f,%f",&a,&b,&c);
	
	if(a<b<c)
	{
		printf("%f,%f,%f",a,b,c);
	}
		if(b<c<a)
	{
		printf("%f,%f,%f",b,c,a);
	}
		if(c<a<b)
	{
		printf("%f,%f,%f",c,a,b);
	}
		if(b<a<c)
	{
		printf("%f,%f,%f",b,a,c);
	}
		if(c<b<a)
	{
		printf("%f,%f,%f",c,b,a);
	}
		if(a<c<b)
	{
		printf("%f,%f,%f",a,c,b);
	}
	return 0; 
}
	
