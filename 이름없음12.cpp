#include<stdio.h>

int main()
{
	int sum = 0;
	for(int i=10;i>=1;i--)
	{
		printf("\n");
		for(int z=i;z>=1;z--)
		{
			printf("%d",z);
			sum=sum+z;
		}
		printf(" °è»ê : %d",sum);
	}
	printf("\n%d",sum);
	return 0;
}
