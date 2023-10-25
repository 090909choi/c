#include<stdio.h>

int  main()
{
	int a;
	
	scanf("%d",&a);
	
	if(a%2==0||a%3==0)
	{
		printf("배수 맞음.");
	}
	else
	{
		printf("배수 아님.");
	}
	return 0; 
}
