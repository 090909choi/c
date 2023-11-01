#include<stdio.h>

int main()
{
	int n,a,c;
	scanf("%d",&c);
	
	
	for(int i=1; i<=c; i++)
	{
		
	scanf("%d %d", &n,&a);
	
		if(n>a)
		{
			printf("yes");
		}
		else
		{
			printf("no");
		}
	
	}
	return 0;
}
