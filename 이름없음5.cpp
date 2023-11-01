#include<stdio.h>

int main()
{
	int a;
	
	scanf("%d",&a);
	for(int i=9; i>=2; i--)
	{
		printf("%d X %d = %d\n",a,i,a*i);
	}
}
