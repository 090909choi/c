#include<stdio.h>

int main()
{
	for(int i=5;i>=1;i--)
	{
		printf("\n");
		for(int z=i;z<=5;z++)
		{
			printf("%2d",z);
		}
	}
	return 0;
}
