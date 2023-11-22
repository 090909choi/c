#include<stdio.h>

int main()
{
	int sum;
	printf("1");
	sum = 1;
	for(int i = 1; i <= 100; i++)
	{
		for(int z = 2; z<i; z++)
		{
			if(i%z==0)
			{
				printf("%d\n",i);
				sum = sum + i;
				break;
			}
		}
		
	}
	printf("%d",sum);
	return 0;
}
