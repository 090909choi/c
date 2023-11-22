#include<stdio.h>

int main()
{
	for(int i = 5; i>=1;i--)
	{
		printf("\n");
		for(int j = 1; j<=i; j++){
			printf(" ");
		}
		
		for(int z = 6-i; z>=1;z--)
		{
			printf("%d",z);
		}
		
	}
}
