#include<stdio.h>

int main()
{
	for(int i = 1000;i<10000;i++)
	{
		if(i/1000 == i%10)
		{
			if((i%100-1%10)/10 == (i%1000-i%100)/100)
			{
				printf("%d  ",i);
			}
		}
	}
	return 0;
}
