#include<stdio.h>

int main()
{
	int i = 1;
	int a;
	scanf("%d",&a);
	while(i<=a)
	{
		if(i%2==0)
		{
			printf("%d ",i*-1);
		}
		else
		{
			printf("%d ",i);
		}
		i++;
	}
	
	return 0;
}
