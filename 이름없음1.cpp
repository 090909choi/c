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
		printf("�Է¿���");
	}
	else if(f==a)
	{
		printf("������ī");
	}
	else if(f==b)
	{
		printf("�¿���");
	}
	else if(f==c)
	{
		printf("SUV");
	}
	else if(f==d)
	{
		printf("������");
	}	
	else if(f==e)
	{
		printf("�̴Ϲ���");
	}
	return 0;
	}
