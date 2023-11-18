#include<stdio.h>

int main()
{
	int n=1;
	for(int i=5;i>=1;i--)
	{
		printf("\n");
		for(int z=i;z>=1;z--)
		{
			printf("%2d",z);
		}
		n++;
		
	}
	return 0;
}
