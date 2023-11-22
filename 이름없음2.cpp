#include<stdio.h>

int main()
{	
	int dd;
	for(int i = 100; i <= 999; i++)
	{
		dd=1;
		
		for(int z = 2; z<i; z++)
		{
			if(i%z==0)
			{
				dd=0;
				break;
			}
		}	
		if(dd){
			printf("%d ",i);
		}
	}
	return 0;
}
