#include<stdio.h>

int  main()
{
	int a,b,c;
	
	scanf("%d,%d,%d",&a,&b,&c);
	
	if(a<b && a<c)
	{
		printf("첫 번째 정수가 제일 작음,");
	}
	if(b<a && b<c)
	{
		printf("두 번째 정수가 제일 작음,");
	}
	if(c<b && c<a)
	{
		printf("세 번째 정수가 제일 작음,");
	}
	if(a>b && a>c)
	{
		printf("첫 번째 정수가 제일 큼 ");
	}
	if(b>a && b>c)
	{
		printf("두 번째 정수가 제일 큼 ");
	}
	if(c>b && c>a)
	{
		printf("세 번째 정수가 제일 큼 ");
	}
	return 0; 
}
