#include<stdio.h>

int main()
{
	int n,a;
	n=1;
	a=1;
	for(int i = 1;i<=100;i++)
	{
		
		printf("\n%d :",i);
		
		for(int z=1;z<=i;z++)
		{
			if(i%z==0)
			{
				printf("%3d",z);
			}
		}
		n++;
	}
	return 0;
}
