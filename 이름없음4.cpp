#include<stdio.h>

int main()
{
	int i = 1;
	int z = 6;
//	int a = 6;
	
	while(z>=1)
	{
		i=1;
		printf("\n");
		printf("%d�г� ",z);
		while(i<=7)
		{
			printf("%d�� ",i);
			
			i++;
		}
		z--;
//		a=a-1;
	}	
	return 0;
}
