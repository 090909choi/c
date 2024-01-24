#include<stdio.h>

int main()
{
	int a,b,c,d;
	scanf("%d %d %d %d",a,b,c,d);
	if(a+b+c+d == 0)
	{
		printf("D");
	}
	if(a+b+c+d == 1)
	{
		printf("C");
	}
	if(a+b+c+d == 2)
	{
		printf("B");
	}
	if(a+b+c+d == 3)
	{
		printf("A");
	}
	if(a+b+c+d == 4)
	{
		printf("E");
	}
	return 0;
}
