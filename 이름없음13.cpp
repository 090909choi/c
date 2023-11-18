#include<stdio.h>

int main()
{
	int n=1;
	int a = 1;
	for(int i=100;i>=1;i--)
	{
		a=1;
		printf("%d :",n);
		for(int z=1;z<=i;z++)
		{
			if(n%a==0)
			{
				printf("%d\n",a);
				n=n+1;
			}
			else
			{
				a++;
			}
		}
	}	
	return 0;
}
