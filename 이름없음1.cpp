#include<stdio.h>

int  main()
{
	int a,b,c,d,e,f;
	a=2;
	b=5;
	c=7;
	d=9;
	e=12;
	
	scanf("%d",&f);
	
	if(f!=a && f!=b && f!=c && f!=d && f!=e)
	{
		printf("입력오류");
	}
	else if(f==a)
	{
		printf("스포츠카");
	}
	else if(f==b)
	{
		printf("승용차");
	}
	else if(f==c)
	{
		printf("SUV");
	}
	else if(f==d)
	{
		printf("승합차");
	}	
	else if(f==e)
	{
		printf("미니버스");
	}
	return 0;
	}
